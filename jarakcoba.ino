int trig= 11;            
int echo= 12;            
long durasi, jarak;     

void setup() {
pinMode(trig, OUTPUT);    
pinMode(echo, INPUT);     
Serial.begin(9600);       
}

void loop() {


digitalWrite(trig, LOW);
delayMicroseconds(8);
digitalWrite(trig, HIGH);
delayMicroseconds(8);
digitalWrite(trig, LOW);
delayMicroseconds(8);

durasi= pulseIn(echo, HIGH);  
jarak= (durasi/2) / 29.1;    
Serial.println(jarak);        

}
