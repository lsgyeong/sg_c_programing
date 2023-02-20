// permanentworker 클래스 정의

#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker
{
private:
    char name[100];
    int salary;     //매달 지불해야하는 급여액
public:
    PermanentWorker(const char*name, int money)
        : salary(money)
    {
        strcpy(this->name, name);
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<GetPay()<<endl<<endl;
    }
};

//employeehandler 클래스 정의

class EmployeeHandler
{
private:
    PermanentWorker* emplist[50]; // PermanentWorker 객체의 저장을 위한 배열
    int empNum;                   //배열에 저장된 객체의 수를 세기위한 정수형 변수
public:
    EmployeeHandler() : empNum(0)
    { }

    // 새로운 직원정보의 등록
    void AddEmployee(PermanentWorker* emp)
    {
        emplist[empNum++]=emp;
    }

    // 모든 직원의 이번달 급여정보 출력
    void ShowAllSalaryInfo() const
    {
        for(int i=0; i<empNum; i++)
            emplist[i]->ShowSalaryInfo();
    }

    // 이번달 급여의 총액 출력
    void ShowTotalSalary() const
    {
        int sum=0;
        for(int i=0; i<empNum; i++)
            sum+=emplist[i]->GetPay();
        cout<<"salary sum: "<<sum<<endl;
    }
    ~EmployeeHandler()
    {
        for(int i=0; i<empNum; i++)
            delete emplist[i];
    }
};

// main 함수의 정의
int main(void)
{
    //직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
    EmployeeHandler handler;

    //직원 등록
    handler.AddEmployee(new PermanentWorker("KIM",1000));
    handler.AddEmployee(new PermanentWorker("LEE",1500));
    handler.AddEmployee(new PermanentWorker("JUN",2000));

    //이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();
    return 0;
}
