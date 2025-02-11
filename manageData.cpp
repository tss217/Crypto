#include "manageData.hpp"

#include <iostream>
#include <dirent.h>
#include<string>
#include<fstream>

ManegeData::ManegeData(std::string name, std::string data):name(name),data(data){}

std::string ManegeData::getName(){
    return name;
}

std::string ManegeData::getData(){
    return data;
}

void ManegeData::setData(){
    std::ofstream outfile(getName()+".txt");

    if (outfile.is_open()){
        outfile << getData();
        outfile.close();
        std::cout<<"ok"<<std::endl;
    }
}
