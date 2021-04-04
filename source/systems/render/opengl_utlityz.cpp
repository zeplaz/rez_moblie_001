
#include "opengl_utiltyz.hpp"


using namespace raz_mobile_01;


void APIENTRY GLAPIENTRY glDebugOutput(GLenum source,
                         GLenum type,
                         GLuint id,
                         GLenum severity,
                         GLsizei length,
                         const GLchar *message,
                         const void *userParam)
{
  //ignore non-significant error/warning codes
 if(id == 131169 || id == 131185 || id == 131218 || id == 131204) return;

 std::cout << "---------------" << std::endl;
 std::cout << "Debug message (" << id << "): " <<  message << std::endl;

 switch (source)
 {
     case GL_DEBUG_SOURCE_API:             std::cout << "Source: API"; break;
     case GL_DEBUG_SOURCE_WINDOW_SYSTEM:   std::cout << "Source: Window System"; break;
     case GL_DEBUG_SOURCE_SHADER_COMPILER: std::cout << "Source: Shader Compiler"; break;
     case GL_DEBUG_SOURCE_THIRD_PARTY:     std::cout << "Source: Third Party"; break;
     case GL_DEBUG_SOURCE_APPLICATION:     std::cout << "Source: Application"; break;
     case GL_DEBUG_SOURCE_OTHER:           std::cout << "Source: Other"; break;
 } std::cout << std::endl;

 switch (type)
 {
     case GL_DEBUG_TYPE_ERROR:               std::cout << "Type: Error"; break;
     case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR: std::cout << "Type: Deprecated Behaviour"; break;
     case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR:  std::cout << "Type: Undefined Behaviour"; break;
     case GL_DEBUG_TYPE_PORTABILITY:         std::cout << "Type: Portability"; break;
     case GL_DEBUG_TYPE_PERFORMANCE:         std::cout << "Type: Performance"; break;
     case GL_DEBUG_TYPE_MARKER:              std::cout << "Type: Marker"; break;
     case GL_DEBUG_TYPE_PUSH_GROUP:          std::cout << "Type: Push Group"; break;
     case GL_DEBUG_TYPE_POP_GROUP:           std::cout << "Type: Pop Group"; break;
     case GL_DEBUG_TYPE_OTHER:               std::cout << "Type: Other"; break;
 } std::cout << std::endl;

 switch (severity)
 {
     case GL_DEBUG_SEVERITY_HIGH:         std::cout << "Severity: high"; break;
     case GL_DEBUG_SEVERITY_MEDIUM:       std::cout << "Severity: medium"; break;
     case GL_DEBUG_SEVERITY_LOW:          std::cout << "Severity: low"; break;
     case GL_DEBUG_SEVERITY_NOTIFICATION: std::cout << "Severity: notification"; break;
 } std::cout << std::endl;
 std::cout << std::endl;
}




void printProgramLog( GLuint program )
{
    //Make sure name is shader
    if( glIsProgram( program ) )
    {
        //Program log length
        int infoLogLength = 0;
        int maxLength = infoLogLength;
        
        //Get info string length
        glGetProgramiv( program, GL_INFO_LOG_LENGTH, &maxLength );
        
        //Allocate string
        char* infoLog = new char[ maxLength ];
        
        //Get info log
        glGetProgramInfoLog( program, maxLength, &infoLogLength, infoLog );
        if( infoLogLength > 0 )
        {
            //Print Log
            printf( "%s\n", infoLog );
        }
        
        //Deallocate string
        delete[] infoLog;
    }
    else
    {
        printf( "Name %d is not a program\n", program );
    }
}

void printShaderLog( GLuint shader )
{
    //Make sure name is shader
    if( glIsShader( shader ) )
    {
        //Shader log length
        int infoLogLength = 0;
        int maxLength = infoLogLength;
        
        //Get info string length
        glGetShaderiv( shader, GL_INFO_LOG_LENGTH, &maxLength );
        
        //Allocate string
        char* infoLog = new char[ maxLength ];
        
        //Get info log
        glGetShaderInfoLog( shader, maxLength, &infoLogLength, infoLog );
        if( infoLogLength > 0 )
        {
            //Print Log
            printf( "%s\n", infoLog );
        }

        //Deallocate string
        delete[] infoLog;
    }
    else
    {
        printf( "Name %d is not a shader\n", shader );
    }
}