#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void Display(std::vector<T> &v)
{
    std::cout<<"[ ";
    for (auto element: v)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{   
    //Creating Vectors
    std::vector<int> vec1 {1,2,3,4,5}; //Unlike an Array we can initialise all elements like this
    std::vector<int> vec2 (10, 100);  //Making a vector of 10 elements, all valued 100
    
    Display(vec1);  // [1 2 3 4 5]
    Display(vec2);  // [100 100 100 100 100 100 100 100 100 100]
    
    //Assignment of Values    
    vec2 = {9,8,7,6};
    Display(vec2);  // [9 8 7 6]
    
    //Adding items to the back
    vec1.push_back(6);
    Display(vec1);  // [1 2 3 4 5 6]
    
    //Accessing Members
    std::cout<<"6th Element is: "<<vec1.at(5)<<std::endl;  // 6
    std::cout<<"6th Element is: "<<vec1[5]<<std::endl;     // 6
    
    //Removing items from the back
    vec1.pop_back(); 
    Display(vec1); // [1 2 3 4 5]
    
    //Inserting a 100 in front of the 3
    std::vector<int>::iterator itr = std::find(vec1.begin(), vec1.end(), 3);
    //itr is now an iterator pointing to the element in the vector that held a value of 3
    
    vec1.insert(itr, 100); //Insert 100 as a new element where the 3 was, pushing the rest back
    Display(vec1); // [1 2 100 3 4 5]
    
    //Erasing the element holding value 2
    itr = std::find(vec1.begin(), vec1.end(), 2); //itr is now an iterator pointing to the 2 element
    vec1.erase(itr);
    Display(vec1); // [1 100 3 4 5]
    
    //Size of the Vector
    std::cout<<"Size of Vector is: "<<vec1.size()<<std::endl; // 5
    
    //The Front and Back Elements
    std::cout<<"Front element is: " <<vec1.front()<<std::endl; // 1
    std::cout<<"Back Element is: "<<vec1.back()<<std::endl;    // 5
    
    //Changing Front and Back Elements 
    vec1.front() = 500;   //front returns a reference to the first element so you can change it
    vec1.back() = 1000;   //back returns a reference to the last element so you can change it
    Display(vec1); // [500 100 3 4 1000]
    
    //Clear the Vector
    vec1.clear();
    Display(vec1); // [ ]
    
    if (vec1.empty())
    std::cout<<"The Vector is now Empty";
        
    return 0;
}