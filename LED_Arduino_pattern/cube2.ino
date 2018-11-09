#include <DHT.h>
#include <DHT_U.h>
//#include <SoftwareSerial.h>

//#define TX 3
//#define RX 2
#define led1 2
#define led2 3
#define led3 4
#define led4 5

//SoftwareSerial bt_test(TX,RX);

const int sensor_pin = A1;
int i=0;
float value=0;

DHT my_sensor(sensor_pin,DHT11);

void setup() {
  //put your setup code here, to run once:
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
  
  Serial.begin(9600);
  //bt_test.begin(9600);
  
  my_sensor.begin();
}
//
//void motion1(){
//  
//  delay(100);
//  digitalWrite(led4,HIGH);
//
//  delay(100);
//  digitalWrite(led3,HIGH);
//
//  delay(100);
//  digitalWrite(led2,HIGH);
//
//  delay(100);
//  digitalWrite(led1,HIGH);
//
//  delay(100);
//}

void motion_moveFast(){
  digitalWrite(led4,LOW);
  digitalWrite(led1,HIGH);
  delay(50);
  digitalWrite(led1,LOW);
  digitalWrite(led3,HIGH);
  delay(50);
  digitalWrite(led3,LOW);
  digitalWrite(led2,HIGH);
  delay(50);
  digitalWrite(led2,LOW);
  digitalWrite(led4,HIGH);
  delay(50);
}

void motion_moveFast2() {
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led1,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  digitalWrite(led4,HIGH);
  delay(200);
  digitalWrite(led4,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(200);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(200);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(200);
}

void motion_moveFast3(){
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
}

void motion5(){
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
    digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
    digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
}

void motion6(){
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
   digitalWrite(led4,HIGH);
   delay(50);
   digitalWrite(led4,LOW);
   delay(50);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
   digitalWrite(led3,HIGH);
   delay(50);
   digitalWrite(led3,LOW);
   delay(50);
    digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
   digitalWrite(led2,HIGH);
   delay(50);
   digitalWrite(led2,LOW);
   delay(50);
    digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
   digitalWrite(led1,HIGH);
   delay(50);
   digitalWrite(led1,LOW);
   delay(50);
}
//단위 1000분의 1초


void motion7() {
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
      delay(50);

   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   
   delay(50);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);

      delay(50);
       digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   
   
   
   delay(50);

      digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
      delay(50);

   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   
   delay(50);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);

      delay(50);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   
   delay(50);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);

      delay(50);
       digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);

    delay(50);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);

      delay(50);
       digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW); delay(50);
   
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);

      delay(50);
       digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
    delay(50);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);

      delay(50);
       digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW); 
   delay(50);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);

      delay(50);
       digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);


  
}
void motion_moveSlow() {
   
  delay(300);
  digitalWrite(led4,HIGH);

  delay(300);
  digitalWrite(led3,HIGH);

  delay(300);
  digitalWrite(led2,HIGH);

  delay(300);
  digitalWrite(led1,HIGH);

  delay(300);
   digitalWrite(led4,LOW);

  delay(300);
  digitalWrite(led3,LOW);

  delay(300);
  digitalWrite(led2,LOW);

  delay(300);
  digitalWrite(led1,LOW);
    
}

void motion_moveSlow2(){
 delay(300);
  digitalWrite(led1,HIGH);

  delay(300);
  digitalWrite(led2,HIGH);

  delay(300);
  digitalWrite(led3,HIGH);

  delay(300);
  digitalWrite(led4,HIGH);

  delay(300);
   digitalWrite(led1,LOW);

  delay(300);
  digitalWrite(led2,LOW);

  delay(300);
  digitalWrite(led3,LOW);

  delay(300);
  digitalWrite(led4,LOW);
  
}
void motion_moveSlow3() {
  delay(300);
  digitalWrite(led1,HIGH);

  delay(300);
  digitalWrite(led2,HIGH);

  delay(300);
  digitalWrite(led3,HIGH);

  delay(300);
  digitalWrite(led4,HIGH);

  delay(300);
   digitalWrite(led4,LOW);

  delay(300);
  digitalWrite(led3,LOW);

  delay(300);
  digitalWrite(led2,LOW);

  delay(300);
  digitalWrite(led1,LOW);

  
}
void loop() {
  
  // put your main code here, to run repeatedly:
  
  //delay(5000);3
  float temp = 0;
  float t = my_sensor.readTemperature();


  if(!isnan(t)){
    
    value = value+t;
    //Serial.println(t);
    //Serial.println(value);
    temp=value;
    //Serial.println(temp);
    i++;
    temp = temp/i;
    //Serial.println(temp);
    if(i%5==0){
    Serial.println(temp);
    }
    
     if(temp>=20.4&&temp<20.6){
      motion_moveFast();
     }else if(temp>=20.6&&temp<20.8){
      motion_moveFast2();
     }else if(temp>=20.8&&temp<21){
      motion_moveFast3();
     }else if(temp>=21.0&&temp<21.2){
      motion5();
     }else if(temp>=21.2&&temp<21.4){
      motion6();
     }else if(temp>=21.4){
      motion7();
     }else if(temp<20.4&&temp>=20.2){
      motion_moveSlow();
     }else if(temp<20.2&&temp>=20){
      motion_moveSlow2();
     }else if(temp<20){
      motion_moveSlow3();
     }
  }
   delay(1000);
 


}
