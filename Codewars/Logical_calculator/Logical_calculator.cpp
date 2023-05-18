#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool LogicalCalc(const std::vector<bool> array, std::string op)
{
    bool result = array[0];
    for (int i = 1; i < array.size(); i++)
    {
        if (op == "AND")
            result = result && array[i];
        else if (op == "OR")
            result = result || array[i];
        else if (op == "XOR")
            result = result ^ array[i];
    }
    return result;
}

// ! in Python
// def logical_calc(array, op):
//     result = array[0]
//     for i in range(1, len(array)):
//         if op == "AND":
//             result = result and array[i]
//         elif op == "OR":
//             result = result or array[i]
//         elif op == "XOR":
//             result = result ^ array[i]
//     return result

int main()
{
    cout << LogicalCalc({true, true, true, false}, "AND") << '\n';
    cout << LogicalCalc({true, true, true, false}, "OR") << '\n';
    cout << LogicalCalc({true, true, true, false}, "XOR") << '\n';

    cout << LogicalCalc({true, true, false, false}, "AND") << '\n';
    cout << LogicalCalc({true, true, false, false}, "OR") << '\n';
    cout << LogicalCalc({true, true, false, false}, "XOR") << '\n';

    cout << LogicalCalc({true, false, false, false}, "AND") << '\n';
    cout << LogicalCalc({true, false, false, false}, "OR") << '\n';
    cout << LogicalCalc({true, false, false, false}, "XOR") << '\n';

    cout << LogicalCalc({false, false, false, false}, "AND") << '\n';
    cout << LogicalCalc({false, false, false, false}, "OR") << '\n';
    cout << LogicalCalc({false, false, false, false}, "XOR") << '\n';

    return 0;
}