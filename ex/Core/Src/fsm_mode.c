/*
 * fsm_mode.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Windows
 */

#include "fsm_mode.h"

void fsm_mode(void){
	switch (mode) {
		case 1:
			fsm_automatic_run1();
			fsm_automatic_run2();
			break;
		case 2:
			if(flag[3] == 1){
				HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
				HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);

				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);

				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);

				setTimer(3, (int)(0.5*count_inter));
			}

			if(temp[1] || temp[2])
				temp[1] = temp[2] = 0; //free temp

			if(!temp[0])
				temp[0] = count_red;

			led_buffer[0] = 0;
			led_buffer[1] = 2;

			led_buffer[2] = temp[0]/10;
			led_buffer[3] = temp[0]%10;

			if(isButtonPressed(1)){
				temp[0]++;
				if(temp[0] > 99)
					temp[0] = 1;
			}
			if(isButtonPressed(2)){
				count_red = temp[0];
				mode = 1;
				status[0] = INIT;
				status[1] = INIT;
			}
			break;
		case 3:
			if(flag[3] == 1){
				HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
				HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);

				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);

				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);

				setTimer(3, (int)(0.5*count_inter));
			}

			if(temp[0] || temp[2])
				temp[0] = temp[2] = 0;

			if(!temp[1])
				temp[1] = count_yellow;

			led_buffer[0] = 0;
			led_buffer[1] = 3;

			led_buffer[2] = temp[1]/10;
			led_buffer[3] = temp[1]%10;

			if(isButtonPressed(1)){
				temp[1]++;
				if(temp[1] > 99 || temp[1] + count_green > count_red)
					temp[1] = 1;
			}
			if(isButtonPressed(2)){
				count_yellow = temp[1];
				mode = 1;
				status[0] = INIT;
				status[1] = INIT;
			}
			break;
		case 4:
			if(flag[3] == 1){
				HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
				HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);

				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);

				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED_Pin, SET);

				setTimer(3, (int)(0.5*count_inter));
			}

			if(temp[0] || temp[1])
				temp[0] = temp[1] =0;

			if(!temp[2])
				temp[2] = count_green;

			led_buffer[0] = 0;
			led_buffer[1] = 4;

			led_buffer[2] = temp[2]/10;
			led_buffer[3] = temp[2]%10;

			if(isButtonPressed(1)){
				temp[2]++;
				if(temp[2] > 99 || temp[2] + count_yellow > count_red)
					temp[2] = 1;
			}
			if(isButtonPressed(2)){
				count_green = temp[2];
				mode = 1;
				status[0] = INIT;
				status[1] = INIT;
			}
			break;

		default:
			break;
	}
}


