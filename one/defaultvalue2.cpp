#include <iostream>

int adder(int num1=1, int num2=2);    // 함수선언: 디폴트값 지정은 선언부분에 한다.
int main(void)
{
    std::cout<<adder()<<std::endl;
    std::cout<<adder(5)<<std::endl;
    std::cout<<adder(3,5)<<std::endl;
    return 0;
}

int adder(int num1, int num2)       // 함수 정의
{
    return num1+num2;
}