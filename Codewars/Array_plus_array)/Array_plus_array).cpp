#include <vector>
#include <iostream>

using namespace std;

int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
    int sum = 0;

    for (int i = 0; i < a.size(); i++)
        sum += a[i];
    for (int i = 0; i < b.size(); i++)
        sum += b[i];

    return sum;
}

int main()
{
    cout << arrayPlusArray({1,2,3,4}, {2,2,-3});
    return 0;
}