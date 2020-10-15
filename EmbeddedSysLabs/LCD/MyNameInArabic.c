LCD_voidWriteCmd(0b0001000000);

    LCD_voidWriteData(0);
	LCD_voidWriteData(2);    //0   0, 2, 14, 18, 18, 15, 0, 0
	LCD_voidWriteData(14);
	LCD_voidWriteData(18);
	LCD_voidWriteData(18);
	LCD_voidWriteData(15);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);

	LCD_voidWriteData(2);
	LCD_voidWriteData(2);    //1  0, 2, 2, 2, 2, 28, 0, 0
	LCD_voidWriteData(2);
	LCD_voidWriteData(2);
	LCD_voidWriteData(2);
	LCD_voidWriteData(28);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);

	LCD_voidWriteData(4);
	LCD_voidWriteData(4);    //2  0, 4, 4, 4, 4, 4, 0, 0
	LCD_voidWriteData(4);
	LCD_voidWriteData(4);
	LCD_voidWriteData(4);
	LCD_voidWriteData(4);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);

	LCD_voidWriteData(0);
	LCD_voidWriteData(0);    //3  0, 0, 2, 1, 1, 14, 0, 0
	LCD_voidWriteData(2);
	LCD_voidWriteData(1);
	LCD_voidWriteData(1);
	LCD_voidWriteData(14);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);

	LCD_voidWriteData(0);     //4  0, 0, 0, 0, 2, 31, 0, 4
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);
	LCD_voidWriteData(2);
	LCD_voidWriteData(31);
	LCD_voidWriteData(0);
	LCD_voidWriteData(4);

    LCD_voidWriteData(0);
	LCD_voidWriteData(6);    //5  0, 6, 9, 8, 4, 31, 0, 0
	LCD_voidWriteData(9);
	LCD_voidWriteData(8);
	LCD_voidWriteData(4);
	LCD_voidWriteData(31);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);

	LCD_voidWriteCmd(0b0010000000);   for moving text in second row

				Delay_ms(50);
            if(position2==0b11000000){
            	position2=0b10111000;
            }
			if(position2 < 0b10110001){
				position2=(0b11001111-7);
			}


					LCD_voidWriteCmd(position1);

					LCD_voidWriteData(1);

					position1++;

					if(position1> 0b10001111){
					position1=0b10000000;
								}
*/

{\rtf1}