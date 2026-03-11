#include "main.h"
#include "motor_init.h"
void motor_init (void){
    GPIO_InitTypeDef motor_init_struct;
    motor_init_struct.GPIO_Mode=GPIO_Mode_Out_PP;
    motor_init_struct.GPIO_Speed=GPIO_Speed_50MHz;
    motor_init_struct.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4;
    GPIO_Init (GPIOA,&motor_init_struct);
    GPIO_WriteBit (GPIOA,GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4,Bit_RESET);
}