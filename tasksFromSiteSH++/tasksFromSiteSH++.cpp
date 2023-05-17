#include <iostream>
#include <algorithm>

struct Arrays
{
    double *a;
    double *b;
    int n;
};

int task1(int a, int b);

double task2(double a, double b, double c);

int task3(int a, int b);

void task4(Arrays arr);

void PrintArrays(Arrays arr)
{
    for (int i = 0; i < arr.n; i++)
        std::cout << arr.a[i] << ' ';
    std::cout << '\n';

    for (int i = 0; i < arr.n; i++)
        std::cout << arr.b[i] << ' ';
    std::cout << '\n';
}

// driver code
int main()
{
    std::cout << task1(1, 2) << '\n';
    std::cout << task2(100, 199, 100) << '\n';
    std::cout << task3(1, 4) << '\n';

    double a[5] = {1, 2, 3, 4, 5};
    double b[5] = {1, 2, 3, 4, 5};
    Arrays arr = {a, b, 5};

    task4(arr);
    PrintArrays(arr);

    return 0;
}

// Напишіть функцію, яка приймає на вхід кількість велосипедів a і кількість автомобілів b, і повинна повернути (return) сумарну кількість коліс усіх транспортних засобів.
int task1(int a, int b)
{
    return a * 2 + b * 4;
}

// Напишіть функцію, яка приймає на вхід три числа, і повертає число 1, якщо їх сума знаходиться в діапазоні від 0 до 100, інакше повертає найбільше серед них, або -1, якщо вони всі рівні.
double task2(double a, double b, double c)
{
    double sum = a + b + c;

    if (sum > 0 && sum < 100)
        return 1;

    if (a == b && b == c)
        return -1;

    return std::max({a, b, c});
}

// Напишіть функцію, яка приймає на вхід два числа, і повертає суму всіх цілих чисел між ними, які діляться без остачі на 5 або на одне з цих чисел.
int task3(int a, int b)
{
    int sum = 0;

    for (int i = std::min(a, b) + 1; i < std::max(a, b); i++)
        if (i % 5 == 0 || i % a || i % b)
            sum += i;

    return sum;
}

// Напишіть функцію, яка приймає на вхід два масива однакової довжини + параметр, який описує їх довжину; і модифікує їх таким чином, що в першому масиві в кожній i-тій комірці знаходиться різниця цієї комірки і відповідної i-тої комірки другого масиву, а в другому масиві в кожній i-тій комірці знаходиться сума цієї комірки і відповідної i-тої комірки першого масиву.
void task4(Arrays arr)
{
    double *a = new double[arr.n], *b = new double[arr.n];

    for (int i = 0; i < arr.n; i++)
    {
        a[i] = arr.a[i];
        b[i] = arr.b[i];
    }

    for (int i = 0; i < arr.n; i++)
    {
        a[i] = arr.a[i] - arr.b[i];
        b[i] = arr.a[i] + arr.b[i];
    }

    for (int i = 0; i < arr.n; i++)
    {
        arr.a[i] = a[i];
        arr.b[i] = b[i];
    }

    return;
}