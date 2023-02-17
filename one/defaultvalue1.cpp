// 디폴트값 : 기본적으로 설정되어 있는 값

#include<iostream>

int adder(int num1=1, int num2=2)
{
    return num1+num2;
}
int main(void)
{
    std::cout<<adder()<<std::endl;    // 첫번째, 두번째 매개변수 디폴트값 1,2
    std::cout<<adder(5)<<std::endl;   // 첫번째 매개변수 5, 두번째 매개변수 디폴트값 2
    std::cout<<adder(3,5)<<std::endl; // 매개변수의 디폴트값 의미없음.
    return 0;
}