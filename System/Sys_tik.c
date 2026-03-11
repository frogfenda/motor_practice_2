#include "main.h"
#include "Sys_tik.h"
volatile static uint32_t Time_rn = 0;
volatile static uint32_t Time_delay;
void Sys_tik_init(void)
{
    SysTick_Config(SystemCoreClock / 1000);
}
void Time_move(void)
{
    Time_rn++;
}
void Delay_time_move(void)
{
    if (Time_delay != 0)
        Time_delay--;
}
uint32_t Get_tik(void)
{
    return Time_rn;
}
void delay_ms(uint32_t ms)
{
    Time_delay = ms;
    while (Time_delay != 0)
        ;
}