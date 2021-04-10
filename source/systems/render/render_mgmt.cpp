




using namespace raz_mobile_01;


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


void  window_mgmt::focus()
{
	//Restore window if needed
	if( !mShown )
	{
		SDL_ShowWindow( mWindow );
	}

	//Move window forward
	SDL_RaiseWindow( mWindow );
}
bool window_mgmt::handle_SDL( SDL_Event& e)
{
  if( e.type == SDL_WINDOWEVENT && e.window.windowID == mWindowID )
  {
    switch( e.window.event )
		{
			//Window moved
			case SDL_WINDOWEVENT_MOVED:
			mWindowDisplayID = SDL_GetWindowDisplayIndex( mWindow );
      break;

      //Window appeared
			case SDL_WINDOWEVENT_SHOWN:
			mShown = true;
			break;

			//Window disappeared
			case SDL_WINDOWEVENT_HIDDEN:
			mShown = false;
			break;

			//Get new dimensions and repaint
			case SDL_WINDOWEVENT_SIZE_CHANGED:
			mWidth = e.window.data1;
			mHeight = e.window.data2;
			SDL_RenderPresent( mRenderer );
			break;

    
  }
}
bool window_mgmt::init()
{   
    bool success = true; 

    // 
    if(SDL_Init(SDL_INIT_VIDEO)< 0 )
    {
        std::cerr << "ERRROR::::SDLFAILED TO IGNIUGHT!! \n" << SDL_GetError() << '\n';
        sucess = false; 

    }
    else 
    {
    SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 4 );
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 6 );
		SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );

    window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, PRIMARY_SCREEN_WIDTH, PRIMARY_SCREEN_HEIGHT, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN |SDL_WINDOW_RESIZABLE);

    }

}
