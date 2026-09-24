#include "reg52.h"
#include <intrins.h>
#include "uart.h"
#include "Delay.h"
#include "main.h"
#include "oled.h"

unsigned char recev;
unsigned int count;

void main()
	
{
	//UART_Init();
	
	OLED_Init();			//初始化OLED  
	OLED_Clear(); 

//	OLED_ShowCHinese(0+15,0,0);//中
//	OLED_ShowCHinese(18+15,0,1);//景
//	OLED_ShowCHinese(36+15,0,2);//园
//	OLED_ShowCHinese(54+15,0,3);//电
//	OLED_ShowCHinese(72+15,0,4);//子
//	OLED_ShowCHinese(90,0,5);//科
//	OLED_ShowCHinese(108,0,6);//技
	
	OLED_ShowCHinese(0,0,0);//中
	OLED_ShowCHinese(18,0,1);//景
	OLED_ShowCHinese(36,0,2);//园
	OLED_ShowCHinese(54,0,3);//电
	OLED_ShowCHinese(72,0,4);//子	
	OLED_ShowCHinese(90,0,5);//中
	
	OLED_ShowCHinese(0,2,6);//景
	OLED_ShowCHinese(18,2,7);//园
	OLED_ShowCHinese(36,2,8);//电
	OLED_ShowCHinese(54,2,9);//子
	OLED_ShowCHinese(72,2,10);//科
	OLED_ShowCHinese(90,2,11);//技
	
	while(1)
	{
		//OLED_Clear();
//		OLED_ShowCHinese(0+15,0,0);//中
//		OLED_ShowCHinese(18+15,0,1);//景
//		OLED_ShowCHinese(36+15,0,2);//园
//		OLED_ShowCHinese(54+15,0,3);//电
//		OLED_ShowCHinese(72+15,0,4);//子
//		OLED_ShowCHinese(90,0,5);//科
//		OLED_ShowCHinese(108,0,6);//技
		//OLED_ShowString(6,3,"wo shi li  ",16);
		OLED_ShowString(0,6,"study:",16);  
		OLED_ShowString(63,6,"lern:",16);  
		OLED_ShowChar(48,6,'d',16);//显示ASCII字符	
	
		OLED_ShowNum(103,6,8,3,16);//显示ASCII字符的码值

		Delay_xms(1000);
	}
}
