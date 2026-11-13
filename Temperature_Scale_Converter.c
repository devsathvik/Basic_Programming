#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


int main() {
    char s[100];
    scanf("%s", s);
    float value;
    char unit;
    sscanf(s, "%f%c", &value, &unit);

    float celsius, fahrenheit, kelvin;

    //===== Write Your Logic Here =====
    int len = strlen(s);
    char z = s[len - 1];
    float temp = atof(s);

    if(z == 'C'){
        celsius = temp ; fahrenheit = (temp * 1.8) + 32 ; kelvin = temp + 273;
        printf("%.1fC\n",celsius);
        printf("%.1fF\n",fahrenheit);
        printf("%.1fK\n",kelvin);
    }
    if(z == 'F'){
        celsius = (temp - 32)/1.8 ; fahrenheit = temp ; kelvin = celsius + 273;
        printf("%.1fC\n",celsius);
        printf("%.1fF\n",fahrenheit);
        printf("%.1fK\n",kelvin);
    }
    if(z == 'K'){
        celsius = temp - 273 ; fahrenheit = (celsius*1.8) + 32 ; kelvin = temp;
        printf("%.1fC\n",celsius);
        printf("%.1fF\n",fahrenheit);
        printf("%.1fK\n",kelvin);
    }

}