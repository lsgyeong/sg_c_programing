#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
        ACC_STEP=10, BRK_STEP=10
    };
}

class Car
{
// 구조체에서 멤버변수
private: // 클래스 내에서만 접근가능
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

// 함수 선언 
public:  
    /*
        클래스 안에 선언된 변수의 초기화를 목적으로 정의된 함수
        변수가 모두 private로 선언되어서 main함수에 접근 불가능
        이 함수는 동일 클래스 내에 정의된 함수이므로 접근가능
        public으로 선언되어 main 함수에서 호출 가능
        main 함수에서 이 함수의 호출을 통해 클래스 안에 선언된 변수 초기화 가능
    */ 
    void InitMembers(const char * ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

// 함수 정의
void Car::InitMembers(const char * ID, int fuel)
{
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;
}

void Car::ShowCarState()
{
    cout<<"소유자ID: "<<gamerID<<endl;
    cout<<"연료량: "<<fuelGauge<<"%"<<endl;
    cout<<"현재속도: "<<curSpeed<<"km/s"<<endl<<endl;
}

void Car::Accel()
{
    if(fuelGauge<=0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;
    
    if((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
    {
        curSpeed=CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    if(curSpeed<CAR_CONST::BRK_STEP)
    {
        curSpeed=0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}
// 메인함수
int main(void)
{
    Car run99;                          // 클래스 변수선언
    run99.InitMembers("run99", 100);    // 초기화목적으로 호출
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}