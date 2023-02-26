#include <iostream>
using namespace std;

int main() {
    int M, N;
    int const M = 0;
    cout << "Input size of masive À: ";
    cin >> M;
    cout << "Input size of masive Â: ";
    cin >> N;

    int C[M + N]; 
    for (int i = 0; i < M; i++) {
        cout << "Input number of masive À[" << i << "]: ";
        cin >> C[i];
    }
    for (int i = 0; i < N; i++) {
        cout << "Input number of masive Â[" << i << "]: ";
        cin >> C[M + i];
    }

    cout << "Masive Ñ: ";
    for (int i = 0; i < M + N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}