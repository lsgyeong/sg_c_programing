#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char * name;
    int age;
public:
    Person(const char * myname, int myage)
    {
        int len = strlen(myname)+1; // 공백문자자리까지 포함인건가?
        name= new char[len];        // 동적할당
        strcpy(name, myname);       
        age=myage;
    }
    void ShowPersonInfo() const
    {
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
    // 소멸자에는 생성자에서 할당한 메모리 공간의 소멸에 대한 코드가 삽입되어있음.
    ~Person()           
    {
        delete []name;
        cout<<"called destructor!"<<endl;
    }
};

int main(void)
{
    Person man1("Lee dong woo",29);
    Person man2("Jand dong gun",41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}
        