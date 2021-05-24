#include <iostream>
#include <locale.h>

using namespace std;

#define ARR_SIZE 10

#define SwapINT(a, b) \
    { \
        auto tmp = a; \
        a = b; \
        b = tmp; \
    }

void sortArr(int Arr[])
{
    for (size_t i = 0; i < ARR_SIZE; ++i)
        for (int j = 0; j < ARR_SIZE - i - 1; ++j)
            if (Arr[j] > Arr[j + 1])
                SwapINT(Arr[j], Arr[j + 1]);
}
int main()
{
    setlocale(LC_ALL, "Russian");

    int Arr[ARR_SIZE];
    for (size_t i = 0; i < ARR_SIZE; ++i)
        cin >> Arr[i];
    cout << endl;

    sortArr(Arr);

    for (size_t i = 0; i < ARR_SIZE; ++i)
        cout << Arr[i] << " ";

    return 0;
}
