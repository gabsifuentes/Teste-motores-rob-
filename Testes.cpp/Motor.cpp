// Motor a
#define in1 5
#define in2 6
// Motor b
#define in3 9
#define in4 10

//---------- Funções usadas ----------

void Menu();
void processarComando(String cmd);
void testePWM();
void motorA_horario();
void motorA_antihorario();
void motorB_horario();
void motorB_antihorario();
void pararMotores();
void motoresHorario();


//---------- Execução ----------

void setup(){
    Serial.begin(9600);
    // Pinos motores
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    // Pino PWM
    int vel = 255;

    pararMotores();
    
}

void loop(){

    Menu();
    // Ler entrada
    if (Serial.available()) {
    String entrada = Serial.readStringUntil('\n');
    entrada.trim();
    processarComando(entrada);
  }
}

//---------- Menu ----------

void Menu(){

    Serial.println("   =======  Menu  =======   ");
    Serial.println("1 - Motor A horario");
    Serial.println("2 - Motor A anti-horario");
    Serial.println("3 - Motor B horario");
    Serial.println("4 - Motor B anti-horario");
    Serial.println("5 - Parar motores");
    Serial.println("6 - Motores horario");
    Serial.println("7 - Testar PWM");
    Serial.println("   ======================    ");
}

//---------- Funções de movimento ----------

void motorA_horario(){

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
void pararMotores(){

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}
void motoresHorario(){

    analogWrite(in1, vel);
    digitalWrite(in2, LOW);
    analogWrite(in3, vel);
    digitalWrite(in4, LOW);
}

//---------- PWM ----------

void testePWM(){

    Serial.println("Digite a velocidade (0-255):");
    while (!Serial.available());
    int vel = Serial.readStringUntil('\n').toInt();
    int vel = constrain(vel, 0, 255);

    Serial.println("Velocidade redefinida para: ");
    Serial.print(vel);
}

//---------- Processamento ----------

void processarComando(String cmd){

    switch(cmd){

        case "1": motorA_horario();
                  break;

        case "2": motorA_antihorario();
                  break;

        case "3": motorB_horario();
                  break;

        case "4": motorB_antihorario();
                  break;

        case "5": pararMotores();
                  break;

        case "6": motoresHorario();
                  break;

        case "7": testePWM();
                  break;

        default: Serial.println("Comando inválido.");
                 break;
    }
}

//---------- Fim :D ----------