#include "iostream"

int main(){
    int cash;
    std::cout<<"Введите желаемую сумму снятия: ";
    std::cin>>cash;

    if (cash < 0){std::cout<<"Недопустимая сумма";}
    else if (cash > 100000){std::cout<<"Недопустимая сумма";}
    else if (cash % 100 != 0){std::cout<<"Недопустимая сумма";}
    else {std::cout<<"Можно снять: "<<cash;}
}
