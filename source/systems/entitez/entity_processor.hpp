

#ifndef RAZ_MOBILE_ENTITY_PROCESSOR_HPP
#define RAZ_MOBILE_ENTITY_PROCESSOR_HPP

#include "entity_list.hpp"

namespace raz_m01

{


using int_ES = std::uint32_t;
using Component_Type = std::uint8_t;

const constexpr Component_Type  MAX_COMPONENTS = 32;

using Signature_bitset = std::bitset<MAX_COMPONENTS>;

struct Transform
{
    glm::vec3 pos;
    glm::quat rotation;
    glm::vec3 scale;

}

class entity_processor
{


template<class Container, typename... Entityz, int_ES... Indexiz> 
auto select(Container<Entityz...> const& t , std::Valuelist<int_ES,Indexiz...>)
{
    return iter_solve(/*/semd a msg to be resolved on scedualer)//can the task have flags which deturns its chan of repsoblity? hasble bins, that likely reolve
    to threads,  im talking using a hash reolve to deide whic h thread quie to senid aontoppthe parlization in hearted from, responable input gathr//as that such..
    it improant to remeber that its veryheart to speak out.or ever,goabout along the other said..well.its very heared btween the glowing hriver and soultions makring ordersz.*/
}
/*
for ()
*/

};

}

#endif