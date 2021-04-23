实验器材:
	STM32F469NI Discovery开发板
	
实验目的:
	学习GPIO作为输出的使用
	
硬件资源:
(To light a LED a low logic state 0 should be written inthe corresponding GPIO)
	1,LED1-PG6
	2,LED2-PD4
	3,LED3-PD5
	4,LED4-PK3
	
实验现象:
	本实验通过代码控制开发板上的两个LED：LED1和LED2交替闪烁，实现类似跑马灯的效果 
	
注意事项:
	delay.c中由于主频从168M改为180M，修改增加了浮点数作为1us计数值，使延时更加精确。