


using namespace raz_mobile_01; 

Engine::configure(auto pak)
{

}

int Engine::ignition()
{

}

Engine_Status Engine::process_halt_cmdl(std::string& in_cmd)
{

}
int Engine::cycle()
{

    while(eng_stat== Engine_Status::RUNNING)
    {
        if(eng_stat == Engine_status::HALT)
        {   std::string raw_cmd;
            std::cout << "Engine is halted; plz enter cmd:";
            std::cin >> raw_cmd;
            std::cout << "\n cmd enterd..processing..\n";

            eng_stat = 
        }
        //kickoff thread que


            /// opengl render thread.

            /// is the sdl event thing its own thread?


        /// check for error wait for some stuff?

    }
   

}









/*


void configure(void* pak)
{
if(pak == nullptr)
{



    
}

}/