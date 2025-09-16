#include <stdio.h>


int main(void){
    
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a,&b);

    int sum = a + b;
    printf("Sum: %d\n", sum);

    int diffrence = a - b;
    printf("Diffrence: %d\n", diffrence);

    int product = a * b;
    printf("Product: %d\n", product);

    if(b != 0){
        int quotient = a / b;
        int remainder = a % b;
        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);
        
    } else {
        printf("Quotient: undefined (division by zero)\n", product);
        printf("Remainder: undefined (division by zero)\n", product);
    }

        return 0;
}