


#ifndef RAZ_MOBILE_ENGINE_HPP
#define RAZ_MOBILE_ENGINE_HPP

#include "render/render_mgmt"

namespace raz_mobile
{




 enum class Engine_Status{

     STANDBY,
     IGNITION,
     RUN,
     HALT,
     SHUDOWN,
     ERROR   
};



sturct Engine
{
    Engine_Status m_eng_status;

    int engine cycle();
    SDL_Event event;



};




}
#endif
