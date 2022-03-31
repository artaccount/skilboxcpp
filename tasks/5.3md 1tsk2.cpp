#include "iostream"

int main(){
    int cash;
    std::cout<<"Введите желаемую сумму снятия: ";
    std::cin>>cash;

    if (cash<0||cash>100000||cash%100!=0){std::cout<<"Недопустимая сумма";}
    else {std::cout<<"Можно снять: "<<cash;}
}

