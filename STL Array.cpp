#include <iostream>
#include <array>
#include <algorithm>

template <typename T>
void Display(std::array<T, 5> &a)
{
    std::cout<<"[ ";
    for (auto element: a)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Creating an Array
    std::array<int, 5> arr1 {1,2,3,4,5};
    std::array<int, 5> arr2;
    for (int i: {0,1,2,3,4})
    arr2[i] = i+1;
    
    Display(arr1);  // [1 2 3 4 5]
    Display(arr2);  // [1 2 3 4 5]
    
    //Accessing Members
    std::cout<<"3rd Element is: "<<arr1.at(2)<<std::endl;  // 3
    std::cout<<"3rd Element is: "<<arr1[2]<<std::endl;     // 3
    
    //Size of the Array
    std::cout<<"Size of Array is: "<<arr1.size()<<std::endl; // 5
    
    //The Front and Back Elements
    std::cout<<"Front element is: " <<arr1.front()<<std::endl; // 1
    std::cout<<"Back Element is: "<<arr1.back()<<std::endl;    // 5
    
    //Fill the Array with Zeros
    arr1.fill(0);
    Display(arr1);   // [0 0 0 0 0]
    
    return 0;
}