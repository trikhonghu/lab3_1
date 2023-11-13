/*
 * button.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Windows
 */

#include "button.h"

uint8_t button_flag[3] = {0};
uint16_t buttonArray[3] = {BUTTON_1_Pin, BUTTON_2_Pin, BUTTON_3_Pin};

uint8_t keyReg0[3] = {NORMAL_STATE};
uint8_t keyReg1[3] = {NORMAL_STATE};
uint8_t keyReg2[3] = {NORMAL_STATE};

uint8_t keyReg3[3] = {NORMAL_STATE};
uint8_t timerForKeyPress = 200;

void subKeyProcess(uint8_t index){
	button_flag[index] = 1;
}

void getKeyInput(void){
	for(int i = 0; i<3; i++){
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		keyReg2[i] = HAL_GPIO_ReadPin(GPIOB, buttonArray[i]);
		if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i])){
			if(keyReg3[i] != keyReg2[i]){//normal press
				keyReg3[i] = keyReg2[i];
				if(keyReg2[i] == PRESSED_STATE){
					//TODO
					subKeyProcess(i);
					timerForKeyPress = 2*count_inter;
				}
			}else{
				timerForKeyPress--;
				if(timerForKeyPress <= 0){
					//TODO
					keyReg3[i] = NORMAL_STATE;
					/*if(keyReg2[0] == PRESSED_STATE)
						subKeyProcess();
					timerForKeyPress = 200;*/
				}
			}
		}
	}
}

uint8_t isButtonPressed(uint8_t index){
	if(button_flag[index]){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}
