#include <iostream>
#include <queue>

template <typename T>
void Display(std::queue<T> q) //Pass by Value because is destructive Process
{
    std::cout<<"[ ";
    while(!q.empty())  //Can't use Range loop as it doesnt support iterators
    {
        std::cout<<q.front()<<" ";
        q.pop();
    }
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create Queue
    std::queue<int> q1;   //Default made from a Deque
    
    //Initialise with Values
    for (int i: {1,3,5,7})  //Back-> 7 5 3 1 (front)
    q1.push(i);
    
    Display(q1);  //[1 3 5 7] Displays by popping elements front to last
    
    //Pushing Elements to the back
    q1.push(0);
    Display(q1);  //[1 3 5 7 0] 
    
    //Popping them from the Front
    q1.pop();
    Display(q1);
    
    //Accessing Front and Back Element
    std::cout<<"The Front Element of the Queue is: "<<q1.front()<<std::endl;
    std::cout<<"The Back Element of the Queue is: "<<q1.back()<<std::endl;
    
    //Changing the Front and Back Elements
    q1.front() = 500;
    q1.back() = 900;
    Display(q1);
    
    //Size of Queue
    std::cout<<"The Size of the Queue is: "<<q1.size()<<std::endl;    
    
    //Clear the Queue
    while(!q1.empty())
    q1.pop();
    
    if(q1.empty())
    std::cout<<"The Queue is now empty.";    
    
    return 0;
}