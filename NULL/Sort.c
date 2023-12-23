#include <stdio.h>
# define N 6

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int bubble(int arr[], int n){
    int swapped = 0;
    for (int i = 1; i < n; i++){
        if(arr[i]<=arr[i-1]){
        swap(arr+i-1, arr+i);
        swapped=1;
        }
    }
    return swapped;
}
void BubbleSort(int arr[], int n){
    int not_sorted = 1;
    while((n>1) && not_sorted){
        not_sorted = bubble(arr, n--);
    }
}
int main(){
    int array[N] = {2,8,9,5,1,9};
    BubbleSort(array, N);
    for(int i=1; i<N; i++){
        printf("%d ", array[i]);
    }
    return 0;
}