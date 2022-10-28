//**********************************************************************************
/*
 * Filename    : Small Fan
 * Description : Fan clockwise rotation,stop,counterclockwise rotation,stop,cycle.
 * Auther      : http//www.keyestudio.com
*/
#define IN1 2  // the IN1 pin of the L293D
#define IN2 15  //the IN2 pin of the L293D
#define ENA_pwm 0  //the ENA-pwm pin of the L293D
void setup()
{
pinMode(IN1,OUTPUT); //set N1 to OUTPUT
pinMode(IN2,OUTPUT); //set N2 to OUTPUT
ledcSetup(2, 1200, 8);//Set LEDC channel to 2,frequency to 1200,PWM resolution to 8,duty cycle to 256.
ledcAttachPin(0, 2); //Bind LEDC channel 2 to the specified ENA_pwm pin GPIo0 for output.
}
void loop()
{
//rotate clockwise for 5s
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
ledcWrite(2, 250); //LEDC channel 2 is bound to the specified ENA_pwm output PWM value of 250.
delay(5000);
//stop for 2s 
ledcWrite(2, 0); //LEDC channel 2 is bound to the specified ENA_pwm output PWM value of 0.
delay(2000);
//rotate anticlockwise for 5s
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
ledcWrite(2, 250); //LEDC channel 2 is bound to the specified ENA_pwm output PWM value of 250.
delay(5000);
//stop for 2s
ledcWrite(2, 0); //LEDC channel 2 is bound to the specified ENA_pwm output PWM value of 0.
delay(2000);
}
//********************************************************************************
