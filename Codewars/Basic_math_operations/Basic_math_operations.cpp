#include <iostream>

using namespace std;

int basicOp(char op, int val1, int val2)
{
    switch (op)
    {
    case '+':
        return val1 + val2;
        break;
    case '-':
        return val1 - val2;
        break;
    case '*':
        return val1 * val2;
        break;
    case '/':
        return val1 / val2;
        break;
    default:
        return 0;
    }
}

int main()
{
    cout << basicOp('/', 16, 4) << '\n';
    cout << basicOp('*', 3, 4) << '\n';
    cout << basicOp('-', 11, 8) << '\n';
    cout << basicOp('+', 5, 4) << '\n';
    return 0;
}