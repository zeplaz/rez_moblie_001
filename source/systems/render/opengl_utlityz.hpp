
/*
**utilties and help loging functions
* 
*/

#include "gl_libs.hpp"

namespace raz_mobile_01
{



#ifndef RAZ_MOBILE_OPENGL_UTILITYZ_HPP
#define RAZ_MOBILE_OPENGL_UTILITYZ_HPP

void APIENTRY GLAPIENTRY glDebugOutput(GLenum source,
                         GLenum type,
                         GLuint id,
                         GLenum severity,
                         GLsizei length,
                         const GLchar *message,
                         const void *userParam);




/*
from lazyfoo.net/tutorials/SDL/51_SDL_and_modern_opengl
*/

void printProgramLog( GLuint program );
void printShaderLog( GLuint shader );

/*
auto printProgramLog = [&](auto const GLuint program)
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
*/
}
#endif 




