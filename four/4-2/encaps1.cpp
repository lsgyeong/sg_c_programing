#include<iostream>
using namespace std;

class Sinivelcap
{
public:
    void Take() const {cout<<"콧물이 싹~ 납니다."<<endl;}
};

class SneezeCap
{
public:
    void Take() const {cout<<"재채기가 멎습니다"<<endl;}
};

class Snufflecap
{
public:
    void Take() const {cout<<"코가 뻥뚫립니다."<<endl;}
};

class Coldpatient
{
public:
    void TakeSinivelcap(const Sinivelcap &cap) const {cap.Take();}
    void TakeSneezeCap(const SneezeCap &cap) const {cap.Take();}
    void TakeSnufflecap(const Snufflecap &cap) const {cap.Take();}
};

int main(void)
{
    Sinivelcap scap;
    SneezeCap zcap;
    Snufflecap ncap;

    Coldpatient sufferer;
    sufferer.TakeSinivelcap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnufflecap(ncap);
    return 0;
}
