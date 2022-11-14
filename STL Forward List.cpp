#include <iostream>
#include <forward_list>  //Must include this for Forward_List.
#include <algorithm>

template <typename T>
void Display(std::forward_list<T> &v)
{
    std::cout<<"[ ";
    for (auto element: v)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create List
    std::forward_list<int> FL1 {1,2,3,4,5};
    std::forward_list<int> FL2 (10,100);  //Bulk Creation of ten values, all 100.
    std::forward_list<int> FL3;
    
    //Assignment of Values
    FL3 = {9,8,7,6,5};
    
    Display(FL1);  // [1 2 3 4 5]
    Display(FL2);  // [100 100 100 100 100 100 100 100 100 100]
    Display(FL3);  // [9 8 7 6 5]
    
    //Adding items to the front
    FL1.push_front(0);
    Display(FL1);  // [0 1 2 3 4 5]
    
    //Removing items from the front
    FL1.pop_front(); 
    Display(FL1); // [1 2 3 4 5]
    
    //Inserting a 100 in front of the 3 (We can use the method insert_after)
    //First Find the element 2 and then insert after it
    std::forward_list<int>:: iterator itr = std::find(FL1.begin(), FL1.end(), 2);
    FL1.insert_after(itr, 100);
    Display(FL1); // [1 2 100 3 4 5]
    
    //Erasing the element holding value 2
    //Using Erase_After so need to find the element before it, which is 1
    itr = std::find(FL1.begin(), FL1.end(), 1);
    FL1.erase_after(itr);
    Display(FL1); // [1 100 3 4 5]
    
    //Accessing The Front Element (No Access to the Back)
    std::cout<<"Front element is: " <<FL1.front()<<std::endl; // 1
    
    //Changing Front Element 
    FL1.front() = 500;
    Display(FL1); // [500 100 3 4 5]
    
    //Sort the Forward List
    FL1.sort();
    Display(FL1);  // [3 4 5 100 500]
    
    //Sort in Reverse Order
    FL1.reverse();
    Display(FL1); // [500 100 5 4 3]
    
    //Clear the Forward List
    FL1.clear();
    Display(FL1); // [ ]
    
    if (FL1.empty())
    std::cout<<"The Forward List is now Empty";
    
    return 0;
}