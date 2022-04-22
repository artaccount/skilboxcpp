#include "iostream"
int main(){
    system("chcp 65001");

    int money;
    std::cout<<"Введите кол-во рублей: ";
    std::cin>>money;

    std::string rub = " Рубл";
    std::string a = "ей";
    std::string b = "ь";
    std::string c = "я";

    int modTen = money%10;
    int modHundred = money%100;

    if(modTen <= 9 && modTen >= 5 || modHundred <= 15 && modHundred >= 5 || money%10 == 0){std::cout<<money<<rub<<a;}
    else if (money%10 == 1){std::cout<<money<<rub<<b;}
    else if (modTen <= 4 && modTen >= 2){std::cout<<money<<rub<<c;}
}