//ts217

#include <string>


class ManegeData
{
    private:
        std::string name;
        std::string data;

        std::string path;


    public:

        ManegeData(std::string name, std::string data );

        void setData();
        
        std::string getName();
        std::string getData();
};