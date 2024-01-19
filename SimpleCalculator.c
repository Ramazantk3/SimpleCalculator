#include <stdio.h>

//Author: Ramazantk3

int main(){
    char function;
    float variable[20], result;
    printf("Please type \n A: For Addition \n S: For Substraction \n M: For Multiplication \n D: For Division\n");
    scanf("%c",&function);
    printf("First Variable:");
    scanf("%f",&variable[0]);
    printf("\nSecond Variable:");
    scanf("%f",&variable[1]);

    switch (function)
    {
    case 'A':
        result = variable[0] + variable [1];
        break;
    
    case 'S':
        result = variable[0] - variable [1];
        break;
    
    case 'M':
        result = variable[0] * variable [1];
        break;

    case 'D':
        result = variable[0] * 1/variable [1];
        break;
    }
    printf("Result: %f", result);
}
