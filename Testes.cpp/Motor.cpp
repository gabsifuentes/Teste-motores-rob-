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

