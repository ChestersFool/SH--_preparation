#include <iostream>
#include <string>
#include <vector>
#include <variant>

// FIXME how this works idk, but it works

using namespace std;

union UNION1
{
    int number = 0;
    char str;
};

int MixedSum(vector<UNION1> array)
{
    int sum = 0;

    for (auto &i : array)
    {
        if (i.number >= 10)
        {
            sum += int(i.str) - 48;
            continue;
        }

        sum += i.number;
    }

    return sum;
}

int main()
{
    // ! doesn`t work with variant

    vector<UNION1> array;

    UNION1 c;
    c.str = '4';

    array.push_back(c);
    array.push_back(UNION1{9});

    cout << MixedSum(array);
    return 0;
}