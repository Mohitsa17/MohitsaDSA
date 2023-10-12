/*
 * C program to delete an element from an array by index or value
 */

#include <stdio.h>
#include <stdlib.h>

int n;

void delete_element_by_index(int arr[], int index)
{
    int i;
    for (i = index; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n -= 1;
}

void delete_element_by_value(int arr[], int value)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            for (; i < n - 1; i++)
                arr[i] = arr[i + 1];
            n -= 1;
            break;
        }
    }
}

void print_array(int arr[])
{
    int i;
    printf("the elements in the array after deletion are:\n ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
} 

int main(void)
{
    printf("\033[1;31mThis program is made by MOHITSA🦇\033[0m\n");
    int index, value, arr[10], choice;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("You can delete an element by index or value.\n1. Delete by index\n2. Delete by value\n3. To Display array's element\n4. for EXIT\n");
    do
    {
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the index of the element to be deleted: ");
            scanf("%d", &index);
            delete_element_by_index(arr, index);
            break;
        }
        case 2:
        {
            printf("Enter the value of the element to be deleted: ");
            scanf("%d", &value);
            delete_element_by_value(arr, value);
            break;
        }
        case 3:
        {
            print_array(arr);
            break;
        }
        case 4:
        {
            printf("THANK YOU FOR VISITING!!!\n Have a good day('.')");
            break;
        }
        default:
        {
            printf("INVALID CHOICE!!!!!\n please enter a valid choice(1/2/3/4)");
        }
        }
    } while (choice != 4);
}