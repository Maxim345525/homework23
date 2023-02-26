#include <iostream>
using namespace std;
void count_elements(int* arr, int size, int* positive, int* negative, int* zero) {
    *positive = 0;
    *negative = 0;
    *zero = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            (*positive)++;
        }
        else if (arr[i] < 0) {
            (*negative)++;
        }
        else {
            (*zero)++;
        }
    }
}
int main() {
    const int MAX_SIZE = 100;
    int A[MAX_SIZE];
    int N;
    cout << "Input size of masive: ";
    cin >> N;
    cout << "Input number of masive: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int positive, negative, zero;
    count_elements(A, N, &positive, &negative, &zero);
    cout << "dodatni elementu: " << positive << endl;
    cout << "videmni elementu: " << negative << endl;
    cout << "zero element : " << zero << endl;
    return 0;
}