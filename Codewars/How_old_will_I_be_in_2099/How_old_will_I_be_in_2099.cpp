#include <iostream>
// #include <string>

char *CalculateAge(int birth, int yearTo)
{
    char * result = new char[100];

    int age = yearTo - birth;
    if (age == 1)
    {
        sprintf(result, "You are %d year old.\0", age);
    }
    else if (age == 0)
    {
        sprintf(result, "You were born this very year!\0");
    }
    else if (age < 0)
    {
        sprintf(result, "You will be born in %d years.\0", abs(age));
    }
    else if (age == -1)
    {
        sprintf(result, "You will be born in 1 year.\0");
    }
    else
    {
        sprintf(result, "You are %d years old.\0", age);
    }
    return result;
}

int main()
{
    std::cout << CalculateAge(2003, 2020) << '\n';
    std::cout << CalculateAge(2019, 2020) << '\n';
    std::cout << CalculateAge(2003, 2003) << '\n';
    std::cout << CalculateAge(2020, 2003) << '\n';
    std::cout << CalculateAge(2020, 2019) << '\n';
    return 0;
}