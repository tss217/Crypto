#include "cry.hpp"
#include"manageData.hpp"
#include <iostream>

int main(){

    std::string data =  "ola mundo";
    std::string key = "1234567890123456";

    Cry crypter(data,key);
    std::cout<<"before"<<crypter.getCry()<<std::endl;

    crypter.encrypt();
    std::cout<<"after  "<<crypter.getCry()<<std::endl;

    crypter.decrypt();
    std::cout<<"before  "<<crypter.getUncry()<<std::endl;

    ManegeData manager("haha",data);
    manager.setData();
    

}