#include <iostream>
#include <deque>
#include <algorithm>

template <typename T>
void Display(std::deque<T> &v)
{
    std::cout<<"[ ";
    for (auto element: v)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create Deque
    std::deque<int> d1 {1,2,3,4,5};
    std::deque<int> d2 (10,100);  //Bulk Creation of ten values, all 100.
    std::deque<int> d3;
    
    //Assignment of Values
    d3 = {9,8,7,6,5};
    
    Display(d1);  // [1 2 3 4 5]
    Display(d2);  // [100 100 100 100 100 100 100 100 100 100]
    Display(d3);  // [9 8 7 6 5]
    
    //Accessing Members
    std::cout<<"4th Element is: "<<d1.at(3)<<std::endl;  // 4
    std::cout<<"4th Element is: "<<d1[3]<<std::endl;     // 4
    
    //Adding items to the back
    d1.push_back(6);
    Display(d1);  // [1 2 3 4 5 6]
    
    //Adding items to the front
    d1.push_front(0);
    Display(d1);  // [0 1 2 3 4 5 6]
    
    //Removing items from the back
    d1.pop_back(); 
    Display(d1); // [0 1 2 3 4 5]
    
    //Removing items from the front
    d1.pop_front(); 
    Display(d1); // [1 2 3 4 5]
    
    //Inserting a 100 in front of the 3
    std::deque<int>:: iterator itr = std::find(d1.begin(), d1.end(), 3);
    d1.insert(itr, 100);
    Display(d1); // [1 2 100 3 4 5]
    
    //Erasing the element holding value 2
    itr = std::find(d1.begin(), d1.end(), 2);
    d1.erase(itr);
    Display(d1); // [1 100 3 4 5]
    
    //Size of the Vector
    std::cout<<"Size of Deque is: "<<d1.size()<<std::endl; // 5
    
    //The Front and Back Elements
    std::cout<<"Front element is: " <<d1.front()<<std::endl; // 1
    std::cout<<"Back Element is: "<<d1.back()<<std::endl;    // 5
    
    //Changing Front and Back Elements 
    d1.front() = 500;
    d1.back() = 1000;
    Display(d1); // [500 100 3 4 1000]
    
    //Clear the Deque
    d1.clear();
    Display(d1); // [ ]
    
    if (d1.empty())
    std::cout<<"The Deque is now Empty";
    
    return 0;
}