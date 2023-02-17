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
    int &num2=RefRetFuncOne(num1);  // RefRetRuncOne 함수가 참조자 반환, 이를 참조자에 저장

    num1++;
    num2++;

    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    return 0;
}