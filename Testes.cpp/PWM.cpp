#define PWM 3

void setup(){
    pinMode(PWM, OUTPUT);
}

void loop(){

    //pra acelerar o motor gradualmente
    for(int pwm = 0; pwm <= 255; pwm++){
        analogWrite(PWM, pwm);
        delay(30);
    }

    delay(1000);

    //desacelera gradualmente
    for(int pwm = 0; pwm <= 255; pwm--){
        analogWrite(PWM, pwm);
        delay(30);
    }

    delay(1000);
}