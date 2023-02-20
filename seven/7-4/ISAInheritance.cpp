#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
    char owner[50];
public:
    Computer(char * name)
    {
        strcpy(owner, name);
    }
    void Calculate()
    {
        cout<<"요청내용을 계산합니다"<<endl;
    }
};

class NotebookComp: public Computer
{
private:
    int Battery;
public:
    NotebookComp(char * name, int initchag)
        : Computer(name), Battery(initchag)
    {}
    void Charging(){ Battery += 5;}
    void UseBattery() { Battery -= 1;}
    void MovingCal()
    {
        if(GetBatteryInfo()<1)
        {
            cout<<"충전이 필요합니다."<<endl;
            return;
        }
        cout<<"이동하면서 ";
        Calculate();
        UseBattery();
    }
    int GetBatteryInfo() { return Battery;}
};

class TabletNotebook : public NotebookComp
{
private:
    char regstPenModel[50];
public:
    TabletNotebook( char * name, int initchag, char * pen)
        : NotebookComp(name, initchag)
    {
        strcpy(regstPenModel,pen);
    }
    void Write(char *penInfo)
    {
        if(GetBatteryInfo()<1)
        {
            cout<<"충전이 필요합니다."<<endl;
            return;
        }
        /*
        strcmp 문자열비교함수 : 매개변수로 들어온 두개의 문자열을 비교하여
        문자열이 완전히 같다면 0환, 다르면 음수 혹은 양수를 반환함
        (아스키코드값에 의해 정해짐)
        */
        if(strcmp(regstPenModel,penInfo) != 0)
        {
            cout<<"등록된 펜이 아닙니다.";
            return;
        }
        cout<<"필기내용을 처리합니다."<<endl;
        UseBattery();
    }
};

int main(void)
{
    NotebookComp nc("이수종",5);
    TabletNotebook tn("정수영",5,"ISE-241-242");
    nc.MovingCal();
    tn.Write("ISE-241-242");
    return 0;
}