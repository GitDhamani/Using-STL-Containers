#include <iostream>
#include <stack>

template <typename T>
void Display(std::stack<T> s) //Pass by Value because is destructive Process
{
    std::cout<<"[ ";
    while(!s.empty())  //Can't use Range loop as it doesnt support iterators
    {
        std::cout<<s.top()<<" ";
        s.pop();
    }
    std::cout<<"]"<<std::endl;
}

int main()
{
    //Create Stack
    std::stack<int> st1;  //Default Underlying Container is Deque
    
    //Add Values to Stack
    for(int i: {1,3,5,7})   //Top 7 5 3 1 --> Bottom
    st1.push(i);
    
    Display(st1);  // [7 5 3 1]
    
    //Reading top of Stack
    std::cout<<"Top of Stack is: "<<st1.top()<<std::endl;
    
    //Change top of stack
    st1.top() = 100;
    Display(st1);
    
    //Pushing a Value on to the Stack
    st1.push(0);
    Display(st1);
    
    //Popping a Value from the Stack
    st1.pop();
    Display(st1);
    
    //Size of Stack
    std::cout<<"The Size of the Stack is: "<<st1.size();
    
    return 0;
}