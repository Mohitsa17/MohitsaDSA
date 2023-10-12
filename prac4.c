// TO DEMONSTRATE STATIC IMPLEMENTATION OF STACK
#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);

void push()
{
    if (top >= n - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("\nEnter the element to be pushed : ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
        printf("stack underflow \n");
    else
        printf("\nelement deleted is %d", stack[top]);
    top--;
}
void display()
{
    if (top >= 0)
    {
        printf("\nThe elements of stack are:  ");
        for (i = top; i >= 0; --i)
            printf("%d ", stack[i]);
        printf("\n Press next choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
int main()
{
    printf("\033[1;31mThis program is made by MOHITSA🦇\033[0m\n");
    top = -1;
    printf("enter the size of STACK[MAX=100]:\n");
    scanf("%d", &n);
    printf("SELECT STACK OPERATIONS YOU WANT TO PERFORM USING ARRAY..\n");
    printf("\n1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    do
    {
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
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
    return 0;
}