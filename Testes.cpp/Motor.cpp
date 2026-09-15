//motor a
#define in1 = 5;
#define in2 = 6;
//motor b
#define in3 = 9;
#define in4 = 10;
//velocidade
#define vel = 255;

void setup(){
    Serial.begin(9600);
    //pinos motores
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    
}

void loop(){

}

// Funções de movimento

void motorA_h(){
    analogWrite(in1, vel);
    digitalWrite(in2, LOW);
}

void motorA_antihorario()){
    digitalWrite(in1, LOW);
    analogWrite(in2, vel);
}

void motorB_horario(){
    analogWrite(in3, vel);
    digitalWrite(in4, LOW);
}

void motorB_antihorario()){
    digitalWrite(in3, LOW);
    analogWrite(in4 vel);
}

void AB_parados(){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}

void AB_horario(){
    analogWrite(in1, vel);
    digitalWrite(in2, LOW);
    analogWrite(in3, vel);
    digitalWrite(in4, LOW);
}
