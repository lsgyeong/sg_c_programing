#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    int age;
    char name[50];
public:
    Person(int myage, char *myname) : age(myage) //p.180 멤버 이니셜라이저를 이용한 변 수 및 상수 초기화
    {
        strcpy(name,myname);
    }

    void WhatYourName() const
    {
        cout<<"My name is " <<name<<endl;
    }   

    void HowOldAreYou() const
    {
        cout<<"I'm "<<age<<" years old"<<endl;
    }
};

class UnivStudent: public Person
{
private:
    char major[50];
public:
    UnivStudent(char * myname, int myage, char * mymajor)
        : Person(myage, myname)
    {
        strcpy(major, mymajor);
    }

    void WhoAreYou() const
    {
        WhatYourName();
        HowOldAreYou();
        cout<<"My major is "<<major<<endl<<endl;
    }
};

int main(void)
{
    UnivStudent ustd1("LEE",22,"Computer eng.");
    ustd1.WhoAreYou();

    UnivStudent ustd2("Yoon",21,"Electronic eng.");
    ustd2.WhoAreYou();
    return 0;
}