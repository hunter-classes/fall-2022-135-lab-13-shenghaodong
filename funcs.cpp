//Task E is required
//Task A should return a string
#include <string>

//Task A
std::string printRange(int left, int right){
    std::string returnVal = "";
    if (right > left) {
        std::cout << "test" << std::endl;
        returnVal += std::to_string(left) + " ";
        printRange(left + 1, right);
    }else {
        return returnVal;
    }

}

//Task B

//Task C

//Task D

//Task E

//Task F