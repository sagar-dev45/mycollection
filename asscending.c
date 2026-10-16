#include <stdio.h>
int main()
{
    int arr[5], smallest, s;
    for (int i = 1; i <= 5; i++) {
        printf("Enter no %d\n", i);
        scanf("%d", &arr[i]);
    }

    for (s = 0; s < 5; s++) {
        smallest = arr[0];
        //for(int j=s;j<=s;j++){
        if (arr[s] <= smallest) {
            smallest = arr[s];
        } else {
            smallest = smallest;
        }

        smallest = arr[s];
        printf("%d\n", arr[s]);
    }
}
