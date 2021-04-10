
#ifndef RA_ERROR_HANDLER_HPP
#define RA_ERROR_HANDLER_HPP


//#ifndef DEBUG_01
#define DEBUG_01
//#endif 

#include <string>

namespace raz_mobile_01
{

 enum Exit_Error_Code : int{

   SHADER_PARSER_FAIL = -11,
   PARSER_FAIL = -10,
   ENGINE_CONFIGURE_FAIL = -34,
   TEXTURE_FAIL = -12,
   SHADER_FAIL = -13,
   MAIN_FAIL = -14,
   ENGINE_FAILURE = -15,
   OPENGL_FAILCAUGHT = -16,
   FILE_FORMATE_ERROR = -17,
   MAPLOOKUP_FAIL = -18,
   SHADER_LINK_FAIL = -19,
   STBI_LOAD_FAIL = -20,
   OI_UTILITYZ_FAIL =-31
   SDL_FAIL = -33;
   
 };


 static std::string error_to_string(int in_error)
 {
   switch(in_error)
   {
     case PARSER_FAIL : 
     return "PARSER_FAIL";
     
     case ENGINE_CONFIGURE_FAIL :
     return "ENGINE_CONFIGURE_FAIL"
     
     case SHADER_PARSER_FAIL :
     return "SHADER_PARSER_FAIL";

     case TEXTURE_FAIL:
     return "TEXTURE_FAIL";

     case SHADER_FAIL :
     return "SHADER_FAIL";

     case MAIN_FAIL :
     return "MAIN_FAIL";

     case ENGINE_FAILURE:
     return "ENGINE_FAILURE";

     case OPENGL_FAILCAUGHT:
     return "OPENGL_FAILCAUGHT";

     case FILE_FORMATE_ERROR:
     return "FILE_FORMATE_ERROR" ;

     case MAPLOOKUP_FAIL:
     return "MAPLOOKUP_FAIL";

     case SHADER_LINK_FAIL:
     return "SHADER_LINK_FAIL";

     case STBI_LOAD_FAIL:
     return "STBI_LOAD_FAIL";

     case OI_UTILITYZ_FAIL:
     return "OI_UTILITYZ_FAIL";

     case SDL_FAIL:
     {
       return "SDL_FAIL";
     }

     default :
     return "UNKNOWN_ERROR";
   }
 }
  
}
 #endif
