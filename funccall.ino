int red = D1;
int green = D2;
int blue = D3;


void setup()
{


   pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);
   
   Particle.function("led",ledToggle);

   digitalWrite(red, LOW);
   digitalWrite(green, LOW);
   digitalWrite(blue, LOW);

}




void loop()
{

}


int ledToggle(String command){
    

    if (command=="redon") {
        digitalWrite(red,HIGH);
        digitalWrite(green,LOW);
        digitalWrite(blue,LOW);
        return 1;
    }
    else if (command=="greenon") {
        digitalWrite(red,LOW);
        digitalWrite(green,HIGH);
        digitalWrite(blue,LOW);
        return 0;
    }
    else if (command=="blueon") {
        digitalWrite(red,LOW);
        digitalWrite(green,LOW);
        digitalWrite(blue,HIGH);
        return 0;
    }
    else {
        return -1;
    }
}