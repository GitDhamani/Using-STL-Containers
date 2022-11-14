#include <iostream>
#include <list>
#include <algorithm>

template <typename T>
void Display(std::list<T> &v)
{
    std::cout<<"[ ";
    for (auto element: v)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create List
    std::list<int> L1 {1,2,3,4,5};
    std::list<int> L2 (10,100);  //Bulk Creation of ten values, all 100.
    std::list<int> L3;
    
    //Assignment of Values
    L3 = {9,8,7,6,5};
    
    Display(L1);  // [1 2 3 4 5]
    Display(L2);  // [100 100 100 100 100 100 100 100 100 100]
    Display(L3);  // [9 8 7 6 5]
    
    //Adding items to the back
    L1.push_back(6);
    Display(L1);  // [1 2 3 4 5 6]
    
    //Adding items to the front
    L1.push_front(0);
    Display(L1);  // [0 1 2 3 4 5 6]
    
    //Removing items from the back
    L1.pop_back(); 
    Display(L1); // [0 1 2 3 4 5]
    
    //Removing items from the front
    L1.pop_front(); 
    Display(L1); // [1 2 3 4 5]
    
    //Inserting a 100 in front of the 3
    std::list<int>:: iterator itr = std::find(L1.begin(), L1.end(), 3);
    L1.insert(itr, 100);
    Display(L1); // [1 2 100 3 4 5]
    
    //Erasing the element holding value 2
    itr = std::find(L1.begin(), L1.end(), 2);
    L1.erase(itr);
    Display(L1); // [1 100 3 4 5]
    
    //Size of the Vector
    std::cout<<"Size of List is: "<<L1.size()<<std::endl; // 5
    
    //The Front and Back Elements
    std::cout<<"Front element is: " <<L1.front()<<std::endl; // 1
    std::cout<<"Back Element is: "<<L1.back()<<std::endl;    // 5
    
    //Changing Front and Back Elements 
    L1.front() = 500;
    L1.back() = 1000;
    Display(L1); // [500 100 3 4 1000]
    
    //Clear the List
    L1.clear();
    Display(L1); // [ ]
    
    if (L1.empty())
    std::cout<<"The List is now Empty";
    
    return 0;
}