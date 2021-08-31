#include <iostream>

using namespace std;

void Selection(int A[], int n){
    int i, j, k, temp;
    for (int i = 0; i < n; i++){
        for ( j = k = i; j < n; j++){
            if (A[k] > A[j])
                k = j;
        }
        temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}

int main()
{
    int A[] = {11, 2, 3, 7, 9};
    Selection(A, 5);

    for(int i = 0; i < 5; i++)
        cout<<A[i]<<" ";

    return 0;
}
