#include "iostream"

int main(){
    int a,b,c,d;
    std::cout<<"Введите последовательно массу каждой из четырех машин: ";
    std::cin>>a>>b>>c>>d;

    if (a > 1200 || b>1200 || c>1200 || d>1200){std::cout<<"Вес превышает 1200";}
    else std::cout<<"Все норм";
}

