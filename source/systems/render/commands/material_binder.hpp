

#ifndef RAZ_MOBILE_MATERIAL_BINDER_HPP
#define RAZ_MOBILE_MATERIAL_BINDER_HPP

namespace raz_m01
{


struct bindable_material
{
    std::string name;

    GLuint location = 0; // can there be more then one?
    GLuint ubo = 0; //can their be more then one?

    ////shader?


    inline bool operator()(GLuint bmat_id) const
    {
        if ()
    }
};


}



#endif