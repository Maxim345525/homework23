#include <iostream>
using namespace std;
const int M = 5;
const int N = 7;
const int MAX_SIZE = 100;
int main() {
    int A[M];
    int B[N];
    int C[MAX_SIZE];
    int k = 0;
    cout << "Input number of masive À:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    cout << "Input number of masive Â:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < M; i++) {
        bool already_in_C = false;
        for (int n = 0; n < k; n++) {
            if (C[n] == A[i]) { 
                already_in_C = true;
                break;
            }
        }
        if (!already_in_C) { 
            C[k] = A[i];
            k++;
        }
    }
    for (int i = 0; i < N; i++) {
        bool already_in_C = false;
        for (int n = 0; n < k; n++) {
            if (C[n] == B[i]) { 
                already_in_C = true;
                break;
            }
        }
        if (!already_in_C) { 
            C[k] = B[i];
            k++;
        }
    }
    cout << "New masive: ";
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}