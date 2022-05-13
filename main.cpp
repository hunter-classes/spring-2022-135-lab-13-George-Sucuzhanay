#include "funcs.h"
#include <string>
#include <iostream>
#include <vector>
using std::vector;


double sum(double a[], int size)
{
    double total = 0;
    for (int i =0; i < size; i++)
    {
        total = total + a[i];
    }
    return total;
}
int main()
{
    // vector<int> nums = {1,2,3,4,5,6,7,8};
    // for (int v : nums)
    //     std::cout << v << std::endl;
    // std::string result = printRange(4,6);
    // std::cout << result << std::endl;
    std::cout << printRange(1,10) << std::endl;
    // printRange(1,5);

    std::cout << sumRange(1,3) << std::endl;

    // creating arrays and pointers
    std::cout << "<------------------------------>" << std::endl;

    int a[10] = {1,2,3,4,5,6}; // created an array with 10 values in memory
    int* p = a; // now p points to the address of a[0]
    std::cout << p << std::endl;
    std::cout << *a << std::endl;
    // std::cout << sum([], 4) << std::endl;

    int *arr = new int[10]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
   
    
    return 0;
}