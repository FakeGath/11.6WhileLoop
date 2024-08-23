//LIbrary that allows us to use basic c++ comand 
#include <iostream>

int main(){
    //Prints out 10 times I love c++
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;


    std::cout<<"---------------------------------"<<std::endl;

    const size_t COUNT{10};
    size_t i{0};
    //while loope that prints "I love c++ 10 times"
    while (i<COUNT){
        
    std::cout<<i+1<<". I love c++"<<std::endl;
    ++i;
    }

    std::cout<<"Loop completed!"<<std::endl;
    

    return 0;
}