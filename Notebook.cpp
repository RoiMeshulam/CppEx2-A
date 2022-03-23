#include <iostream>
#include <unordered_map>
#include "Direction.hpp"
#include <algorithm>
#include <string>
#include <stdexcept>
#include "Notebook.hpp"
#define ROW_MAX_LENGTH 100


using namespace ariel;

namespace ariel{
    Notebook::Notebook() {}

    void Notebook::write(int page,int row,int column,Direction d,std::string str){


    }
    std::string Notebook::read(int page,int row,int column,Direction d,int length){

        return "hello";
    }
    void Notebook::erase(int page,int row,int column,Direction d,int length){

    }
   std::string Notebook:: show(int page){
        return "world";
    }

}







