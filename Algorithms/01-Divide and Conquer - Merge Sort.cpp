#include <iostream>

using namespace std;

int merge(int A[], int l, int mid, int h){
    int i = l, j = mid + 1, k = l, B[100];
    while(i <= mid && j <= h){
        if(A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];

    for(i = l; i <= h; i++)
        A[i] = B[i];
}


void MergeSort(int A[], int l, int h){
    int mid;
    if (l < h){
        mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

int main()
{
    int A[] = {8, 3, 1, 9, 15};
    MergeSort(A, 0, 4);

    for(int i = 0; i < 5; i++)
        cout<<A[i]<<" ";

    return 0;
}
