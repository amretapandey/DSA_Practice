#include <iostream>

using namespace std;

void Insertion(int A[], int n){
    int i, j, x;
    for (int i = 1; i < n; i++){
        j = i - 1;
        x = A[i];
        while ( j > -1 && A[j] > x){
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{
    int A[] = {11, 2, 3, 7, 9};
    Insertion(A, 5);

    for(int i = 0; i < 5; i++)
        cout<<A[i]<<" ";

    return 0;
}
