#define led1 12
#define led2 11
#define led3 10
#define led4 9
#define led5 8
#define ldr 13
#define engine A5

void setup () {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(ldr, INPUT);
    pinMode(engine, INPUT);
}

void loop () {
    if((digitalRead(ldr) == 1) && (analogRead(engine) != 0)) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
    }
    else {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
    }
}
