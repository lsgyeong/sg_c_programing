#include <iostream>
#include <string.h>
using namespace std;

char *MakeStrAdr(int len)
{
    // char* str=(char*)malloc(sizeof(char)*len); // malloc함수형태
    char* str=new char[len]; // char형 문자열 할당
    return str;
}

int main(void)
{
    char* str=MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout<<str<<endl;
    //free(str);
    delete []str;   // 앞서 할당한 char형 문자열 소멸
    return 0;
}