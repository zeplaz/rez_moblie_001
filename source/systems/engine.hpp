


#ifndef RAZ_MOBILE_ENGINE_HPP
#define RAZ_MOBILE_ENGINE_HPP

//#include "render/render_mgmt"

#include "sdl_systms.hpp"
namespace raz_mobile_01
{
namespace globalz {
static float delta_time = 0.0f;	// time between current frame and last frame
static float lastFrame = 0.0f;
}

enum class OS_Type{
    WIN,
    LINUX,
    ANDROID
};

 enum class Engine_Status : unsigned char{

     INITAL,
     STANDBY,
     IGNITION,
     RUNNING,
     HALT,
     SHUDOWN,
     STALL,
     ERROR   
};

enum Systems_Online 
{
  SYM_SDL,
  RENDERER,
  SYM_INPUTS
};


sturct Engine
{   

    Engine_Status eng_stat;
    SDL_Event event; 

    int cycle();
    void configure(auto pak);
    int ignition();

    private : 
    Engine_Status process_halt_cmdl(std::string& in_cmd);




};



}
#endif

