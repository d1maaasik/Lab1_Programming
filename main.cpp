//nomer 3

#include <iostream>
// рекурсивная функция для вывода строки n-ое количество раз
void printStringsRecursively(int n, const std::string& str, int& count) {
    if (n <= 0) { // если n меньше или равно 0 раз, то завершаем рекурсию
        std::cout << "Total function calls: " << count << std::endl; // выводим общее еколимчество вызова функции 
        return;
    }

    std::cout << str << std::endl; 
    count++;
    printStringsRecursively(n - 1, str, count); // рекурс вывод строки с меньшим n
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "введите число строк для написания: ";
    std::cin >> n;

    int count = 0;
    printStringsRecursively(n, "хеллоу", count); //выозов рекурс функции

    return 0;
}