#include "iostream"

int main(){
    int x, y;
    std::cout<<"Введите x и y: ";
    std::cin>>x>>y;

    if (x == 0 || y ==0){std::cout<<"На границе";}// Точка лежит на границе четвертей, если хотя бы какая-то из ее координат равна нулю.

    if (x>0&&y>0){std::cout<<"Первая четверть";} // обе координаты положительны
    if (x<0&&y>0){std::cout<<"Вторая четверть";} // X отрицателен, а Y положителен
    if (x<0&&y<0){std::cout<<"Третья четверть";} // обе координаты отрицательны
    if (x>0&&y<0){std::cout<<"Четвертая четверть";} //X положителен, а Y отрицателен
}