//To perform insertion and deletion operations on Array.
#include <stdio.h>
//FUNCTION FOR INSERTION
void insertElement(int arr[], int n, int x, int pos)
{
     
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
 
    arr[pos] = x;
}
 
 
int main()
{
    int arr[100] ;
    int n  ; 
    int x , pos;
    printf("enter the size of array\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        printf("enter the position " );
        scanf("%d ",  &pos);
       printf("enter inserted element");
       scanf("%d ",  &x);
    
    insertElement(arr, n, x, pos);
    n++;
    printf("After insertion : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
      return 0;
      
}