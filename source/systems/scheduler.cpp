



using namespace raz_m01;

    void thread_manger::detect_thread_count()
    {   
        //std::size_t thread_count;
        hardware_thread_count = std::jthread::hardware_concurrency();
                /*
                        if(count < MAX_THREAD_POOL)
                    {
                        thread_count = count;
                    }

                    else 
                    {
                        thread_count = MAX_THREAD_POOL;
                    }*/
        #ifdef DEBUG_01
        std::cout << "##DEBUGCOUT:::##--->jthread reports::hardware_concurrency of:" << hardware_thread_count << "\n\n"
        #endif 
    }
    
    void thread_manger::define_thread_pool()
    {
     this->detect_thread_count();
    ------ main_thread_pool.resize(hardware_thread_count);

     for(int i; i <hardware_thread_count;i++)
     {
        std::jthread jthrd;
    -------  main_thread_pool.push_back(jthrd);
     }   
    }



void thread_pool::set_thread_pool_size(std::size_t thread_count)
{
    active_threads.resize(thread_count);
    thread_pool.resize(thread_count);
} 

void thread_pool::start(std::size_t num_threads)
    {
        for(auto i = 0u;i< num_threads; i++)
        {

        }
    }

void thread_pool::stop() noexcept
    {

    }


thread_pool::set_thread_pool_size()
{
     int count = thread: : std::hardware_concurrency();
     if(count < MAX_THREAD_POOL)
     {
         thread_count = count;
     }

     else 
     {
         thread_count = MAX_THREAD_POOL;
     }

     active_threads.resize(thread_count);
     thread_pool.resize(thread_count);



void setup_threads();




// entity handler?
   std::unordered_set<std::string> named_entity_set;
   std::unordered_set<uint32_t>    active_compoent_set;



};
void check_avilable_threads()

void threads_bussy_add_que()
{
    std::priority_queue<>
}
void task_schedule_er::
}
*/
#endif