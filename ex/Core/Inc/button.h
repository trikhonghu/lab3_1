/*
 * button.h
 *
 *  Created on: Nov 7, 2023
 *      Author: Windows
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE 	GPIO_PIN_SET
#define PRESSED_STATE 	GPIO_PIN_RESET

extern uint8_t button_flag[3];
extern uint16_t buttonArray[3];

uint8_t isButtonPressed(uint8_t index);
void getKeyInput(void);


#endif /* INC_BUTTON_H_ */
