//Task E is required
//Task A should return a string
#include <string>

//Task A
std::string printRange(int left, int right){
    std::string returnVal;
    if(left < right){
        returnVal += std::string(right);
        printrange(left, right - 1);
    }else{
        return returnVal;
    }
    return returnVal;

}

//Task B

//Task C

//Task D

//Task E

//Task F