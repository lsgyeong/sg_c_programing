#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n): num(n)
    {
        cout<<"num= "<<num<<", ";
        cout<<"address= "<<this<<endl;
    }
    void ShowSimpleData()
    {
        cout<<num<<endl;
    }
    SoSimple * GetThisPointer()
    {
        return this;        //this를 반환, 객체의 포인터 반환
    }
};

int main(void)
{
    SoSimple sim1(100);
    SoSimple * ptr1=sim1.GetThisPointer(); 
    /* 
    sim1객체의 주소값 저장, 객체 sim1에 의해 반환된 this를 ptr1에 저장
    this는 SoSimple의 포인터 이므로 SoSimple형 포인터 변수에 저장해야함.
    */
    cout<<ptr1<<", ";   //ptr1에 저장된 주소값 출력
    ptr1->ShowSimpleData(); //   ptr이 가르키는 객체의 ShowSimpleData 함수 호출
    // sim1.ShowSimpleData(); // 위랑 같은 말이넹?
    

    SoSimple sim2(200);
    SoSimple * ptr2=sim2.GetThisPointer(); // sim1객에의 주소값 저장
    cout<<ptr2<<", ";
    ptr2->ShowSimpleData();
    return 0;
}