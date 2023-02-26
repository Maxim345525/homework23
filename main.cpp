#include <iostream>
using namespace std;
int* findSubset(int* A, int sizeA, int* B, int sizeB)
{
    bool isSubset = false;
    for (int i = 0; i <= sizeA - sizeB; i++)
    {
        isSubset = true;
        for (int j = 0; j < sizeB; j++)
        {
            if (A[i + j] != B[j])
            {
                isSubset = false;
                break;
            }
        }
        if (isSubset)
        {
            return &A[i];
        }
    }
    return nullptr;
}
int main()
{
    int A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sizeA = sizeof(A) / sizeof(A[0]);
    int B[] = { 3, 4, 5 };
    int sizeB = sizeof(B) / sizeof(B[0]);
    int* subsetStart = findSubset(A, sizeA, B, sizeB);
    if (subsetStart == nullptr)
    {
        cout << "Subset not found." << endl;
    }
    else
    {
        cout << "Subset found at index " << subsetStart - A << "." << endl;
    }
    return 0;
}