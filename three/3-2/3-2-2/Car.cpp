// Car.cpp

#include <iostream>
#include <cstring>
#include "Car.h" 
/*
    멤버함수 정의부분을 컴파일 하는데 클래스의 선언정보 필요
    멤버함수에 접근하는 변수의 존재유무를 확인하기 위해
    이름 공간 CAR_CONST에 선언된 상수의 사용을 위해 포함되어야함.
*/
using namespace std;

void Car::InitMembers(const char *ID, int fuel) {
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState() {
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel() {
    if (fuelGauge <= 0) {
        return;
    }
    else {
        fuelGauge -= CAR_CONST::FUEL_STEP;
    }

    if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
    if (curSpeed < CAR_CONST::BRK_STEP) {
        curSpeed = 0;
        return;
    }

    curSpeed -= CAR_CONST::BRK_STEP;
}