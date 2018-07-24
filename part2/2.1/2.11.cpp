#include <stdio.h>
void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
    int first, last;
    for(first = 0, last = cnt-1;
        first < last;
        first++, last--)
    {
	inplace_swap(&a[first], &a[last]);
    }
}

int main(int argc, char* argv[]){
    int arr[] = {1, 2, 3, 4, 5};
    int len = 5;
    int i;
    reverse_array(arr, len);
    for(i = 0; i < len; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
