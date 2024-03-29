#include <iostream>

// рекурсивная функция для вывода строки n раз
void printStringsRecursively(int n, const std::string& str, int& count) {
    // базовый случай: если n меньше или равно 0, завершаем рекурсию
    if (n <= 0) {
        std::cout << "Total function calls: " << count << std::endl; // Выводим общее количество вызовов функции
        return;
    }
    
    std::cout << str << std::endl; // выводим строку
    count++; // увеличиваем счетчик вызовов
    printStringsRecursively(n - 1, str, count); // Рекурсивный вызов функции с уменьшенным n
}

int main() {
    int n = 5; // задаем значение переменной n

    int count = 0; // инициализация счетчика вызовов
    printStringsRecursively(n, "хеллоу", count); // Вызов рекурсивной функции

    return 0;
}
