#include "funcs.h"
#include <iostream>
#include <string>
#include <cctype>  

std::string printRange(int left, int right)
{
    // for(int i = left; i < right; i++){
    //     std::cout << i << std::cout;
    // }
    if (left > right)
        return "";
    if (left == right)
        return std::to_string(left);
    else
        return std::to_string(left) + " " + printRange(left + 1, right);

};

int sumRange(int left, int right)
{
    if (left == right)
        return left;
    else if (left > right)
        return 0;
    else
        return  left + sumRange(left + 1, right);
};

int sumArray(int *arr, int size)
{
    if(size > 0){
        return arr[size - 1] + sumArray(arr, size -1);
    }
    return 0;
}
bool isAlphanumeric(std::string s){
    if(s.length() == 0){
        return true;
    }
    else if(!isalnum(s[0])){
        return false;
    }
    return isAlphanumeric(s.substr(1,s.length()));
}
bool nestedParens(std::string s){
    if(s.length() == 0){
        return true;
    }
    else if( s[0] == '(' && s[s.length() - 1] == ')' ) {
        return nestedParens(s.substr(1, s.length() - 2));
    }
    else{
        return false;
    }
}
