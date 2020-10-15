/*
 * main.c
 *
 *  Created on: Feb 6, 2018
 *      Author: Abduallah
 */


#include "STD_TYPES.h"
#include "delay.h"
#include "DIO_int.h"
#include "DIO_reg.h"
#include "LCD_int.h"


u8 position=0b10000000;
void main(void){
u8 i=0;
	DIO_voidInitialize();
	LCD_voidInitialize();





	while(1)
		{
		for(i=0;i<16;i++){

			LCD_voidWriteCmd(position);
			LCD_voidWriteData('A');
			LCD_voidWriteData('B');
			LCD_voidWriteData('D');
			LCD_voidWriteData('U');
			LCD_voidWriteData('L');
			LCD_voidWriteData('L');
			LCD_voidWriteData('A');
			LCD_voidWriteData('H');
			if(position>0b1000110){
				switch (i){

							case 9:
								LCD_voidWriteCmd(0b10000000);
								LCD_voidWriteData('H');

								break;
							case 10:
											LCD_voidWriteCmd(0b10000000);
											LCD_voidWriteData('A');
											LCD_voidWriteData('H');

											break;

							case 11:
								LCD_voidWriteCmd(0b10000000);
											LCD_voidWriteData('L');
											LCD_voidWriteData('A');
											LCD_voidWriteData('H');

											break;
							case 12:
								LCD_voidWriteCmd(0b10000000);
											LCD_voidWriteData('L');
											LCD_voidWriteData('L');
											LCD_voidWriteData('A');
											LCD_voidWriteData('H');

											break;
							case 13:
								LCD_voidWriteCmd(0b10000000);
											LCD_voidWriteData('U');
											LCD_voidWriteData('L');
											LCD_voidWriteData('L');
											LCD_voidWriteData('A');
											LCD_voidWriteData('H');

											break;
							case 14:
								LCD_voidWriteCmd(0b10000000);
											LCD_voidWriteData('D');
											LCD_voidWriteData('U');
											LCD_voidWriteData('L');
											LCD_voidWriteData('L');
											LCD_voidWriteData('A');
											LCD_voidWriteData('H');

											break;
							case 15:
								LCD_voidWriteCmd(0b10000000);
											LCD_voidWriteData('B');
											LCD_voidWriteData('D');
											LCD_voidWriteData('U');
											LCD_voidWriteData('L');
											LCD_voidWriteData('L');
											LCD_voidWriteData('A');
											LCD_voidWriteData('H');

											break;


							}
			}
			Delay_ms(500);
			position++;

			LCD_voidWriteCmd(0b00000001);
			if(position> 0b10001111){
				position=0b10000000;
			}

		}
}
}


   /* LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000110);    //0
	LCD_voidWriteData(0b00000110);
	LCD_voidWriteData(0b00001010);
	LCD_voidWriteData(0b00010010);
	LCD_voidWriteData(0b00010010);
	LCD_voidWriteData(0b00001101);
	LCD_voidWriteData(0b00000000);

	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);    //1
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00011100);
	LCD_voidWriteData(0b00000000);

	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);    //2
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000000);

	LCD_voidWriteData(0b00000000);
	LCD_voidWriteData(0b00001100);    //3
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000001);
	LCD_voidWriteData(0b00000001);
	LCD_voidWriteData(0b00010010);
	LCD_voidWriteData(0b00011100);
	LCD_voidWriteData(0b00000000);

	LCD_voidWriteData(0b00000000);     //4
	LCD_voidWriteData(0b00000000);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00000010);
	LCD_voidWriteData(0b00011100);
	LCD_voidWriteData(0b00000000);
	LCD_voidWriteData(0b00000100);

	LCD_voidWriteData(0b00000000);     //5
	LCD_voidWriteData(0b00001110);
	LCD_voidWriteData(0b00010001);
	LCD_voidWriteData(0b00010001);
	LCD_voidWriteData(0b00001000);
	LCD_voidWriteData(0b00000111);
	LCD_voidWriteData(0b00011111);
	LCD_voidWriteData(0b00000000);



	LCD_voidWriteCmd(0b10000000);

	LCD_voidWriteData(0);
	LCD_voidWriteData(1);
	LCD_voidWriteData(1);
	LCD_voidWriteData(2);
	LCD_voidWriteData(3);
	LCD_voidWriteData(4);
	LCD_voidWriteData(5); */
