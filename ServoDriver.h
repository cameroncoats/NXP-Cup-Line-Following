// Glen Dale / Group 3
// EN0627 / NXP Car
// 
// Servo Driver using Timer 1

#ifndef ServoDriver
  #define ServoDriver
	
 #define STEERING_FACTOR 8
 #define CENTER_POSITION 4050
void initServo(void);
void setSteeringAngle(int);
void setCenter(void);
void TPM1_IRQHandler(void);
extern signed short getLineOffset(void);

extern unsigned short int POT0_Value;

#endif
