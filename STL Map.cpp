#include <iostream>
#include <map>
#include <algorithm>

template <typename T1, typename T2>
void Display(std::map<T1, T2> &v)
{
    std::cout<<"[ ";
    for (auto element: v)
    std::cout<<element.first<<":"<<element.second<<"   ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create Map
    std::map<std::string, int> m1 {{"One", 1}, {"One", 1},{"Two", 2}, {"Three", 3}, {"Four",4}, {"Five",5}};
    Display(m1); //[Five:5 Four:4 One:1 Three:3 Two:2] Sorts by Key, which is the String.
                 //Duplicates Ignored.
                 
    //Adding Elements
    m1.insert({"Apple", 1});
    m1["Baker"] = 1;  //Another Way to add
    Display(m1); //[Apple:1 Baker:1 Five:5 Four:4 One:1 Three:3 Two:2]       
    
    //Removing Elements
    m1.erase("Three");   //Delete only needs Key Value
    Display(m1); //[Apple:1 Baker:1 Five:5 Four:4 One:1 Two:2]   
    
    //Modifying Key Values
    m1["Baker"] = 2;  
    Display(m1); //[Apple:1 Baker:2 Five:5 Four:4 One:1 Two:2]   
    
    //Finding Elements in the Map
    std::map<std::string, int>::iterator itr = m1.find("Five"); 
    if(itr!=m1.end())
    std::cout<<"Five has been found in the set."<<std::endl;
    else
    std::cout<<"Five has not been found in the set."<<std::endl;
    
    itr = m1.find("Six"); 
    if(itr!=m1.end())
    std::cout<<"Six has been found in the set."<<std::endl;
    else
    std::cout<<"Six has not been found in the set."<<std::endl;

    //Clearing the Map
    m1.clear();
    Display(m1);  // [ ]
    
    if (m1.empty())
    std::cout<<"The Map is now Empty.";
    
    return 0;
}