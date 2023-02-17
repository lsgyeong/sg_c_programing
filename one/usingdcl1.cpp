#include <iostream>

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout<<"so simple function!"<<std::endl;
        std::cout<<"In namespace Hybrid!"<<std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc;      //지역변수와 같음
    HybFunc();
    return 0;
}