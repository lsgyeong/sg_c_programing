#include<iostream>
using namespace std;

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price,int num, int money) // 클래스내 멤버변수 초기화
    {
        APPLE_PRICE=price;
        numOfApples=num;
        myMoney=money;
    }
    int SaleApples(int money)
    {
        int num=money/APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    void ShowSalesResult()
    {
        cout<<"남은 사과: "<<numOfApples<<endl;
        cout<<"판매 수익: "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer
{
    int myMoney;
    int numOfAppels;

public:
    void InitMembers(int money)
    {
        myMoney=money;
        numOfAppels=0;
    }
    void BuyApples(FruitSeller &seller,int money)
    {
        numOfAppels += seller.SaleApples(money);
        myMoney -= money;
    }
    void ShowButResult()
    {
        cout<<"현재잔액: "<<myMoney<<endl;
        cout<<"사과개수: "<<numOfAppels<<endl;
    }
};

int main(void)
{
    FruitSeller seller;
    seller.InitMembers(1000,20,0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller,2000);

    cout<<"과일 판매자의 현황"<<endl;
    seller.ShowSalesResult();
    cout<<"과일 구매자의 현황"<<endl;
    buyer.ShowButResult();
    return 0;
}