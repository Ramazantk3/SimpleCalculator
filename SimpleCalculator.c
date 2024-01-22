#include <stdio.h>

//Author: Ramazantk3

int main(){
    char function;
    float variable[20], result;

    printf("First Variable:");
    scanf("%f",&variable[0]);
    printf("Please type \n + : For Addition \n - : For Substraction \n x : For Multiplication \n / : For Division\n:");
    scanf("%c",&function);
    function = getchar();
    
    printf("\nSecond Variable:");
    scanf("%f",&variable[1]);

    switch (function)
    {
    case '+':
        result = variable[0] + variable [1];
        break;
    
    case '-':
        result = variable[0] - variable [1];
        break;
    
    case 'x':
        result = variable[0] * variable [1];
        break;

    case '/':
        result = variable[0] * 1/variable [1];
        break;
    }
    printf("Result: %f", result);
}
