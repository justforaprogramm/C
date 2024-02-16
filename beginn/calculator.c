#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool addition(double x, double y, double *sum);
bool substraction(double x, double y, double *sum);
bool multiplication(double x, double y, double *sum);
bool division(double x, double y, double *sum);
bool power(double x, double y, double *sum);
bool and(int x, int y, double *sum);
bool modulu(int x, int y, double *sum, int *mod);


int main(void){
    
    char operator;
    double num1;
    double num2;
    double result;

    bool special = false;
    int themod;
    bool success;

    printf("\nEnter Operator (+|-|*|/|%%|^|&): ");
    scanf("%c", &operator);
    
    printf("\nEnter number one: ");
    scanf("%lf", &num1);

    printf("\nEnter number two: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            success = addition(num1, num2, &result);
            break;
        case '-':
            success = substraction(num1, num2, &result);
            break;
        case '*':
            success = multiplication(num1, num2, &result);
            break;
        case '/':
            success = division(num1, num2, &result);
            break;
        case '^':
            success = power(num1, num2, &result);
            break;
        case '&':
            success = and(round(num1), round(num2), &result);
            break;
        case '%':
            success = modulu(round(num1), round(num2), &result, &themod);
            special = true;
            break;
        default:
            printf("not an given input!\n");
    }

    if(false == success){
        printf("ERROR, Task faild successfully!\n");
    }else if(false == special){
        printf("your result is: %.4lf\n", result);
    }else{
        printf("your result is: %.0lf, %d\n", result, themod);
    }

    special = false;
    return 0;
}

bool addition(double x, double y, double *sum){
    bool returnvalue = false;
    if(NULL != sum){
        *sum = x + y;
        returnvalue = true;
    }
    return returnvalue;
}
bool substraction(double x, double y, double *sum){
    bool returnvalue = false;
    if(NULL != sum){
        *sum = x - y;
        returnvalue = true;
    }
    return returnvalue;
}
bool multiplication(double x, double y, double *sum){
    bool returnvalue = false;
    if(NULL != sum){
        *sum = x * y;
        returnvalue = true;
    }
    return returnvalue;
}
bool division(double x, double y, double *sum){
    bool returnvalue = false;
    if(NULL != sum){
        *sum = x / y;
        returnvalue = true;
    }
    return returnvalue;
}
bool power(double x, double y, double *sum){
    bool returnvalue = false;
    if(NULL != sum){
        if (0 < y){
            *sum = x;
            for(int z = 0; z < round(y)-1; z++) *sum *= x;
        }else if (0 > y){
            *sum = x;
            for(int z = 0; z < round(y * -1)-1; z++) *sum *= x;
            *sum = 1 / *sum;
        }else{
            *sum = 1;
        }

        returnvalue = true;
    }
    return returnvalue;
}
bool and(int x, int y, double *sum){
    bool returnvalue = false;
    if(NULL != sum){
        *sum = x & y;
        returnvalue = true;
    }
    return returnvalue;
}



bool modulu(int x, int y, double *sum, int *mod){
    bool returnvalue = false;
    if(NULL != sum && NULL != mod){
        *sum = x / y;
        *mod = x % y;
        returnvalue = true;
    }
    return returnvalue;
}