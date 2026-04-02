#include<stdio.h>
int main()
{
    double num1=0;
    double num2=0;
    double result=0;
    char op;
    printf("Welcome to Arithmetic calculator.\n");
    printf("Enter an operation in the format: num1 operator num2\n");
    printf("Type '0 q 0' to exit !\n");
    while(1)
    {
        printf("Enter your operation: ");
        if(scanf(" %lf %c %lf", &num1,&op,&num2) != 3)// Check  the input is valid
        {
           
            printf("Please enter a valid operation in the format!\n");
             rewind(stdin); // Clear the input buffer
            continue;
          }// if closed
        switch(op)
        {
            case 'q':
            case 'Q':
                printf("Goodbyee!\n");
                return 0;
            case '+':
                result = num1 + num2;
                printf("%.2lf %c %.2lf = %.2lf \n",num1,op,num2,result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf %c %.2lf = %.2lf \n",num1,op,num2,result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf %c %.2lf = %.2lf \n",num1,op,num2,result);
                break;
            case '/':
                if(num2==0)
            {
                 printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2;
                printf("%.2lf %c %.2lf = %.2lf \n",num1,op,num2,result);
            }
                break;
            
            default:
                printf("Invalid operator! Please use +,-,*,/ only.\n");
                break;

        }// switch closed
        
    }// while closed
    return 0;

}
