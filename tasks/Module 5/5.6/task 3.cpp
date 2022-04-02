#include "iostream"
int main(){
    int day;
    std::cout<<"Введите день: ";
    std::cin>>day;

    //выходной день, это 6,7,13,14,20,21,27,28, с 1 по 5 и с 8 по 10 включительно
    if (day >= 1 && day <= 10){std::cout<<"Выходной";}
    else if (day <= 7 && day > 0){
        std::cout<<"Выходной";
    }
    else std::cout<<"Рабочий";
}