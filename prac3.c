//TO CALCULATE FACTORIAL OF NUMBER USING RECURSION.
# include <stdio.h>
//function to print factorial of n
int factorial(int n);
int main() {
	printf("\033[1;31mThis program is made by MOHITSA🦇\033[0m\n");
int n;
printf("enter the number whom factorial you want to know: ");
scanf("%d", &n);
printf("factorial of %d is : %d", n, factorial(n));
printf("\nThanks for visiting!!!!!");
return 0;
}
int factorial(int n) {
if(n == 0) {
return 1;
}
int factnm1 = factorial(n-1);
int factn = factnm1 * n;
return factn;
}