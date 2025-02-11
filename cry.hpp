//ts217

#include <string>

class Cry
{
private:
    
    std::string key;
    std::string iv = "1234567890123456"; // valor único usado para embaralhar a criptografia
    std::string cry, uncry;

    std::string dataToHide;

public:

    Cry(const std::string& dataToHide, const std::string& key);

    std::string getDataToHide()const;
    std::string getKey()const;
    std::string getIV()const;
    std::string getCry();
    std::string getUncry();


    std::string setCry();

    void encrypt();
    void decrypt();

};