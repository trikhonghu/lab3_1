/*
 * 7_seg_led.c
 *
 *  Created on: Nov 5, 2023
 *      Author: Windows
 */

#include "led_7_seg.h"
#include "main.h"

//display led value
void display7segLed(uint8_t num){
	switch (num) {
	  		case 0:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	  			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	  			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	  			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	  			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
	  			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	  			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);

	  			break;
	  		case 1:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		  		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		  		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		  		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		  		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		  		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		  		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
	  			break;
	  		case 2:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		  		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		  		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
		  		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		  		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		  		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		  		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	  			break;
	  		case 3:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		  		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		  		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		  		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		  		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		  		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		  		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	  			break;
	  		case 4:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		  		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		  		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		  		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		  		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		  		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		  		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	  			break;
	  		case 5:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	  			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
	  			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	  			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	  			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	  			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	  			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	  			break;
	  		case 6:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	  			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
	  			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	  			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	  			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
	  			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	  			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	  			break;
	  		case 7:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	  			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	  			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	  			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
	  			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	  			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
	  			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
	  			break;
	  		case 8:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	  			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	  			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	  			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	  			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
	  			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	  			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	  			break;
	  		case 9:
	  			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	  			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	  			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	  			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	  			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	  			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	  			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	  			break;
	  		default:

	  			break;
	  	}
}

//scan led
void scan_led(void){
	switch (key_sw) {
		case 0://INIT
			HAL_GPIO_WritePin(SW1_GPIO_Port, SW1_Pin, RESET);
			HAL_GPIO_WritePin(SW2_GPIO_Port, SW2_Pin, SET);
			HAL_GPIO_WritePin(SW3_GPIO_Port, SW3_Pin, SET);
			HAL_GPIO_WritePin(SW4_GPIO_Port, SW4_Pin, SET);

			display7segLed(led_buffer[0]);

			key_sw = 1;
			setTimer(1, (int)(0.1*count_inter));
			break;
		case 1:
			HAL_GPIO_WritePin(SW1_GPIO_Port, SW1_Pin, RESET);
			HAL_GPIO_WritePin(SW2_GPIO_Port, SW2_Pin, SET);
			HAL_GPIO_WritePin(SW3_GPIO_Port, SW3_Pin, SET);
			HAL_GPIO_WritePin(SW4_GPIO_Port, SW4_Pin, SET);

			//if(mode == 1)
				display7segLed(led_buffer[0]);

			if(flag[1] == 1){
				key_sw = 2;
				setTimer(1, (int)(0.1*count_inter));
			}
			break;
		case 2:
			HAL_GPIO_WritePin(SW1_GPIO_Port, SW1_Pin, SET);
			HAL_GPIO_WritePin(SW2_GPIO_Port, SW2_Pin, RESET);
			HAL_GPIO_WritePin(SW3_GPIO_Port, SW3_Pin, SET);
			HAL_GPIO_WritePin(SW4_GPIO_Port, SW4_Pin, SET);

			//if(mode == 1)
				display7segLed(led_buffer[1]);

			if(flag[1] == 1){
				key_sw = 3;
				setTimer(1, (int)(0.1*count_inter));
			}
			break;
		case 3:
			HAL_GPIO_WritePin(SW1_GPIO_Port, SW1_Pin, SET);
			HAL_GPIO_WritePin(SW2_GPIO_Port, SW2_Pin, SET);
			HAL_GPIO_WritePin(SW3_GPIO_Port, SW3_Pin, RESET);
			HAL_GPIO_WritePin(SW4_GPIO_Port, SW4_Pin, SET);

			//if(mode == 1)
				display7segLed(led_buffer[2]);

			if(flag[1] == 1){
				key_sw = 4;
				setTimer(1, (int)(0.1*count_inter));
			}
			break;
		case 4:
			HAL_GPIO_WritePin(SW1_GPIO_Port, SW1_Pin, SET);
			HAL_GPIO_WritePin(SW2_GPIO_Port, SW2_Pin, SET);
			HAL_GPIO_WritePin(SW3_GPIO_Port, SW3_Pin, SET);
			HAL_GPIO_WritePin(SW4_GPIO_Port, SW4_Pin, RESET);

			//if(mode == 1)
				display7segLed(led_buffer[3]);

			if(flag[1] == 1){
				key_sw = 1;
				setTimer(1, (int)(0.1*count_inter));
			}
			break;
		default:
			break;
	}
}
