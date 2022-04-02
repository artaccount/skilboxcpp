#include "iostream"
int main(){
    int n;
    std::cout<<"Сколько надо купить макнаггетсов: ";
    std::cin>>n;

    if (!(n<6)) {
        if (n % 3 == 0) {std::cout << "yep";}
        else std::cout << "no";
    }
    else std::cout<<"no";

}