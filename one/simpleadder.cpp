/* 키보드로부터의 데이터 입력 */

#include <iostream>

int main(void)
{
    /* std::cin>>'변수' -> c의 scanf*/
    int val1;
    std::cout<<"첫번째 숫자입력: ";
    std::cin>>val1;

    int val2;
    std::cout<<"두번째 숫자입력: ";
    std::cin>>val2;

    int result1=val1+val2;
    std::cout<<"덧셈결과 : " <<result1<<std::endl;

    /* 실수형 덧셈을 하고싶으면 변수의 자료형을 실수형 변수로 선언하면 됨*/
    double val3;
    std::cout<<"첫번째 실수입력: ";
    std::cin>>val3;

    double val4;
    std::cout<<"두번째 실수입력: ";
    std::cin>>val4;

    double result2=val3+val4;
    std::cout<<"덧셈결과 : " <<result2<<std::endl;

    /*
    char str[100]
    scanf("%s", str);
    */
    char str[100];
    std::cout<<"문자입력: ";
    std::cin>>str;

    std::cout<<"문자입력내용: "<<str<<std::endl;

    return 0;
}