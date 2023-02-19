#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
    char * name;
    int age;
public:
    Person(char * myname, int myage)
    {
        int len=strlen(myname)+1;
        name=new char[len];
        strcpy(name, myname);
        age=myage;
    }
    Person()                                        // 배열생성시 필요한 생성자
    {
        name=NULL;
        age=0;
        cout<<"called Person()"<<endl;
    }
    void SetPersonInfo(char * myname, int myage)    // 원하는 데이터로의 초기화를 목적으로 정의된 함수
    {
        name=myname;
        age=myage;
    }
    void ShowPersonInfo() const
    {
        cout<<"이름: "<<name<<", ";
        cout<<"나이: "<<age<<endl;
    }
    ~Person()
    {
        delete []name;
        cout<<"called destructor!"<<endl;
    }
};

int main(void)
{
    Person parr[3];                     // 객체배열 생성시 void형 생성자가 호출됨
    char namestr[100];
    char * strptr;
    int age;
    int len;

    // 반복문 안에서 이름과 나이 정보를 입력받아 객체 초기화
    for(int i=0; i<3; i++)
    {
        cout<<"이름: ";
        cin>>namestr;
        cout<<"나이: ";
        cin>>age;
        len=strlen(namestr)+1;
        strptr=new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPersonInfo(strptr, age);
    }
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    return 0;
}