int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;

const int buz=5; //initialization for buzzer
int ir1=8;
int ir2=9;
int ir3=10;

unsigned long t1=0;
unsigned long t2=0; // variables for time and velocity
float velocity;

int obs1=0;
int obs2=0;
int obs3=0;


void setup() 
{
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);

  pinMode(buz,OUTPUT);
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);

}


void loop(){
  obs1=digitalRead(ir1);
  obs2=digitalRead(ir2);
  obs3=digitalRead(ir3);
  
  
  // to calculate the speed of car between two IR sensors
  if(obs1>0)
  {
  t1=millis();
    
   Serial.println(t1);
    
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  
    delay(20);
   if(obs2>0){
     digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  
     delay(20);
  t2=millis();
    Serial.println(t2);
   }}
  else{
    Serial.println("NO VEHICLE");
    digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
   
    
  }
  velocity=t2-t1;
  velocity=velocity/1000;     //convert millisecond to second
  velocity=(50.0/velocity);    //v=d/t
  velocity=velocity*3600;      //multiply by seconds per hr
  velocity=velocity/1000;
  velocity=velocity/1000;      //division by meters per Km
  Serial.println(velocity);
  
  if(velocity>60 && velocity<180){
    
    tone(buz,10);               //buzzer will start beeping
    
    
    delay(20);
    
     
    
  }
  
  else{
    noTone(buz);
    delay(50);
  }

  
// end of speed detector code  
  

if(obs3==HIGH)
{
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  
}
else
{
  
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
}
