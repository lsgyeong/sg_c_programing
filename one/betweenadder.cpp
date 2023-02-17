#include <iostream>

int main(void)
{
    int val1, val2;
    int result=0;
    std::cout<<"두 개의 숫자입력: ";
    std::cin>>val1>>val2;
    /* 
    std::cin>>'변수1'>>'변수2';
    c에서는 scanf쓰면 두개의 숫자를 한번에 못받았었다 
    c++에서는 변수두개로 해서 두개를 한꺼번에 받을 수 있다!

    for문의 초기화 문장 내에서 변수선언가능
    int i=val1+1
    */

   if(val1<val2)        //val1=1, < val2=5
   {
    for(int i=val1+1 ;i<val2 ;i++)  // i=2~4
        result += i;                // result = 2 + 3 + 4 
   }
   else                 //val1=5 > val2=1
   {
    for(int i=val2+1 ;i<val1 ;i++)  // i= 2~4
        result += i;                // result = 2 + 3 + 4
   }

   std::cout<<"두 수 사이의 정수 합: "<<result<<std::endl;
   return 0;

}