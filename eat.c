#include<stdio.h>
#include<stdlib.h>
void grade(int m);
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("\n");
    switch(n)
    {
    case 5:
        printf("Food item - Pizza\nPrice - Rs 239");
        break;
    case 4:
        printf("Food item - Burger\nPrice - Rs 129");
        break;
    case 3:
        printf("Food item - Pasta\nPrice - Rs 179");
        break;
    case 2:
        printf("Food item - French Fries\nPrice - Rs 99");
        break;
    case 1:
        printf("Food item - Sandwich\nPrice - Rs 149");
        break;
    default :
        printf("Invalid Number(i.e.choose number in between 1-5)");
    }
    return 0;
}
