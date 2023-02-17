#include <iostream>
using namespace std;

#define ID_LEN  20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

/* 
    배열 : 같은 타입의 변수 집합
    구조체: 다양한 타입의 변수 집합을 하나의 타입으로 나타낸것

*/
struct Car                  // struct 구조체이름
{
    /* 멤버 변수 */
    char gameID[ID_LEN];    // 멤버변수 타입, 멤버변수 이름     
    int fuelGuage;
    int curSpeed;
    
    void ShowCarState()
    {
        /* 
            구조체 멤버로의 접근: 구조체 이름.멤버변수 이름 
            멤버참조연산자 : .
        */
        cout<<"소유자ID: "<<gameID<<endl;           
        cout<<"연료량: "<<fuelGuage<<endl;
        cout<<"현재속도: "<<curSpeed<<"km/s"<<endl<<endl;
    }

    void Accel()
    {
        // 연료게이지가 0 초과하면 2씩 뺀다. 0이하면 리턴 
        if(fuelGuage<=0)                        
            return;
        else
            fuelGuage -= FUEL_STEP;

        // 현재속도+ 액셀밟은 값이 최고속도보다 크면 최고속도가 현재속도
        // 아니면 현재속도에 엑셀밟은 값 더한다.
        if(curSpeed + ACC_STEP >= MAX_SPD)
        {
            curSpeed = MAX_SPD;
            return;
        }
        curSpeed += ACC_STEP;
    }
    
    void Break()
    {
        // 현재속도가 브레이크밟을때의 값보다 적으면 현재속도 10 감소
        // 현재속도가 브레이크 밟은 값보다 작으면 0으로 리턴
        if(curSpeed<BRK_STEP)
        {
            curSpeed = 0;
            return;
        }
        curSpeed -= BRK_STEP;
    }
};                          // 세미콜론 꼭 넣어야함.

int main(void)
{
    Car run99 = {"run99", 100, 0};  // 구조체 변수 선언 및 초기화
    run99.Accel();                  // 구조체변수.함수 호출
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77 = {"sped77", 100, 0};
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();
    return 0;
}