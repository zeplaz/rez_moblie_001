#ifndef RAZ_SHADER_HANDLER_HPP
#ifndef RAZ_SHADER_HANDLER_HPP

#include "gl_libs.hpp"

#include <vector>
#include <unorderd_map>

namespace raz_m01 {
/*/bitset maskz need.
100000 =VERTEX
010000 =FRAGMENT
001000 =COMPUTE
000100 =GEOMETRY
000010 =TESS_EVAL
000001 =TESS_CTRL

/*/
enum class Shader_Type : unsigned int{
VERTEX,
FRAGMENT,
COMPUTE,
GEOMETRY,
TESS_EVAL,
TESS_CTRL

};



typedef GLuint shadr_id;

struct shader_data
{
std::string name;
bool is_seprate;
bool is_compled;
bool is_linked;
};

struct shader_program_data{
GLuint gprogram_id = 0;
bool is_deffered;

};   


struct shader_complier_info
{
    std::bitset<6> contained_shaders;
    std::array<GLuint,6> gl_code_ids;
    std::vector<std::string> raw_code; 
};



template<class type>
class map_finder
{

};

class shader_program_mgmt 
{

std::unorderd_map<GLuint, shader_data> shader_info_map;
std::vector<GLuint> shader_programs;

public : 

bool load_shadbit(std::string name_shader,Shader_Type shd_type);
bool complie(bool is_it_deffered);
void link(GLuint gl_shaderprgm_ID);
void use_shader(std::string to_use);
void use_shader(GLuint to_use);
void un_bind_shader(GLuint unbined);


bool get_deffered(std::string)
{
    return is_deffered;
}

bool* get_prt_deffer()
{
return &is_deffered;
}



void gl_shader_status(GLint shd_ID)
  {
    GLchar* log_shader;

    std::string constc_log = "\n\n#->shader statuz LOG::: FROMPRGM ID::";
    constc_log +=std::to_string(gl_shaderprgm_ID);
    constc_log +='\n';
    constc_log +="\n shaderID::"+std::to_string(shd_ID);
    constc_log +='\n';

    GLint logsize;

    glGetShaderiv(shd_ID,GL_INFO_LOG_LENGTH,&logsize);
    log_shader = new GLchar[logsize+1];
    glGetShaderInfoLog(shd_ID, logsize, NULL, log_shader);
    constc_log+=log_shader;
    //run_log(constc_log);
  }
};

//typedef std::shared_ptr<shader_program> shader_handler;

void link(GLuint gl_shaderprgm_ID){
       GLint isLinked = 0;
      //GLint maxLength = 0;

      glLinkProgram(gl_shaderprgm_ID);
      glGetProgramiv(gl_shaderprgm_ID, GL_LINK_STATUS, &isLinked);
      if(isLinked ==GL_FALSE)
      {
        std::cerr<<"\n\n##**linkshadr_faild\n\n";
        gl_shader_status(gl_shaderprgm_ID);
        exit(SHADER_LINK_FAIL);
}

}
#endif