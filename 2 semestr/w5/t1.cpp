#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Задаємо кількість елементів масиву
    const int size = 10;

    // Ініціалізуємо генератор випадкових чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Створюємо динамічний масив
    float* array = new float[size];

    // Заповнюємо масив випадковими числами з діапазону (-2, 2)
    for (int i = 0; i < size; i++) {
        array[i] = static_cast<float>(std::rand()) / static_cast<float>(RAND_MAX / 4) - 2.0f;
    }

    // Знаходимо кількість додатних та від'ємних чисел
    int positiveCount = 0;
    int negativeCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positiveCount++;
        } else if (array[i] < 0) {
            negativeCount++;
        }
    }

    // Виводимо результати
    std::cout << "Кількість додатних чисел: " << positiveCount << std::endl;
    std::cout << "Кількість від'ємних чисел: " << negativeCount << std::endl;

    // Звільняємо пам'ять, виділену під масив
    delete[] array;

    return 0;
}