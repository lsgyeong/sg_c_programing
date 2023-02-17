/*
    함수에 전달되는 인자가 왼쪽에서부터 오른쪽으로 채워짐
    그래서 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야함
    int boxvolume(int length, int width=1, int height=1);(o)
    int boxvolume(int length=1, int width=1, int height);(x)
*/

#include<iostream>
int boxvolume(int length, int width=1, int height=1);

int main(void)

{
    std::cout<<"[3, 3, 3] :" <<boxvolume(3,3,3)<<std::endl;
    std::cout<<"[5, 5, 0] :" <<boxvolume(5,5)<<std::endl;
    std::cout<<"[7, 0, 0] :" <<boxvolume(7)<<std::endl;
    /* 첫번째 매개변수에 디폴트값 없음. 인자를 전달하지 않는 형태의 함수호출은 컴파일에러 */ 
    // std::cout<<"[0, 0, 0] :" <<boxvolume()<<std::endl;   
    return 0;
}

int boxvolume(int length, int width, int height)
{
    return length*width*height;
}