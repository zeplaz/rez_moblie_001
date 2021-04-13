


#ifndef RAZ_MOBLIE_RENDER_CONTEXT_BPAK_HPP
#define RAZ_MOBLIE_RENDER_CONTEXT_BPAK_HPP
#include <functional>

namespace raz_m01

{
struct render_context 
 {
    typedef std::function<void(const void* command,raz_m01::render_context rc)> cmd_func_t;

   // render_context(std::make_unique<decltype(m_member)::element_type>(...) context_data)
    render_context(void* context_data);
    
        template <class ContextClass>
        ContextClass& data();
        template <class ContextClass>
        const ContextClass& data() const;

    private : 
        void* m_data;

 };

    inline render_context::render_context(void* context_data)
    : m_data(context_data)
    {}

    template<class ContextClass>
    inline ContextClass& render_context::data()
    {
        return *reinterpret_cast<ContextClass*>(m_data);
    }

    template<class ContextClass>
    inline const ContextClass& render_context::data() const
    {
        return *reinterpret_cast<const ContextClass*>(m_data);
    }

}


#endif