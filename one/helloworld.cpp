/*helloworld 출력*/ 

#include <iostream> // 헤더파일 선언문

int main(void)
{   
    /* 
        std::cout<< '출력대상';  -> c의 printf
        << 연산자 둘 이상의 출력대상을 연이어서 출력가능
        sed::endl을 이용한 개행 -> c의 \n
    */
    int num=20;
    std::cout<<"Hello World!"<<std::endl;
    std::cout<<"Hello "<<"World!"<<std::endl;
    std::cout<<num<<' '<<'A';
    std::cout<<' '<<3.14<<std::endl;
    return 0;
}