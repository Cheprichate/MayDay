#include <iostream>
int week;
int day;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Какой сегодня день ? \n";
    std::cin >> day;
    std::cout << "С какого дня начался месяц ? \n";
    std::cin >> week;

    if (day <= 0 || day > 31 || week > 7) {
    std::cout << "Введены некорректные значения . \n";
    }
    else if (day >= 1 && day <= 5 || day >= 8 && day <= 10) {
        std::cout << "Сегодня выходной праздничный день \n";
    }
    else if ((day + week) % 7 <= 1) {
        std::cout << "Сегодня выходной день \n";
        }
    else {
    std::cout << "Сегодня рабочий день \n";
}
}