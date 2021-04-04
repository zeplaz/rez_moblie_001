



using namespace raz_mobile;

void raz_render_mgmt::render()
{

    glClear(GL_COLOR_BUFFER_BIT);


    if(gl_dorender)
    {
        run_gl_shader_programs();
    }
    

}



void raz_render_mgmt::run_gl_shader_programs()
{

    for (const auto& iter : shader_progam_handles; )
    


      glUseProgram(iter)

      glUseProgram( NULL );    
}
