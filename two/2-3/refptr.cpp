#include <iostream>
using namespace std;

int main(void)
{
    int num=12;
    int *ptr=&num;              // int형 포인터 변수 ptr선언, num주소로 초기화
    int **dptr=&ptr;            // int형 더플포인터 변수 dptr선언, 포인터 변수 ptr주소로 초기화

    int &ref=num;               // num 참조자 ref선언 
    int *(&pref)=ptr;           // 포인터 변수 ptr의 주소 참조한 참조자 pref 선언 및 그 값으로 초기화?
    int **(&dpref)=dptr;        // 더블 포인터 변수 dptr의 주소 참조한 참조자 dpref 선언 및 그 값으로 초기화?

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;
}