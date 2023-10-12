// To perform insertion operation on Array.
#include <stdio.h>
// FUNCTION FOR INSERTION
void insertElement(int arr[], int n, int x, int pos)
{

    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
}

int main()
{
    printf("\033[1;31mThis program is made by MOHITSA🦇\033[0m\n");
    int arr[100];
    int n;
    int x, pos;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("enter the position:\n");
    scanf("%d", &pos);
    printf("enter inserted element:\n");
    scanf("%d", &x);

    insertElement(arr, n, x, pos);
    n++;
    printf("After insertion : ");
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("Thanks for visiting!!!!");
    return 0;
}