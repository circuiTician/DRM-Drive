#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7

void setup() 
{

  Serial.begin(9600);
  
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);

  digitalWrite(IN1,0);
  digitalWrite(IN2,0);
  digitalWrite(IN3,0);
  digitalWrite(IN4,0);

  C1S(); 
  C2S();
  delay(1000);

}

void loop() 
{
 
 C1F();
 delay(1500);
 C1S(); 
 delay(1500);
 C1R();
 delay(1500);
 C1S();
 delay(1500);
 C2F();
 delay(1500);
 C2S(); 
 delay(1500);
 C2R();
 delay(1500);
 C2S();
 delay(1500);
 
}

void C1S() { digitalWrite(IN1,0); digitalWrite(IN2,0); } // command for stop the motor of channel 1

void C1F() { digitalWrite(IN1,0); digitalWrite(IN2,1); } // command for drive the motor of channel 1 in Forward

void C1R() { digitalWrite(IN1,1); digitalWrite(IN2,0); } // command for drive the motor of channel 1 in Reverse


void C2S() { digitalWrite(IN3,0); digitalWrite(IN4,0); } // command for stop the motor of channel 2

void C2F() { digitalWrite(IN3,0); digitalWrite(IN4,1); } // command for drive the motor of channel 2 in Forward

void C2R() { digitalWrite(IN3,1); digitalWrite(IN4,0); } // command for drive the motor of channel 2 in Reverse
