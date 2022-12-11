//Task E is required
//Task A should return a string
#include <string>
#include <iostream>

//Don’t use loops, global or static variables.

//Task A
std::string printRange(int left, int right){
        if(left == right + 1){
            return "";
        }else{
            return std::to_string(left) + " " + printRange(left + 1, right);
        }

}

//Task B
int sumRange(int left, int right){
    if(left == right + 1){
        return 0;
    }else{
        return left + sumRange(left + 1, right);
    }
}

//Task C
int sumArray(int *arr, int size){
    if(size == 0){
        return 0;
    }else{
        return arr[size - 1] + sumArray(arr, size - 1);
    }
}

//Task D
bool isAlphanumeric(std::string s){
    if(s.length() == 0){
        return 0;
    }else{
        
    }
}

//Task E

//Task F