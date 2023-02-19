#include<iostream>
using namespace std;

class AAA
{
private:
    int num;
public:
    AAA() : num(0) {}
    AAA& CreateInitobj(int n) const // 반환형 참조자
    {
        AAA *ptr = new AAA(n);      // 동적할당
        return *ptr;
    }
    void ShowNum() const { cout<<num<<endl;}
private:
    AAA(int n) : num(n) {}
};

int main(void)
{
    AAA base;
    base.ShowNum();

    AAA &obj1=base.CreateInitobj(3);    //참조자 반환
    obj1.ShowNum();
    
    AAA &obj2=base.CreateInitobj(12);
    obj2.ShowNum();

    delete &obj1;                       // 메모리 반환
    delete &obj2;
    return 0;
}