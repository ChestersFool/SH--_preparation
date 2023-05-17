#include <stdio.h>
#include <stdlib.h>

int *reverse_list(const int *array, size_t length)
{

    int *result;
    result = (int*)malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
        result[i] = array[length - i - 1];

    return result;
}

int main()
{
    int array[] = {1, 2, 3, 4};
    int *result = reverse_list(array, 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}