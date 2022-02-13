/**
 * @file conversion.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "convert.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define ARRAY_SIZE  20
int decimaltobinary()
{
    int a[10],n,i;
    printf("\nEnter decimal number to be converted to binary:\n");
    scanf("%d",&n);
    for(i=0;n>0;i++)    
        {    
            a[i]=n%2;    
            n=n/2;    
        }    
    printf("\nBinary of Given Number is = ");    
    for(i=i-1;i>=0;i--)    
        {    
            printf("%d",a[i]);    
        }    
    return 0;
}

int binarytodecimal()
{
    int num, binary_num, decimal_num = 0, base = 1, rem; 
    printf("Enter Binary numvber to be converted to Decimal:\n");
    scanf("%d",&num);
    binary_num = num;
    while ( num > 0)  
    {  
        rem = num % 10;                                 /* divide the binary number by 10 and store the remainder in rem variable. */  
        decimal_num = decimal_num + rem * base;  
        num = num / 10;                                                                         // divide the number with quotient  
        base = base * 2;  
    }  
    printf (" \n The decimal number of given number is %d \t", decimal_num);                                 // print the decimal   
    return 0;
}
 

int decimaltooctal()
{
    printf("Enter Decimal number to be converted to Octal:\n");
    int decimalNumber;
    
    scanf("%d",&decimalNumber);
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    printf (" \n The Octal number is %d \t", octalNumber);

    return 0;
}

int octaltodecimal()
{
    int n1, n5,p=1,k,ch=1;
	int dec=0,i=1,j,d;
	printf("Input an octal number (using digit 0 - 7) :");
	scanf("%d",&n1);
	n5=n1;

    for(;n1>0;n1=n1/10)
    {
       k=n1 % 10;
       if(k>=8) 
       { 
        ch=0;
       }
     }

  switch(ch)
    {
    case 0 :
        printf("\nThe number is not an octal number. \n\n");
        break;
    case 1:
        n1=n5;
	for (j=n1;j>0;j=j/10)
	{  
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*8;

	   dec=dec+(d*p);
	   i++;
	}
        printf("The equivalent Decimal  Number : %d \n\n",dec);
        break;
    }
}

int decimaltohexa()
{
    int num, bin = 0;    
    int i = 0, rem;
    char hex_arr[50];

    printf("Enter a decimal number to be econverted to hex: ");
    scanf("%d", &num);      

    while(num != 0)
    {
        rem = num % 16;  // get the right most digit

        if (rem < 10)
        {
            hex_arr[i++] = 48 + rem;
        }
        else
        {
            hex_arr[i++] = 55 + rem;
        }

        num /= 16;  // get the quotient
    }

    printf("0x");

    for(int j = i - 1; j >= 0 ; j--)  // print the hex_arr in reverse order
    {
        printf("%c", hex_arr[j]);
    }    

    return 0;
}

int hexatodecimal()
{
    char hex[ARRAY_SIZE];
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    /* Get hexadecimal value from user */
    printf("Enter hexadecimal number to be converted to decimal: ");
    fflush(stdin);
    fgets(hex,ARRAY_SIZE,stdin);
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("Decimal number = %lld\n", decimal);
    return 0;

    return 0;
}
int binarytohexadecimal(){
   long int binaryval, hexadecimalval = 0, i = 1, remainder;
   printf("Enter the binary number to hexadecimal: ");
   scanf("%ld", &binaryval);
   while (binaryval != 0){
      remainder = binaryval % 10;
      hexadecimalval = hexadecimalval + remainder * i;
      i = i * 2;
      binaryval = binaryval / 10;
   }
   printf("Equivalent hexadecimal value: %lX", hexadecimalval);
   return 0;
}
int hexadecimaltobinary()
{
    {
    char hexNum[100];
	long int count=0;
	printf("Enter a hexadecimal number To Convet it into Binary : ");
	scanf("%s",hexNum);
	while(hexNum[count])
	{
		switch(hexNum[count])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid Entry, Please Try Again  %c",hexNum[count]);
		}
		count++;
	}
	return 0;
    }
}
int octaltobinary()
{
    int octnum, rev=0, rem;
    printf("Enter any Octal Number to be converted to binary: ");
    scanf("%d", &octnum);
    while(octnum!=0)
    {
        rem = octnum%10;
        rev = (rev*10) + rem;
        octnum = octnum/10;
    }
    octnum = rev;
    printf("\nEquivalent Binary value = ");
    while(octnum!=0)
    {
        rem = octnum%10;
        switch(rem)
        {
            case 0: printf("000");
                break;
            case 1: printf("001");
                break;
            case 2: printf("010");
                break;
            case 3: printf("011");
                break;
            case 4: printf("100");
                break;
            case 5: printf("101");
                break;
            case 6: printf("110");
                break;
            case 7: printf("111");
                break;
            default: printf(" InvalidOctalDigit(%d) ", rem);
                break;
        }
        octnum = octnum/10;
    }
   
    return 0;
}
int binarytooctal()

{       int n1, n,p=1;
	int dec=0,i=1,j,d;
        int ocno=0,dn;

	printf("Input a binary number to be converted to octal:");
	scanf("%d",&n);
	n1=n;
	for (j=n;j>0;j=j/10)
	{  
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*2;

	   dec=dec+(d*p);
	   i++;
	}
     dn=dec;
     i=1;

      for(j=dec;j>0;j=j/8)
       {
        ocno=ocno+(j % 8)*i;
        i=i*10;
        n=n/8;
       }
   
        printf("\nThe Binary Number : %d\nThe equivalent Octal  Number : %d \n\n",n1,ocno);
}

