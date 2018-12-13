
#ifndef HAL_MOTOR
#define	HAL_MOTOR

#define FWD 0
#define BWD 1

void vMotorInit();

void vSetMotorDir(T_U8 u8Dir);
/* Seteaza directia motorului */
void vSetMotorSpeed(T_U8 u8Speed);
/* Seteaza viteza motorului */
void vSetMotorDirSpeed(T_U8 u8Dir , T_U8 u8Speed);
/* Seteaza atat directia motorului cat si viteza acestuia */


#endif