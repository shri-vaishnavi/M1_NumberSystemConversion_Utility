/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "convert.h"
extern void test_main();
#define ARRAY_SIZE  20
int main()
{ 
    // #if 0 // Uncomment while Unit testing
    char selection[50];
    int user_choice;
    while(1)
    {
        printf("\n\nNumber System Conversion\n\n");
        printf("    1. Decimal to binary\n");
        printf("    2. Binary to Decimal\n");
        printf("    3. Decimal to octal\n");
        printf("    4. Octal to Decimal\n");
        printf("    5. Decimal to Hexa-Decimal\n");
        printf("    6. Hexa-Decimal to Decimal\n");
        printf("    7. Binary to Hexa Dcimal\n");
        printf("    8. Hexadecimal to Binary\n");
        printf("    9. Octal to Binary\n");
        printf("   10. Binary to Octal\n");
        printf("   11. Exit \n");
        do {
            printf("Enter your choice: \n");
            fgets(selection,50,stdin);
            user_choice = atoi(selection);
            } 
        while (user_choice < 1 || user_choice > 11);

        switch(user_choice)
        {
        case 1:
            decimaltobinary();
            break;
        case 2:
            binarytodecimal();
            break;
        case 3:
            decimaltooctal();
            break;
        case 4:
            octaltodecimal();
            break;
        case 5:
            decimaltohexa();
            break;
        case 6:
            hexatodecimal();
            break;
        case 7:
            binarytohexadecimal();
            break;
        case 8:
            hexadecimaltobinary();
            break;
        case 9:
            octaltobinary();
            break;
        case 10:
            binarytooctal();
            break;
        case 11:
            exit(0);
            break;
        default:
            break;
        }
    }
    // Uncomment next 3 lines while unit testing
    /* #else
    test_main();
    #endif*/
    return 0;

}
