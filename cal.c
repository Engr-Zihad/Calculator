#include <stdio.h>
int main() {
    float a,b;
  char option;
    float sum,sub,mul,div,rem;
    printf("mini calculator \n ");
    printf("press + for addition \n");
    printf("press - for subtraction \n");
    printf("press * for multiplication \n");
    printf("press / for division \n");
    printf("press %% for remainder \n");
    printf("enter your choice : ");
    scanf(" %c",&option);
    if(option == '+')
    {
        printf("enter two numbers for addition : ");
        scanf("%f %f",&a,&b);
        sum = a + b;
        printf("the sum is : %f",sum);
    }
    else if(option == '-')
    {
        printf("enter two numbers for subtraction : ");
        scanf("%f %f",&a,&b);
        sub = a - b;
        printf("the difference is : %f",sub);
    }
    else if(option == '*')
    {
        printf("enter two numbers for multiplication : ");
        scanf("%f %f",&a,&b);
        mul = a * b;
        printf("the product is : %f",mul);
    }
    else if(option == '/')
    {
        printf("enter two numbers for division : ");
        scanf("%f %f",&a,&b);
        //nested if statement to check if the divisor is zero`
        if(b!=0)
        {
            div = a / b;
            printf("the division is : %f",div);
        }
        else
        {
            printf("divided by zero is invalid");      
        }
    }
    else if(option == '%')
    {
        printf("enter two numbers for remainder : ");
        scanf("%f %f",&a,&b);
        if(b!=0)
        {
            rem = (int)a % (int)b; //casting to int for modulus operation
            printf("the remainder is : %f",rem);
        }
        else
        {
            printf("divided by zero is invalid");      
        }
        
    }
    return 0;
}