/*
    문제 1-1
    (문제1번)
    사용자로부터 5개의 정수 입력받아 그 합을 출력하는 프로그램
*/

// #include <iostream>

// int main(void)
// {   
//     int num1, num2, num3, num4, num5;
//     std::cout<<"1번째 정수 입력: ";
//     std::cin>>num1;

//     std::cout<<"2번째 정수 입력: ";
//     std::cin>>num2;

//     std::cout<<"3번째 정수 입력: ";
//     std::cin>>num3;

//     std::cout<<"4번째 정수 입력: ";
//     std::cin>>num4;

//     std::cout<<"5번째 정수 입력: ";
//     std::cin>>num5;

//     int result = num1+num2+num3+num4+num5;
//     std::cout<<"합계: "<<result<<std::endl;
//     return 0;
// }

/*
    문제 1-1
    (문제 2번)
    프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력받아서, 
    입력받은 데이터를 그래도 출력하는 프로그램
*/

// #include <iostream>

// int main(void)
// {   
//     char name[100], phone[100];
//     std::cout<<"이름과 전화번호를 입력하세요";
//     std::cin>>name>>phone;

//     std::cout<<"이름 : "<<name<<" , "<<"전화번호 : "<<phone<<std::endl;
//     return 0;
// }

/*
    문제 1-1
    (문제 3번)
    숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램
*/

// #include <iostream>

// int main(void)
// {
//     int num;
//     std::cout<<"숫자를 입력하세요: ";
//     std::cin>>num;

//     std::cout<<num<<"단\n";

//     for (int i=1; i<10; i++)
//     {
//         int result = num*i;
//         std::cout<<num<<"x"<<i<<"="<<result<<std::endl;
//     }
//     return 0;
// }

/*
    문제 1-1
    (문제 4번)
    판매원들의 급여계산프로그램
    모든 판매원들에게 매달 50만원의 기본급여 + 물품판매가격의 12%에 해당하는 돈 지급
*/

// #include<iostream>

// int main(void)
// {
//     int price;
//     while(price != -1)
//     {   
//         std::cout<<"판매 금액을 만원단위로 입력(-1 to end): ";
//         std::cin>>price;

//         if(price != -1)
//         {
//             double result=50+(price*0.12);
//             std::cout<<"이번달 급여: "<<result<<"만원"<<std::endl;
//         }
//         else
//             std::cout<<"프로그램을 종료합니다\n";
//     }
//     return 0;
// }

/*
    문제 1-2
    다음 main 함수에서 필요로하는 swap함수를 오버로딩해서 구현
*/

// #include<iostream>

// void swap(int* n1, int* n2)
// {
//     int temp = *n1;
//     *n1=*n2;
//     *n2=temp;
// }

// void swap(char* c1, char* c2)
// {
//     char temp = *c1;
//     *c1=*c2;
//     *c2=temp;
// }

// void swap(double* d1, double* d2)
// {
//     double temp = *d1;
//     *d1=*d2;
//     *d2=temp;
// }

// int main(void)
// {
//     int num1=20, num2=30;
//     swap(&num1, &num2);
//     std::cout<<num1<<' '<<num2<<std::endl;

//     char ch1='A' ,ch2='Z';
//     swap(&ch1, &ch2);
//     std::cout<<ch1<<' '<<ch2<<std::endl;

//     double dbl1=1.111 ,dbl2=5.555;
//     swap(&dbl1, &dbl2);
//     std::cout<<dbl1<<' '<<dbl2<<std::endl;

//     return 0;
// }

/*
    문제 1-3
    (문제1)
    매개변수의 디폴트값 지정형태 -> 함수오버로딩 형태로 바꾸기
    main함수 변경x, 실행결과도 동일해야함.
*/
// #include<iostream>
// int boxvolume(int length, int width, int height)
// {
//     return length*width*height;
// }
// int boxvolume(int length, int width)
// {
//     return length*width*1;
// }
// int boxvolume(int length)
// {
//     return length*1*1;
// }
// int main(void)
// {
//     std::cout<<"[3, 3, 3] :" <<boxvolume(3,3,3)<<std::endl;
//     std::cout<<"[5, 5, 0] :" <<boxvolume(5,5)<<std::endl;
//     std::cout<<"[7, 0, 0] :" <<boxvolume(7)<<std::endl;  
//     return 0;
// }
// /*
//     문제 1-3
//     (문제2)
//     다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떤문제가 있는가?
// */
// #include<iostream>
// int simplefunc(int a=10)
// {
//     return a+1;
// }
// int simplefunc(void)
// {
//     return 10;
// }
// // simplefunc(); 형태로 함수를 호출하는 경우 두 함수 모두 호출조건을 만족하기 때문에 컴파일 에러가 발생함.
/*
     문제 1-4
    헤더파일, 소스파일1,2로 분할해서 컴파일?
 */



