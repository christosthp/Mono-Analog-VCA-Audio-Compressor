#define led_0 3 
#define led_1 4
#define led_2 5
#define led_3 6 
#define led_4 7 
#define led_5 8 
#define led_6 9 
#define led_7 10 
#define led_8 11 
#define led_9 12
#define led_10 13


void setup(){

  Serial.begin(9600);
  pinMode(led_0,OUTPUT);
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  pinMode(led_4,OUTPUT);
  pinMode(led_5,OUTPUT);
  pinMode(led_6,OUTPUT);
  pinMode(led_7,OUTPUT);
  pinMode(led_8,OUTPUT);
  pinMode(led_9,OUTPUT);
  pinMode(led_10,OUTPUT);

}


void loop(){

  float CV = ((float)analogRead(A0)) * (5.0 / 1024.0) ;
  float PEAKING = ((float)analogRead(A1)) * (5.0 / 1024.0) ;


  //Serial.println(CV,3);

  Serial.println(PEAKING,3);


  if(CV>=0.02){
    digitalWrite(led_0,HIGH);
  }
  else{digitalWrite(led_0,LOW);}

  if(CV>=0.080){
    digitalWrite(led_1,HIGH);
  }
  else{digitalWrite(led_1,LOW);}

  if(CV>=0.160){
    digitalWrite(led_2,HIGH);
  }
  else{digitalWrite(led_2,LOW);}

  if(CV>=0.240){
    digitalWrite(led_3,HIGH);
  }
  else{digitalWrite(led_3,LOW);}

  if(CV>=0.320){
    digitalWrite(led_4,HIGH);
  }
  else{digitalWrite(led_4,LOW);}

  if(CV>=0.400){
    digitalWrite(led_5,HIGH);
  }
  else{digitalWrite(led_5,LOW);}

  if(CV>=0.480){
    digitalWrite(led_6,HIGH);
  }
  else{digitalWrite(led_6,LOW);}

  if(CV>=0.560){
    digitalWrite(led_7,HIGH);
  }
  else{digitalWrite(led_7,LOW);}

  if(CV>=0.640){
    digitalWrite(led_8,HIGH);
  }
  else{digitalWrite(led_8,LOW);}

  if(CV>=0.720){
    digitalWrite(led_9,HIGH);
  }
  else{digitalWrite(led_9,LOW);}

 if(PEAKING >=1.400){
    digitalWrite(led_10,HIGH);
  }
  else{digitalWrite(led_10,LOW);}


delay(50);

}