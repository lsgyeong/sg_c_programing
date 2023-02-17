#include <iostream>
using namespace std;

int main(void)
{
    int num1=1020;
    int &num2=num1;     // num1에 대한 참조자 num2 선언, 이후로는 num1과 num2가 동일한 메모리 공간을 참조

    num2=3047;
    cout<<"VAL: "<<num1<<endl;
    cout<<"REF: "<<num2<<endl;

    cout<<"VAL: "<<&num1<<endl;
    cout<<"REF: "<<&num2<<endl;
}