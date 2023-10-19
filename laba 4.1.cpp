#include <iostream>
#include <cmath>

int main()
{
    int N, i;
    double S;

    std::cout << "N = ";
    std::cin >> N;

    S = 0;
    i = 1;

    // Перший цикл: while
    while (i <= N)
    {
        S += std::sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2)) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
        i++;
    }
    std::cout << "Result for 'while': " << S << std::endl;

    S = 0;
    i = 1;

    // Другий цикл: do-while
    do
    {
        S += std::sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2)) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
        i++;
    } while (i <= N);
    std::cout << "Result for 'do-while': " << S << std::endl;

    S = 0;

    // Третій цикл: for
    for (i = 1; i <= N; i++)
    {
        S += std::sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2)) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
    }
    std::cout << "Result for 'for': " << S << std::endl;

    // Четвертий цикл: for (змінено умову для завершення циклу)
    S = 0;
    for (i = N; i >= 1; i--)
    {
        S += std::sqrt(1.0 + std::pow(std::cos(std::sin(i)), 2)) / (1.0 + std::pow(std::sin(std::cos(i)), 2));
    }
    std::cout << "Result for 'reversed for': " << S << std::endl;

    return 0;
}
