/*  
    함수 : 선언(헤더파일), 정의(소스파일) 분리
    이름공간 기반 함수의 선언과 정의 구분
*/

#include <iostream>
/* 이름공간안에 함수의 선언만 삽입 */
namespace bestcomimp1
{
    void simplefunc(void);      
}

namespace progcomimp1
{
    void simplefunc(void);
}

int main(void)
{
    bestcomimp1::simplefunc();
    progcomimp1::simplefunc();
    return 0;
}
/* 이름공간에 선언된 함수 simplefunc의 정의부분 */
void bestcomimp1::simplefunc(void)
{
    std::cout<<"bestcom이 정의한 함수"<<std::endl;
}

void progcomimp1::simplefunc(void)
{
    std::cout<<"progcom이 정의한 함수"<<std::endl;
}