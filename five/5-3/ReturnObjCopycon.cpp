#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    {}
    SoSimple(const SoSimple& copy) : num(copy.num)
    {
        cout<<"called SoSimple(const SoSimple& copy)"<<endl;
    }
    SoSimple& AddNum(int n)
    {
        num+=n;
        return *this;   // 객체자신반환, 반환형 참조형, 참조값이 반환됨
    }
    void ShowData()
    {
        cout<<"num: "<<num<<endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)     //복사 생성자 호출
{
    cout<<"return 이전"<<endl;
    return ob;                          // ob객체 반환, 반환형 참조형 아님, ob객체의 복사본이 만들어지면서 반환됨?
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();   
    //simplefuncobj 함수가 반환된 객체를 대상으로 addnum 함수 호출, addnum 함수가 반환하는 참조값을 대상으로 showdata함수 호출
    obj.ShowData();
    return 0;

}