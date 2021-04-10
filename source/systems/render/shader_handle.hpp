#ifndef RAZ_SHADER_HANDLER_HPP
#ifndef RAZ_SHADER_HANDLER_HPP

#include "gl_libs.hpp"

#include <vector>
#include <unorderd_map>

namespace raz_mobile_01 {

enum class Shader_Type : unsigned int{
VERTEX,
FRAGMENT,
COMPUTE,
GEOMETRY,
TESS_EVAL,
TESS_CTRL

};

typedef GLuint shader_program;

struct shader_data
{
std::string name;
bool is_deffered;
bool is_seprate;

};

struct shader_complier_info
{
    std::bitset<6> contained_shaders;
    std::array<GLuint,6> gl_code_ids;
    std::vector<std::string> raw_code; 
};


struct shader_program_data{
GLuint gprogram_id = 0;
 
};   

template<class type>
class map_finder
{

};

class shader_program_mgmt 
{

std::unorderd_map<std::string, shader_program> shader_map;
std::unorderd_set<shader_program> shader_programs_set;

public : 

bool load_shadbit(std::string name_shader,Shader_Type shd_type);
bool complie(bool is_it_deffered);

void use_shader(std::string to_use);
void use_shader(GLuint to_use);
void un_bind_shader(GLuint unbined);


bool get_deffered(std::string)
{
    return is_deffered;
}

bool* get_prt_deffer()
return &is_deffered;

};

//typedef std::shared_ptr<shader_program> shader_handler;

}
#endif