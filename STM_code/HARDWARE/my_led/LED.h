#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"

#define LED1_OFF GPIO_SetBits(GPIOE,GPIO_Pin_5);    //PA8����ߵ�ƽ
#define LED1_ON GPIO_ResetBits(GPIOE,GPIO_Pin_5);   //PA8����͵�ƽ
#define LED2_OFF GPIO_SetBits(GPIOE,GPIO_Pin_6);    //PD2����ߵ�ƽ
#define LED2_ON GPIO_ResetBits(GPIOE,GPIO_Pin_6);   //PD2����͵�ƽ


void LED_init(void);   /* LED �˿ڳ�ʼ�� */

#endif /* __LED_H */

