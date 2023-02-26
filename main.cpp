#include <iostream>
using namespace std;
int main() {
    const int MAX_SIZE = 100;
    int M;
    cout << "Input size of masive ";
    cin >> M;

    int A[MAX_SIZE];
    cout << "Input number of masive À:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    int choice;
    cout << "Input 1, if you want delete parni number, input 2, if you want delete neparni number: ";
    cin >> choice;
    int k = 0; 
    for (int i = 0; i < M; i++) {
        bool should_delete = false;
        if (choice == 1) { 
            if (A[i] % 2 == 0) {
                should_delete = true;
            }
        }
        else { 
            if (A[i] % 2 == 1) {
                should_delete = true;
            }
        }

        if (!should_delete) {
            A[k] = A[i];
            k++;
        }
    }
    cout << "New masive: ";
    for (int i = 0; i < k; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}