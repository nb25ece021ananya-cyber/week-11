#include <iostream>
using namespace std;

template <class T>
void swapVals(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];

    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    int a = 10, b = 20;
    swapVals(a, b);
    cout << "After Swap: " << a << " " << b << endl;

    double arr[] = {2.5, 5.5, 3.5};
    cout << "Maximum: " << findMax(arr, 3);

    return 0;
}