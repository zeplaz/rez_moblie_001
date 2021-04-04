

#include "opengl_utility.hpp"
#include "../errorhandler.hpp"
#include "../std_libs.hpp"

//using namespace raz_mobile;
#include <SDL.h>
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <gl\glu.h>




namespace raz_mobile
{

class window_mgmt
{
  public : 
  
    void foucs();  
    bool init(std::string const& window_tile);
    void update();
    void handle_SDL( SDL_Event& e);
    void process_event();

    int get_width();
    int get_height();

//Window focii
	bool hasMouseFocus();
	bool hasKeyboardFocus();
	bool isMinimized();
	bool isShown();



  void shutdown();

  private : 

    SDL_Window* mWindow;
		SDL_GLContext m_glContext;
    
		int mWindowID;
		int mWindowDisplayID;

		//Window dimensions
		int mWidth;
		int mHeight;

		//Window focus
		bool mMouseFocus;
		bool mKeyboardFocus;
		bool mFullScreen;
		bool mMinimized;
		bool mShown;

};

class render_mgmt
{
   const int PRIMARY_SCREEN_WIDTH  = 1000; 
   const int PRIMARY_SCREEN_HEIGHT = 1000;
    
    int gTotalDisplays = 0;
    SDL_Rect* gDisplayBounds = NULL; 
    window_mgmt window;

    const constexpr int MAX_SHADER_PROGRAMS = 3; 
    std::array<int,MAX_SHADER_PROGRAMS> shader_progam_handles;


public : 

void render();
void run_gl_shader_programs();


};





struct shader_program_data{
GLuint gprogram_id = 0;
GLint 
};



   
 


   

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