#include <iostream>
#include <unordered_map>
#include "Direction.hpp"
#include <algorithm>
#include <string>
#include <stdexcept>
#include "Notebook.hpp"
#define ROW_MAX_LENGTH 100

using ariel::Direction;

namespace ariel{
    Notebook::Notebook() {}

    void write(int page,int row,int column,Direction d,std::string str){


    }
    std::string read(int page,int row,int column,Direction d,int length){

        return "hello";
    }
    void erase(int page,int row,int column,Direction d,int length){

    }
    std::string show(int page){
        return "world";
    }

}







