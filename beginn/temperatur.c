#include <stdio.h>
#include <ctype.h>

int main(){
    
    char unit;
    float temp;
    float tmp_temp;

    printf("\nIs the temp in (F) or (K) or (C)?: ");
    scanf("%c", &unit);

    printf("\nEnter temp: ");
    scanf("%f", &temp);
    
    unit = toupper(unit);

    if('C' == unit){
        tmp_temp = (temp * 9 / 5) + 32;
        temp -= 237.15;
        printf("In K: %.1f\nIn F: %.1f\n", temp, tmp_temp);
    }else if ('F' == unit)
    {
        temp = ((temp - 32) * 5) / 9;
        tmp_temp = temp - 237.15;
        printf("In K: %f.1\nIn C: %.1f\n", tmp_temp, temp);
    }else if('K' == unit){
        temp += 237.15;
        tmp_temp = (temp * 9 / 5) + 32;
        printf("In C: %.1f\nIn F: %.1f\n", temp, tmp_temp);
    }else{
        printf("\n %c is not valid\n", unit);
    }
    return 0;
}