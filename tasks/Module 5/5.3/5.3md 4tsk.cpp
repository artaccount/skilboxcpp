#include "iostream"
int main(){
    int a,b,c;
    std::cout<<"Введите три числа: ";
    std::cin>>a>>b>>c;

    if (a == b && a == c){std::cout<<"3 совпадающих";} //3 числа совпадают
    else if (a == b || a == c){std::cout<<"2 совпадающих";}
    else if (b == a || b == c){std::cout<<"2 совпадающих";}
    else if (c == b || c == a){std::cout<<"2 совпадающих";}
    else std::cout<<"0 совпадающих";
}