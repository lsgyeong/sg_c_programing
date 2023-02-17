#include <iostream>

namespace bestcomimp1
{
    void simplefunc(void);
}

namespace bestcomimp1
{
    void prettyfunc(void);
}

namespace progcomimp1
{
    void simplefunc(void);
}

int main(void)
{
    bestcomimp1::simplefunc();
    return 0;
}

void bestcomimp1::simplefunc(void)
{
    std::cout<<"bestcom이 정의한 함수"<<std::endl;
    prettyfunc();                   // 동일 이름공간 -> 함수호출시 이름공간 명시할 필요x
    progcomimp1::simplefunc();      // 다른 이름공간 -> 함수호출시 이름공간 명시해야함.
}
void bestcomimp1::prettyfunc(void)
{
    std::cout<<"so pretty!!"<<std::endl;
}
void progcomimp1::simplefunc(void)
{
    std::cout<<"progcom이 정의한 함수"<<std::endl;
}