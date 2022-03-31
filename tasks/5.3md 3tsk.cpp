#include "iostream"

int main(){
    int a,b,c;
    std::cout<<"Введите последовательно длину каждой из трех палочек: ";
    std::cin>>a>>b>>c;

    if (a+b <= c || a+c <= b){std::cout<<"Сложить нельзя";}
    else if (b+a <= c || b+c <= a){std::cout<<"Сложить нельзя";}
    else if (c+a <= a || c+b <= b){std::cout<<"Сложить нельзя";}
    else std::cout<<"Сложить можно";

}

