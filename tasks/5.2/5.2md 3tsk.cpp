#include "iostream"

int main(){
        int year;
        std::cout<<"Введите год: ";
        std::cin>>year;

        if (year % 4 == 0){
            if (year % 100 == 0){
                if (year % 400 == 0){std::cout<<"366 дней в году";}
                else {std::cout<<"365 дней в году";}
            }
            else {std::cout<<"366 дней в году";}
        }
        else {std::cout<<"365 дней в году";}
}