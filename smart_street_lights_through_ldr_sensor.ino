int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;

int ir1=8;
int ir2=9;
int ir3=10;



int obs1=0;
int obs2=0;
int obs3=0;


void setup() 
{
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);


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

if(obs1==HIGH)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
}
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}

if(obs2==HIGH)
{
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
}
else
{
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
}

if(obs3==HIGH)
{
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
}
else
{
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
}
