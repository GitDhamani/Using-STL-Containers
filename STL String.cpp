#include <iostream>
#include <string>
#include <cctype>

int main()
{
    //Create String
    std::string str1 {"Mohammed"};
    std::string str2;
    str2 = "James";
    
    //Size of String
    std::cout<<"Size of String is: "<<str1.size()<<std::endl;
    std::cout<<"Size of String is: "<<str2.size()<<std::endl;
    
    //Length of String (Same thing as size)
    std::cout<<"Size of String is: "<<str1.length()<<std::endl;
    std::cout<<"Size of String is: "<<str2.length()<<std::endl;    
    
    //Accessing individual char elements
    std::cout<<"Element 3 of "<<str1<<" is "<<str1[2]<<std::endl;
    std::cout<<"Element 3 of "<<str2<<" is "<<str2.at(2)<<std::endl;
    
    //Make Uppercase
    for(auto &ch : str1)
    ch = toupper(ch);
    
    //Make lowercase
    for(auto &ch : str2)
    ch = tolower(ch);
    
    std::cout<<str1<<std::endl;  // MOHAMMED  
    std::cout<<str2<<std::endl;  //james
    
    //Concatenating Strings Using +
    str1 = str1 + str2;
    std::cout<<str1<<std::endl;  //MOHAMMEDjames
    
    //find a string inside a string (Like stringgetpos)
    std::string tempstring {"My Name is the Best Name"};
    int pos = tempstring.find("Name"); //Find position of "Name" in the tempstring
    std::cout<<"Name found at Position "<<pos<<std::endl; //3
    
    //Find from the right end
    pos = tempstring.rfind("Name");
    std::cout<<"Name found at Position "<<pos<<std::endl; //23
    
    //Grabbing a portion of the String
    std::string grab = tempstring.substr (11,8); //Go to position 11 and Grab 8 Chars into Grab
    std::cout<<"Grab is: "<<grab<<std::endl;  //the best
    
    //Remove Chars from front left of string
    tempstring.erase(0,3); //Remove 3 chars from position zero, ie the left beginning
    std::cout<<"String Now Reads: "<<tempstring<<std::endl; //Name is the Best Name
    
    //Remove Chars from the right end
    tempstring.erase(tempstring.length()-5,5); //Remove 3 chars from right end
    std::cout<<"String Now Reads: "<<tempstring<<std::endl; //Name is the Best
    
    return 0;
}