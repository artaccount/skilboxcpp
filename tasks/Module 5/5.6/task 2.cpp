#include "iostream"
int main(){
    int speed, height;
    std::cout<<"Введите скорость и высоту: ";
    std::cin>>speed>>height;

    if ((speed >= 750 && speed <=850)&&(height >= 9000 && height <= 9500)){std::cout<<"ok";}
    else std::cout<<"no";
}