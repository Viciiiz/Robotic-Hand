#include <Servo.h>

int initial = 145;
int initial2 = 125;
int initial3 = 140;
int fin = 55;
int fin2 = 55;
int fin3 = 55;

Servo myPointer;
Servo myPointer2;
Servo myPointer3;
Servo myPointer4;
Servo myPointer5;
Servo myPointer6;
Servo myPointer7;
Servo myPointer8;
Servo myPointer9;
Servo myPointer10;
Servo myPointer11;
Servo myPointer12;
Servo myPointer13;
Servo myPointer14;
Servo myPointer15;

  void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  myPointer.attach(12);
  myPointer2.attach(2);
  myPointer3.attach(3);
  myPointer4.attach(4);
  myPointer5.attach(5);
  myPointer6.attach(6);
  myPointer7.attach(7);
  myPointer8.attach(8);
  myPointer9.attach(9);
  myPointer10.attach(10);
  myPointer11.attach(11);
  myPointer12.attach(22);
  myPointer13.attach(24);
  myPointer14.attach(26);
  myPointer15.attach(28);
 

  
 // myPointer.write(45);  // right 40 - 10 - 25 - 7 
 // myPointer2.write(50);
 // myPointer3.write(10);
//  while(Serial.available()==0){}
}

void loop() {
  // put your main code here, to run repeatedly: 
  ///////////////////////////////////////////////////////// test
  myPointer4.write(70); //70 - 120
  myPointer5.write(30); //30 - 70
  myPointer6.write(115);  //115 - 150
  
  ///////////////////////////////////////////////////////
   delay(2000);

  for (int i = 0; i<50; i++){           //1 A
    myPointer.write(50+i); //+2*i);
    delay(5);
  }
        for (int i = 0; i<50; i++){           //1 B
          myPointer4.write(70+i); //+2*i);
          delay(5);
        }
  for (int i = 0; i<45; i++){           //2 A
    myPointer2.write(55+i); //+2*i);
    delay(5);
  }
        for (int i = 0; i<40; i++){           //2 B
          myPointer5.write(30+i); //+2*i);
          delay(5);
        }
  for (int i = 0; i<40; i++){            //3 A
    myPointer3.write(20+i); //+1.5*i);
    delay(5);
  }
        for (int i = 0; i<35; i++){           //3 B
          myPointer6.write(115+i); //+2*i);
          delay(5);
        }
   delay(2000);
   
////////////////////////////////////////////
        for (int i = 0; i<50; i++){           //1 B
          myPointer4.write(120-i); //+2*i);
          delay(5);
        }
  for (int i = 0; i<50; i++){           //1 A
    myPointer.write(100-i); //+2*i);
    delay(5);
  }
        for (int i = 0; i<40; i++){           //2 B
          myPointer5.write(70-i); //+2*i);
          delay(5);
        }
  for (int i = 0; i<45; i++){           //2 A
    myPointer2.write(100-i); //+2*i);
    delay(5);
  }
        for (int i = 0; i<35; i++){           //3 B
          myPointer6.write(150-i); //+2*i);
          delay(5);
        }
  for (int i = 0; i<40; i++){           //3 A
    myPointer3.write(60-i); //+1.5*i);
    delay(5);
  }
//}
 

  ////////////////////////////////////////////


 
  myPointer.write(100); //-2*i);
  delay(100);
  myPointer2.write(100);  //-2*i);
  delay(100);
  myPointer3.write(60); //-1.5*i);
//}
  delay(2000);
  
}
