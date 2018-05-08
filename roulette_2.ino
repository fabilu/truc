#include <Gamebuino-Meta.h>

int x=0;
int y=0;
int z=0;
int a=0;
int b=0;
int c=0;
int argent=100;
const int buttonPin = 2; 
const int ledPin =  13;

void setup() {
   gb.begin();
   srand(9);
   pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

while(!gb.update());
  gb.display.clear();

gb.display.setColor(BLUE);
gb.display.println("MACHINE A SOUS");
gb.display.setFontSize(2);

if (gb.buttons.pressed(BUTTON_UP))
  {a=x;
  b=y;
  c=z;
gb.display.print(a);
gb.display.print(b);
gb.display.println(c);
argent=argent -1;
gb.sound.playCancel();
if (x == y && y == z) { argent += 10;
gb.sound.playOK();
digitalWrite(ledPin, HIGH); }

else if (x == y || x == z || y == z) { argent += 5;
gb.sound.playOK();
digitalWrite(ledPin, HIGH); }
}

else if (argent>0){
  
x=random(9);
y=random(9);
z=random(9);
gb.display.print(x);
gb.display.print(y);
gb.display.println(z);
gb.display.setFontSize(1);
gb.display.setColor(YELLOW);
gb.display.print("ARGENT :");
gb.display.println(argent);
gb.display.setFontSize(2);
gb.display.setColor(RED);
gb.display.print(a);
gb.display.print(b);
gb.display.println(c);
 digitalWrite(ledPin, LOW);
}

if (gb.buttons.pressed(BUTTON_MENU))
{argent=100;
}
}
