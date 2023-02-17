/*
함수오버로딩
함수이름은 동일, 매개변수가 다른 형태
매개변수의 자료형 or 개수가 달라야함
*/

# include <iostream>

void MyFunc(void)
{
    std::cout<<"MyFunc(void) called"<<std::endl;
} 

void MyFunc(char c)
{
    std::cout<<"MyFunc(char c)called"<<std::endl;
}

void MyFunc(int a, int b)
{
    std::cout<<"MyFunc(int a, int b)called"<<std::endl;
}

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(12,13);
    return 0;
}