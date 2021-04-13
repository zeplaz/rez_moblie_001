/*
***scheduler
***handles the threading and sicrization i hope
*/

#ifndef RAZ_MOBILE_TASK_SCHEDULE_HPP
#define RAZ_MOBILE_TASK_SCHEDULE_HPP


#include<thread>
#include <unordered_set>
#include <vector>
#include <functional>
#include <condtional_variable>

#include <future>
///handles ids of compoents 
///handles id of entienes to process via comments. mangers.
///thread handling?

//cpprefrence hardware_interface_size

#ifdef __cpp_lib_hardware_interference_size
    using std::hardware_constructive_interference_size;
    using std::hardware_destructive_interference_size;
#else
    // 64 bytes on x86-64 │ L1_CACHE_BYTES │ L1_CACHE_SHIFT │ __cacheline_aligned │ ...
    constexpr std::size_t hardware_constructive_interference_size
        = 2 * sizeof(std::max_align_t);
    constexpr std::size_t hardware_destructive_interference_size
        = 2 * sizeof(std::max_align_t);
#endif

namespace raz_m01{


/*//
main body of schduler
consts of 

some template utiltes classes i hope to expand.

/*************************************************\
 struct thread_manger::
    keep track of alignment requiermnts, the hardware threads
    and holds the thread pool(see thread_pool class)

/*/



constexpr const uint MAX_THREAD_POOL = 8;


template<class R, class... fnc>
class base_task
{
 using the_task = std::function<R(fnc...)>;

 uint id;
 int priorty;
 bool waiting;

};

/// compare semaphore to mutex solutions..

#include <thread>       
#include <atomic> 
#include <vector>
#include <semaphore>



struct thread_manger
{
    int hardware_thread_count;

    void define_thread_pool();
    inline void detect_thread_count()
    {
        hardware_thread_count = std::jthread::hardware_concurrency();
    }
    
    private :
    thread_pool* mthread_pool;

};

class thread_pool
{
    public : 
       // void set_thread_pool_size();
        
        explicit thread_pool(std::size_t num_threads)
        {
            start(num_threads);
        }

    template<class T>
    auto enqueue(T task)->std::future<decltype(task())>
    {
        auto wrapper = std::make_shared<std::package_task(decltype(task())()>>(std::move(task));

        {
            std::unique_lock<std::mutex> lock(event_mutex);
            task_que.emplace([=]
            {
                (*wrapper)();
            });
                event_condtional.notify_one();
                return wrapper->get_future();
        }
    }

    private :
        std::priority_queue<tasks> task_que;
        uint                      thread_count =0;
       
       
       std::vector<bool>         active_threads;
       std::vector<std::jthread> the_pool;

        std::mutex event_mutex;
        std::conditional_variable event_condtional;

        void start(std::size_t num_threads)
        {
            for(auto i = 0u;i< num_threads; i++)
            {

            }
        }

        void stop() noexcept
        {

        }



};

class task_schedule_er
{   
 
void setup_threads();

task_schedule_er()
{
    setup_threads();
}

// entity handler?
   std::unordered_set<std::string> named_entity_set;
   std::unordered_set<uint32_t>    active_compoent_set;



};
void check_avilable_threads()

/*
void threads_bussy_add_que()
{
    std::priority_queue<>
}
void task_schedule_er::
}
*/
}
#endif