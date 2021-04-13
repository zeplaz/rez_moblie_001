

#ifndef RAZ_MOBILE_PARSER_MCP_HPP
#define RAZ_MOBILE_PARSER_MCP_HPP

#include <fstream>
#include <iostream>
#include <filesystem>



namespace stdfs = std::filesystem;

namespace raz_m01
{



template <class T, class... args>
struct pars_pak
{
    uint id;
    T data(args...);
};

class file_mgmt
{

    stdfs::directory_entry app_root;
    std::vector<stdfs::path> config_paths;
    stdfs::temp_directory_path usable_temp_dir;
    

    void load_config_paths();
    void load_root_folder();
    

};

enum class Config_Type
{
ENGINE_CONFIG,
SCENE_CONFIG,
SHADER_CONFIG

};

struct config_data
{   
    Config_Type config_type;
    std::string name;
    std::string s_content;

};

class parser
{
    protected :
 
    int current_file_index;

    void load_config_file()
    void load_file(stdfs::path pathz); 
    void strip_comments(std::string raw_file)
    {
        std::size_t pos;
    }

    public :
};

}

#endif