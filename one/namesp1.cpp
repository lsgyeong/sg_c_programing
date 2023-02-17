/* :: 범위지정 연산자, 이름공간을 지정할 때 사용하는 연산자 */

#include<iostream>
namespace bestconimp1
{
    void simplefunc(void)
    {
        std::cout<<"bestcom이 정의한 함수"<<std::endl;
    }
}

namespace progconimp1
{
    void simplefunc(void)
    {
        std::cout<<"progcom이 정의한 함수"<<std::endl;
    }
}

int main(void)
{
    bestconimp1::simplefunc();
    progconimp1::simplefunc();
    return 0;
}