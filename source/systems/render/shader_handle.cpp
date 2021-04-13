



#include "shader_handle.hpp"
using namespace raz_m01;

shader_program::load_shadbit(std::string name_shader, Shader_Type shd_type)
{
    GLint id = NULL:
    switch (static_cast<Shader_Type> shd_type)
    case Shader_Type::VERTEX: 
    {
        id = glCreateShader(GL_VERTEX_SHADER);
        break;
    }
    case Shader_Type::FRAGMENT: 
    {
        id = glCreateShader(GL_FRAGMENT_SHADER);
        break;
    }
     case Shader_Type::COMPUTE: 
    {
        id = glCreateShader(GL_COMPUTE_SHADER);
        break;
    }
     case Shader_Type::TESS_EVAL: 
    {
        id = glCreateShader(GL_TESS_EVALUATION_SHADER);
        break;
    }
     case Shader_Type::TESS_CTRL: 
    {
        id = glCreateShader(GL_TESS_CONTROL_SHADER);
        break;
    }

         case Shader_Type::GEOMETRY: 
    {
        id = glCreateShader(GL_GEOMETRY_SHADER);
        break;
    }

   
}