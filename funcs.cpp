//Task E is required
//Task A should return a string
#include <string>
#include <iostream>

//Don’t use loops, global or static variables.

//Task A
// std::string printRange(int left, int right){
//     std::string returnVal;
//         if(left == right + 1){
//             returnVal = dummyVal;
//             dummyVal = "";
//             return returnVal;
//         }else{
//             dummyVal += std::to_string(left) + " ";
//             return printRange(left + 1, right);
//         }

// }

//Task B
int sumRange(int left, int right){
    if(left == right + 1){
        returnVal = dummyVal;
        dummyVal = 0;
        return returnVal;
    }else{
        dummyVal += left;
        return sumRange(left + 1, right);
    }
}

//Task C

//Task D

//Task E

//Task F