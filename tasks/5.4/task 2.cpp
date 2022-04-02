#include "iostream"
int main(){
    int a,b,c;
    int x,y;
    std::cout<<"Введите размер кирпича: (a, b, c)";
    std::cin>>a>>b>>c;
    std::cout<<"Введите размер отверстия: (x, y)";
    std::cin>>x>>y;

    if (a*b <= x*y || a*c <= x*y){std::cout<<"Пролезет.";}
    else std::cout<<"Не пролезет.";
}