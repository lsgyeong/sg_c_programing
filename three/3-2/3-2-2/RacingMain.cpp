// RacingMain.cpp
// C++에서의 파일분할

#include "Car.h" // class 

int main() {
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}