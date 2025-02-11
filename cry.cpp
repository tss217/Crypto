#include <iostream>
#include <string>
#include <cryptopp/aes.h>
#include <cryptopp/modes.h>
#include <cryptopp/filters.h>
#include <fstream>

#include "cry.hpp"

using namespace CryptoPP;

Cry::Cry(const std::string& dataToHide, const std::string& key): dataToHide(dataToHide), key(key){}


std::string Cry::getDataToHide()const{
    return dataToHide;
}

std::string Cry::getKey()const{
    return key;
}

std::string Cry::getIV()const{
    return iv;
}

std::string Cry::getCry(){
    return cry;
}

std::string Cry::getUncry(){
    return uncry;
}


void Cry::encrypt(){
    try{
        
        CBC_Mode<AES>::Encryption encryptor((byte*) getKey().data(), getKey().size(),(byte*) getIV().data());
        StringSource(getDataToHide(),true, new StreamTransformationFilter(encryptor,new StringSink(cry)));

        std::cout << "working....."<<std::endl;

    }catch(const Exception& e){std::cerr <<"erro:  "<<e.what()<<std::endl;}
        
}

void Cry::decrypt(){
    try{
        CBC_Mode<AES>::Decryption descryptor((byte*) getKey().data(), getKey().size(),(byte*) getIV().data());
        StringSource(getCry(),true, new StreamTransformationFilter(descryptor, new StringSink(uncry)));

        std::cout << "uncry....."<<std::endl;
        
    }catch(const Exception& e){std::cerr <<"erro:  "<<e.what()<<std::endl;}
}