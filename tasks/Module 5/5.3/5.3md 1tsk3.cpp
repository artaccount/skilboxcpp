#include "iostream"

int main(){
    int year;
    std::cout<<"Введите год: ";
    std::cin>>year;

    if (year%4==0 && year%100==0 && year%400==0){std::cout<<"366 дней в году";}
    else if (year%4==0 && year%100!=0){std::cout<<"366 дней в году";}
    else {std::cout<<"365 дней в году";}
}