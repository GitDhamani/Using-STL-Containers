#include <iostream>
#include <queue>

template <typename T>
void Display(std::priority_queue<T> q) //Pass by Value because is destructive Process
{
    std::cout<<"[ ";
    while(!q.empty())  //Can't use Range loop as it doesnt support iterators
    {
        std::cout<<q.top()<<" ";
        q.pop();
    }
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create Priority Queue
    std::priority_queue<int> pq;
    
    //Filling Queue
    for(int i: {9,8,7,6,5,4,3,2,1})
    pq.push(i);
    
    Display(pq); // [9 8 7 6 5 4 3 2 1]  Automatically sorted, Highest at Top.
    
    //Adding a New Element
    pq.push(7);
    Display(pq); // [9 8 7 6 5 4 3 2 1] Duplicates Fine, added and sorted.
    
    //Removing the Top Element
    pq.pop();
    Display(pq); // [8 7 6 5 4 3 2 1]
    
    //Accessing Top Element
    std::cout<<"Top Element is: "<<pq.top()<<std::endl;
    
    //Size of Priority Queue
    std::cout<<"Size of Priority Queue is: "<<pq.size()<<std::endl;    
    
    //Clearing Priority Queue
    while(!pq.empty())
    pq.pop();
    
    if(pq.empty())
    std::cout<<"Priority Queue is now Empty.";
    
    return 0;
}