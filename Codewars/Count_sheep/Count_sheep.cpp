#include <vector>
#include <iostream>

using namespace std;

int count_sheep(vector<bool> arr)
{
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    return sum;
}

int main()
{
    vector<bool> array1 = {true, true, true, false,
                           true, true, true, true,
                           true, false, true, false,
                           true, false, false, true,
                           true, true, true, true,
                           false, false, true, true};
    cout << count_sheep(array1);
    return 0;
}
