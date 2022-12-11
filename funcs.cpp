//Task E is required
//Task A should return a string
#include <string>
#include <iostream>

//Task A
std::string printRange(int left, int right){
    static std::string returnVal;
        if(left == right + 1){
            return returnVal;
        }else{
            returnVal += std::to_string(left) + " ";
            return printRange(left + 1, right);
        }

}

//Task B

//Task C

//Task D

//Task E

//Task F