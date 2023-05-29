#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Задаємо розмірність двовимірного масиву
    const int rows = 3;
    const int columns = 3;

    // Ініціалізуємо генератор випадкових чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Створюємо динамічний двовимірний масив
    int** array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[columns];
    }

    // Заповнюємо масив випадковими значеннями
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] = std::rand() % 10; // Генеруємо випадкові цілі числа від 0 до 9
        }
    }

    // Виводимо елементи на головній діагоналі
    std::cout << "Елементи на головній діагоналі:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == j) {
                std::cout << array[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;

    // Виводимо елементи на побічній діагоналі
    std::cout << "Елементи на побічній діагоналі:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i + j == rows - 1) {
                std::cout << array[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;

    // Рахуємо кількість парних та непарних елементів масиву
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (array[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    // Виводимо кількість парних та непарних елементів
    std::cout << "Кількість парних елементів: " << evenCount << std::endl;
    std::cout << "Кількість непарних елементів: " << oddCount << std::endl;

    // Звільняємо пам'ять, виділену для масиву
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
