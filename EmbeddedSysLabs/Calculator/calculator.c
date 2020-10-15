/*
 * main.c
 *
 *  Created on: Feb 26, 2018
 *      Author: Abduallah
 */

#include "STD_TYPES.h"
#include "delay.h"
#include "DIO_int.h"
#include "KEYPAD_int.h"
#include "LCD_int.h"
#include "BIT_MATH.h"


void main(void)
{
	DIO_voidInitialize();
	LCD_voidInitialize();
	LCD_voidWriteCmd(0b00000001);
 u32 number1;
 u16 arr[16]={0};
 u8 i=0,result;

printf("%d",number1);

	while(1){
		number1=KEYPAD_u16GetKpStatus();
        while(KEYPAD_u16GetKpStatus());

		switch (number1){
		case 1:

			LCD_voidWriteData('0');
			arr[i]=0;
			i++;
			break;
		case 2:
			LCD_voidWriteData('1');
			arr[i]=1;
			i++;
			break;
		case 4:
			LCD_voidWriteData('2');
			arr[i]=2;
			i++;
			break;
		case 8:
			LCD_voidWriteData('3');
			arr[i]=3;
			i++;
			break;
		case 16:
			LCD_voidWriteData('4');
			arr[i]=4;
			i++;
			break;
		case 32:
			LCD_voidWriteData('5');
			arr[i]=5;
			i++;
			break;
		case 64:
			LCD_voidWriteData('6');
			arr[i]=6;
			i++;
			break;
		case 128:
			LCD_voidWriteData('7');
			arr[i]=7;
			i++;
			break;
		case 256:
			LCD_voidWriteData('8');
			arr[i]=8;
			i++;
			break;
		case 512:
			LCD_voidWriteData('9');
			arr[i]=9;
			i++;
			break;
		case 1024:
			LCD_voidWriteData('+');
			arr[i]=43;
			i++;
			break;
		case 2048:
			LCD_voidWriteData('-');
			arr[i]=45;
			i++;
			break;
		case 4096:
			LCD_voidWriteData('/');
			arr[i]=47;
			i++;
			break;
		case 8192:
			LCD_voidWriteData('*');
			arr[i]=42;
			i++;
			break;
		case 16384:
			LCD_voidWriteData('.');
			arr[i]=46;
			i++;
			break;
		case 32768:
			LCD_voidWriteData('=');

				switch (arr[1]){
				case 43:
						result = arr[0] + arr[2];
						break;
				case 45:
						result = arr[0] - arr[2];
						break;
				case 42:
						result = arr[0] * arr[2];
						break;
				case 47:
						result = arr[0] / arr[2];
						break;
				}

				LCD_voidWriteData((result/10)+48);
				LCD_voidWriteData((result%10)+48);

			break;

	//	default:
	//		LCD_voidWriteData(' ');
		}

		Delay_ms(40);
		}




}
