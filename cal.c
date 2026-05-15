#include <stdio.h>
int main() {
    int a,b;
    int option;
    int sum,sub,mul,div,rem;
    printf("mini calculator \n ");
    printf("press 1 for addition \n");
    printf("press 2 for subtraction \n");
    printf("press 3 for multiplication \n");
    printf("press 4 for division \n");
    printf("press 5 for remainder \n");
    printf("enter your choice : ");
    scanf("%d",&option);
    if(option ==1)
    {
        printf("enter two numbers for addition : ");
        scanf("%d %d",&a,&b);
        sum = a + b;
        printf("the sum is : %d",sum);
    }
    else if(option == 2)
    {
        printf("enter two numbers for subtraction : ");
        scanf("%d %d",&a,&b);
        sub = a - b;
        printf("the difference is : %d",sub);
    }
    else if(option == 3)
    {
        printf("enter two numbers for multiplication : ");
        scanf("%d %d",&a,&b);
        mul = a * b;
        printf("the product is : %d",mul);
    }
    else if(option == 4)
    {
        printf("enter two numbers for division : ");
        scanf("%d %d",&a,&b);
        //nested if statement to check if the divisor is zero`
        if(b!=0)
        {
            div = a / b;
            printf("the division is : %d",div);
        }
        else
        {
            printf("divided by zero is invalid");      
        }
    }
    else if(option == 5)
    {
        printf("enter two numbers for remainder : ");
        scanf("%d %d",&a,&b);
        if(b!=0)
        {
            rem = a % b;
            printf("the remainder is : %d",rem);
        }
        else
        {
            printf("divided by zero is invalid");      
        }
        
    }
    return 0;
}