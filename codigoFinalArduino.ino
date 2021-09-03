#define led1 12 //Define a porta do LED 1
#define led2 11 //Define a porta do LED 2
#define led3 10 //Define a porta do LED 3
#define led4 9 //Define a porta do LED 4
#define led5 8 //Define a porta do LED 5
#define ldr 13 //Define a porta do módulo LDR
#define engine A5 //Define a porta analógica do motor

void setup () {
    pinMode(led1, OUTPUT); //Porta do LED 1 é uma saída
    pinMode(led2, OUTPUT); //Porta do LED 2 é uma saída
    pinMode(led3, OUTPUT); //Porta do LED 3 é uma saída
    pinMode(led4, OUTPUT); //Porta do LED 4 é uma saída
    pinMode(led5, OUTPUT); //Porta do LED 5 é uma saída
    pinMode(ldr, INPUT); //Porta do módulo LDR é uma entrada
    pinMode(engine, INPUT); //Porta analógica do motor é uma entrada
}

void loop () {
    /*Estrutura de decisão:
    Se, e somente se houver energia gerada no motor DC e o módulo LDR acusar
    que está escuro, os leds acendem*/
    if((digitalRead(ldr) == 1) && (analogRead(engine) != 0)) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
    }
    /*Em caso contrário, apagam*/
    else {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
    }
}
