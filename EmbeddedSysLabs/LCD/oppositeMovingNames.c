
u8 position1=0b10000000;
u8 position2=(0b11001111-7);
void main(void){

	DIO_voidInitialize();
	LCD_voidInitialize();


	while(1)
		{

			LCD_voidWriteCmd(position1);
			LCD_voidWriteData('A');
			LCD_voidWriteData('B');
			LCD_voidWriteData('D');
			LCD_voidWriteData('U');
			LCD_voidWriteData('L');
			LCD_voidWriteData('L');
			LCD_voidWriteData('A');
			LCD_voidWriteData('H');
			position1++;
			//LCD_voidWriteCmd(0b00000001);
			if(position1> 0b10001111){
				position1=0b10000000;
			}

			LCD_voidWriteCmd(position2);
			LCD_voidWriteData('M');
			LCD_voidWriteData('U');
			LCD_voidWriteData('H');
			LCD_voidWriteData('A');
			LCD_voidWriteData('M');
			LCD_voidWriteData('M');
			LCD_voidWriteData('A');
			LCD_voidWriteData('D');
			Delay_ms(500);
			position2--;
			LCD_voidWriteCmd(0b00000001);
            if(position2==0b11000000){
            	position2=0b10111000;
            }
			if(position2 < 0b10110001){
				position2=(0b11001111-7);
			}

		}
}
