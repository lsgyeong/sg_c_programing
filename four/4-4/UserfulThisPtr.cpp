#include <iostream>
using namespace std;

class TwoNumber
{
private:
    int num1;
    int num2;
public:
    TwoNumber(int num1, int num2)
    {
        this->num1=num1;
        // this->num1 : 멤버변수/ num1 매개변수
        this->num2=num2;
    }
    void ShowTwoNumber()
    {
        cout<<this->num1<<endl;     
        // this포인터를 사용함으로써 멤버변수에 접근함을 명확히 함, 일반적으로는 this포인터를 생략해서 표현한다.
        cout<<this->num2<<endl;
    }
};

int main(void)
{
    TwoNumber two(2,4);
    two.ShowTwoNumber();
    return 0;
}