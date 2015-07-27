//LED pin number is 2.

int led = 2; // pin number setting.
int state = 0;

void setup(){
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop(){
    if(Serial.available()){
        int state = Serial.parseInt();
    }
    if(state){
        digitalWrite(led,HIGH);
    }
    else{
        digitalWrite(led,LOW);
    }
}
