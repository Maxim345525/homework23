#include <iostream>
using namespace std;

int main() {
    int M, N;
    int const M = 0;
    cout << "Input size of masive �: ";
    cin >> M;
    cout << "Input size of masive �: ";
    cin >> N;

    int C[M + N]; 
    for (int i = 0; i < M; i++) {
        cout << "Input number of masive �[" << i << "]: ";
        cin >> C[i];
    }
    for (int i = 0; i < N; i++) {
        cout << "Input number of masive �[" << i << "]: ";
        cin >> C[M + i];
    }

    cout << "Masive �: ";
    for (int i = 0; i < M + N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}