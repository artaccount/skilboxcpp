#include <iostream>
int main(){
    int alcohol, aidKit;
    std::cout<<"Введите кол-во спирта и аптечек: ";
    std::cin>>alcohol>>aidKit;

    if (alcohol >= 2000 || aidKit >= 5){std::cout<<"yes";}
    else std::cout<<"no";
}