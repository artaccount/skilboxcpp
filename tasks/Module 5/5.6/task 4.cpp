#include "iostream"
int main(){
    system("chcp 65001");
    int day;
    std::cout<<"Введите день: ";
    std::cin>>day;

    int weekDay;
    std::cout<<"Введите день недели с которой начинается месяц: ";
    std::cin>>weekDay;

    if (day >= 1 && day <= 5 || day >= 8 && day <= 10){std::cout<<"Выходной";}

    if (weekDay <= 7 && weekDay > 0){
        day = (day + weekDay) -1;
        if (day % 7 == 0 || day % 7 == 6){std::cout<<"выходной";}
        else std::cout<<"рабочий";
    }
    else std::cout<<"Некорректный ввод дня недели.";
}