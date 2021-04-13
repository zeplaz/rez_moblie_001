
/********** //the windowing system has been modifed from
* lazyfoo.net/tutorials/SDL
*/

#ifndef RAZ_MOBILE_RENDER_MGMT_HPP
#define RAZ_MOBILE_RENDER_MGMT_HPP


#include "opengl_utility.hpp"
#include "shader_handler.hpp"

namespace raz_m01
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
    shader_program_mgmt shader_mgmt;

    //const constexpr int MAX_SHADER_PROGRAMS = 3; 
    //std::array<int,MAX_SHADER_PROGRAMS> shader_progam_handles;
    

public : 

void render();
void run_gl_shader_programs();


};



}

#endif

