#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)    // 매개변수 참조자, 반환형 참조자
{
    ref++;
    return ref;
}

int main(void)
{
    int num1=1;
    int num2=RefRetFuncOne(num1);  
    // 참조형으로 반환되었을 때 참조자가 아닌 일반변수를 선언해서 값 저장가능

    num1+=1;
    num2+=100;

    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    return 0;
}