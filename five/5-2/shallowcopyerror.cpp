#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
    char * name;
    int age;
public:
    Person(const char * myname, int myage)
    {
        int len=strlen(myname)+1;
        name=new char[len];         // 동적할당
        strcpy(name,myname);
        age=myage;
    }
    void ShowPersonInfo() const
    {
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
    ~Person()
    {
        delete []name;              // 메모리해제
        cout<<"called destructor!"<<endl;
    }
};

int main(void)
{
    Person man1("Lee dong woo",29);
    Person man2=man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}