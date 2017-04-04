#include 



Servo RHip1;  Servo RHip2;

Servo RThigh;

Servo RKnee;

Servo RAnkle1;

Servo RAnkle2;



Servo LHip1;  Servo LHip2;

Servo LThigh;

Servo LKnee;

Servo LAnkle1;

Servo LAnkle2;



// Lean back

//LThigh.write(LThigh.read()-5);

//  RThigh.write(RThigh.read()+5);



int RHip1Center = 90;  int RHip2Center = 90;

int RThighCenter = 75;

int RKneeCenter = 110;

int RAnkle1Center = 100;

int RAnkle2Center = 60;



int LHip1Center = 100;  int LHip2Center = 40;

int LThighCenter = 50;

int LKneeCenter = 70;

int LAnkle1Center = 90;

int LAnkle2Center = 70;



int walking = 0;



int d = 100;



void setup()

{



Serial.begin(9600);

RHip1.attach(13);   RHip2.attach(12);   RThigh.attach(11);

RKnee.attach(10);   RAnkle1.attach(9);   RAnkle2.attach(8);

LHip1.attach(2);   LHip2.attach(3);   LThigh.attach(4);

LKnee.attach(5);   LAnkle1.attach(6);   LAnkle2.attach(7);

}



void loop()

{



//stand();

//crouch();

//delay(15000);  //  if (walking == 0) {

//StandRightForward();

//delay(15000);       //StandLeftForward();

//delay(15000);       //stand();

//      delay(5000);  //  }



//swayright();

//swayleft();

StandRightForward();

//delay(5000);   stepleft();

//delay(5000);  //  walk();

}



void stepleft()

{

StandRightForward();

LeanBack();

LeanRight();

LiftRightHip();

SpreadLegs();

// Low batt, spread legs more

SpreadLegs();

LeanRight();

LeanRight();

LeanRight();



LiftLeftFoot();

LiftLeftHip();

LiftLeftHip();

SpreadLegs();



LiftLeftFoot();

//LeanBack();

//LeanBack();



LeftLegForward();

LeftLegForward();

LeftLegForward();



// Does this cause more speed and cause the inbalance?

StretchRightKnee();

DownLeftFoot();

LeanBack();

LeftToeUp();

DownLeftFoot();



LeftToeUp();

LeftToeUp();

RightToeUp();



LeanLeft();

LeftToeUp();

RightToeUp();

LeanLeft();

LiftRightHip();

LiftRightHip();

DownLeftFoot();

LeanBack();



StandLeftForward();

//LeanBack();

//LeanBack();



LeanLeft();

LiftLeftHip();

//Low battery, turn on this:

//SpreadLegs();

SpreadLegs();

LeanLeft();

LeanLeft();



LiftRightFoot();

LiftRightHip();

LiftRightHip();

SpreadLegs();



LiftRightFoot();

LeanBack();

LeanBack();



RightLegForward();

RightLegForward();

RightLegForward();

RightLegForward();



StretchLeftKnee();



DownRightFoot();

LeanBack();



RightToeUp();

DownRightFoot();



RightToeUp();

RightToeUp();

LeftToeUp();

LeanRight();

LeftToeUp();

RightToeUp();

LeanRight();

LiftLeftHip();

LiftLeftHip();

DownRightFoot();

LeanBack();

StandRightForward();



}



/*

void swayright()

{



LeanRight();

LiftRightHip();

SpreadLegs();

LeanRight();

//LeanRight();

LeanRight();

LeanRight();



delay(5000);

LeanLeft();

LeanLeft();

LiftLeftHip();



}



void swayleft()

{



LeanLeft();

LiftLeftHip();

SpreadLegs();

LeanLeft();

//LeanLeft();

LeanLeft();

LeanLeft();



delay(5000);

LeanRight();

LeanRight();

LiftRightHip();   stand();



}

*/



void stand()

{

Serial.println(“STAND”);

RHip1.write(RHip1Center);     RHip2.write(RHip2Center);     RThigh.write(RThighCenter);

RKnee.write(RKneeCenter);     RAnkle1.write(RAnkle1Center);     RAnkle2.write(RAnkle2Center);

LHip1.write(LHip1Center);     LHip2.write(LHip2Center);     LThigh.write(LThighCenter);

LKnee.write(LKneeCenter);     LAnkle1.write(LAnkle1Center);     LAnkle2.write(LAnkle2Center);

delay(d);  }



void crouch()

{



Serial.println(“crouch”);

RThigh.write(RThigh.read()-10);

RKnee.write(RKnee.read()-20);   RAnkle1.write(RAnkle1.read()-10);

LThigh.write(LThigh.read()+10);

LKnee.write(LKnee.read()+20);   LAnkle1.write(LAnkle1.read()+10);

delay(d);

}



void StandRightForward()

{

Serial.println(“StandRightForward”);

RHip1.write(RHip1Center);     RHip2.write(RHip2Center);     RThigh.write(RThighCenter);

RKnee.write(RKneeCenter);     RAnkle1.write(RAnkle1Center);     RAnkle2.write(RAnkle2Center);

LHip1.write(LHip1Center);     LHip2.write(LHip2Center);     LThigh.write(LThighCenter-20);

LKnee.write(LKneeCenter);     LAnkle1.write(LAnkle1Center+20);     LAnkle2.write(LAnkle2Center);

delay(d);  }



void StandLeftForward()

{

Serial.println(“StandLeftForward”);

RHip1.write(RHip1Center);     RHip2.write(RHip2Center);     RThigh.write(RThighCenter+20);

RKnee.write(RKneeCenter);     RAnkle1.write(RAnkle1Center-20);     RAnkle2.write(RAnkle2Center);

LHip1.write(LHip1Center);     LHip2.write(LHip2Center);     LThigh.write(LThighCenter);

LKnee.write(LKneeCenter);     LAnkle1.write(LAnkle1Center);     LAnkle2.write(LAnkle2Center);

delay(d);  }



void ResetHip()

{

Serial.println(“ResetHip”);

LHip2.write(LHip2.read()+5);   RHip2.write(RHip2.read()+5);   delay(d);                       }



void LiftLeftHip()

{

Serial.println(“LiftLeftHip”);

LHip2.write(RHip1Center);   LHip2.write(RHip2Center);   LHip2.write(LHip1Center);   LHip2.write(LHip2Center);   delay(d);                       }



void LiftRightHip()

{

Serial.println(“LiftRightHip”);

LHip2.write(LHip2.read()-5);   RHip2.write(RHip2.read()-5);   delay(d);                       }



void SpreadLegs()

{

Serial.println(“SpreadLegs”);

LHip2.write(LHip2.read()-5);   RHip2.write(RHip2.read()+5);   delay(d);                       }



void CollectLegs()

{

Serial.println(“CollectLegs”);

LHip2.write(LHip2.read()+5);   RHip2.write(RHip2.read()-5);   delay(d);                       }



void LeanLeft() {

Serial.println(“LeanLeft”);

RAnkle2.write(RAnkle2.read()-5);

LAnkle2.write(LAnkle2.read()-5);

delay(d);                       }



void LeanRight() {

Serial.println(“LeanRight”);

RAnkle2.write(RAnkle2.read()+5);

LAnkle2.write(LAnkle2.read()+5);

delay(d);                       }



void LeftLegForward() {

Serial.println(“LeftFootForward”);

LThigh.write(LThigh.read()+10);

LKnee.write(LKnee.read()-10);   LAnkle1.write(LAnkle1.read()-10);

delay(d);                       }



void LeftFootForward() {

Serial.println(“LeftFootForward”);

//LThigh.write(LThigh.read()+10);

LKnee.write(LKnee.read()-10);   LAnkle1.write(LAnkle1.read()-5);

delay(d);                       }



void LeanBack()

{

Serial.println(“LeanBack”);

LThigh.write(LThigh.read()-5);

RThigh.write(RThigh.read()+5);

delay(d);  }



void LeanForward()

{

Serial.println(“LeanBack”);

LThigh.write(LThigh.read()+10);

RThigh.write(RThigh.read()-10);

delay(d);  }



void LeftThighBackward() {

Serial.println(“LeftFootBack”);

LThigh.write(LThigh.read()-10);

delay(d);                       }



void LeftThighForward() {

Serial.println(“LeftThighForward”);

LThigh.write(LThigh.read()+10);

delay(d);                       }



void StretchLeftKnee() {

Serial.println(“StretchLeftKnee”);

LKnee.write(LKnee.read()-5);   delay(d);                       }



void LiftLeftFoot() {

Serial.println(“LiftLeftFoot”);

LThigh.write(LThigh.read()+10);

LKnee.write(LKnee.read()+10);     LAnkle1.write(LAnkle1.read()-10);

delay(d);                       }



void DownLeftFoot() {

Serial.println(“DownLeftFoot”);

LThigh.write(LThigh.read()-10);

LKnee.write(LKnee.read()-5);     LAnkle1.write(LAnkle1.read()-5);

delay(d);                       }



void RightLegForward() {

Serial.println(“RightLegForward”);

RThigh.write(RThigh.read()-10);

RKnee.write(RKnee.read()+10);     RAnkle1.write(RAnkle1.read()+10);

delay(d);                       }



void RightFootForward() {

Serial.println(“RightFootForward”);

//RThigh.write(RThigh.read()-10);

RKnee.write(RKnee.read()+10);     RAnkle1.write(RAnkle1.read()+5);

delay(d);                       }



void RightThighBackward()

{

Serial.println(“RightFootForward”);

RThigh.write(RThigh.read()+10);   delay(d);    }



void RightThighForward()

{

Serial.println(“RightFootForward”);

RThigh.write(RThigh.read()-10);   delay(d);  }



void RightToeUp()

{

Serial.println(“RightAnkleForward”);

RAnkle1.write(RAnkle1.read()-5);

delay(d);                       }



void RightToeDown()

{

Serial.println(“RightAnkleBackward”);

RAnkle1.write(RAnkle1.read()+5);

delay(d);                       }



void ResetLeftAnkle()

{

Serial.println(“ResetLeftAnkle”);

LAnkle1.write(RAnkle1Center);

LAnkle1.write(RAnkle2Center);

delay(d);                       }



void ResetRightAnkle()

{

Serial.println(“ResetLeftAnkle”);

LAnkle1.write(RAnkle1Center);

LAnkle1.write(RAnkle2Center);

delay(d);                       }



void LeftToeUp()

{

Serial.println(“LeftAnkleForward”);

LAnkle1.write(LAnkle1.read()+5);

delay(d);                       }



void LeftToeDown()

{

Serial.println(“LeftAnkleBackward”);

LAnkle1.write(LAnkle1.read()-5);

delay(d);                       }



void StretchRightKnee() {

Serial.println(“StretchRightKnee”);

RKnee.write(RKnee.read()+5);   delay(d);                       }



void LiftRightFoot() {

Serial.println(“LiftRightFoot”);

RThigh.write(RThigh.read()-10);

RKnee.write(RKnee.read()-10);   RAnkle1.write(RAnkle1.read()+10);

delay(d);                       }



void DownRightFoot() {

Serial.println(“DownRightFoot”);

RThigh.write(RThigh.read()+10);

RKnee.write(RKnee.read()+5);   RAnkle1.write(RAnkle1.read()+5);

delay(d);                       }
