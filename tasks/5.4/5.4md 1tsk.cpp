#include "iostream"
int main(){
    int growth, weight; //рост и вес
    int arms, legs; //ноги и руки
    int hours; //общие часы полета
    std::string eyeColor = "Зеленый"; //цвет глаз

    std::cout<<"Введите рост и вес летчика: ";
    std::cin>>growth>>weight;

    std::cout<<"Введите количество рук и ног летчика: ";
    std::cin>>arms>>legs;

    std::cout<<"Введите количество часов, которые летчик провел в самолете: ";
    std::cin>>hours;

    std::cout<<"Введите цвет глаз летчика: ";
    std::cin>>eyeColor;

    if (hours > 100){std::cout<<"ок";} //Если больше 100 часов - то сразу ок.
    else {
        if (eyeColor == "Зеленый"){std::cout<<"Нельзя";}
        else {
            if (growth >= 145 && growth <= 165 && weight >= 45 && weight <= 65){
                if (arms == legs){std::cout<<"ок";}
            }
            else std::cout<<"Нельзя";
        }
    }


}