//motor a
#define in1 5
#define in2 6
//motor b
#define in3 9
#define in4 10
//velocidade
#define vel 255


void setup(){
    Serial.begin(9600);
    //pinos motores
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    
}

// Funções de movimento

void motorA_h(){
    analogWrite(in1, vel);
    digitalWrite(in2, LOW);
}

void motorA_antihorario(){
    digitalWrite(in1, LOW);
    analogWrite(in2, vel);
}

void motorB_horario(){
    analogWrite(in3, vel);
    digitalWrite(in4, LOW);
}

void motorB_antihorario(){
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

void AB_antihorario(){
    analogWrite(in1, LOW);
    digitalWrite(in2, vel);
    analogWrite(in3, LOW);
    digitalWrite(in4, vel);
}

//teste pwm
void loop(){

    //testes individuais
    motorA_h(150);
    delay(500);
    
    motorA_antihorario(150);
    delay(500);

    motorB_horario(150);
    delay(500);

    motorB_antihorario(150);
    delay(500);

    //incementrando velocidade nos dois motores de 0 até 255 (frente)
     for(int v = 0; v <= 255; v+= 25){
        Serial.println(v);

        AB_horario(v); 
        delay(500);
    }

    //trás
     for(int v = 0; v <= 255; v+= 25){
        Serial.println(v);

        AB_antihorario(v); 
        delay(500);
    }

    delay(1000);

    //parando
    AB_parados();
    delay(500);
}