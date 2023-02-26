#include <iostream>
using namespace std;
void sum_product(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
        *product *= arr[i];
    }
}
int main() {
    const int MAX_SIZE = 100;
    int A[MAX_SIZE];
    int N;
    cout << "Input size of masive: ";
    cin >> N;
    cout << "Input number number of masive: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int sum, product;
    sum_product(A, N, &sum, &product);
    cout << "Summa: " << sum << endl;
    cout << "Dodytok: " << product << endl;
    return 0;
}