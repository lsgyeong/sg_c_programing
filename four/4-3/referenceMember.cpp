#include <iostream>
using namespace std;

class AAA
{
public:
    AAA()
    {
        cout<<"empty object"<<endl;
    }
    void ShowYourNama()
    {
        cout<<"I'm class AAA"<<endl;
    }
};

class BBB
{
private:
    AAA &ref;
    const int num;
public:
    BBB(AAA &r, const int &n)   //생성자
        : ref(r), num(n)
    {//empty consturctor body        
    }
    void ShowYourName()
    {
        ref.ShowYourNama();
        cout<<"and"<<endl;
        cout<<"I ref num"<<num<<endl;
    }
};

int main(void)
{
    AAA obj1;               //class AAA의 객체 obj1 선언
    BBB obj2(obj1, 20);     // class BBB의 객체 obj2선언 및 초기화?
    obj2.ShowYourName();
    return 0;
}