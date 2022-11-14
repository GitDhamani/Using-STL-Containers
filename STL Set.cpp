#include <iostream>
#include <set>

template <typename T>
void Display(std::set<T> &v)
{
    std::cout<<"[ ";
    for (auto element: v)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create Set
    std::set<int> s1 {1,2,3,4,5,3,3,3,3,3};  //Duplicates will be ignored
    Display(s1);  // [1 2 3 4 5]
    
    //Add By Values
    s1.insert(0);
    s1.insert(6);
    Display(s1);  // [0 1 2 3 4 5 6] 
    
    //Remove By Values
    s1.erase(0);
    s1.erase(6);
    Display(s1); // [1 2 3 4 5]
    
    //Finding Elements in the Set
    std::set<int>::iterator itr = s1.find(3); 
    if(itr!=s1.end())
    std::cout<<"3 has been found in the set."<<std::endl;
    else
    std::cout<<"3 has not been found in the set."<<std::endl;
    
    itr = s1.find(0); 
    if(itr!=s1.end())
    std::cout<<"0 has been found in the set."<<std::endl;
    else
    std::cout<<"0 has not been found in the set."<<std::endl;

    //Clearing the Set
    s1.clear();
    Display(s1);
    
    if (s1.empty())
    std::cout<<"The Set is now Empty.";

    return 0;
}