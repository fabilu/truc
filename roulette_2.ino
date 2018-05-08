#include <Gamebuino-Meta.h>

int x=0;
int y=1;
int z=2;
int a=0;
int b=0;
int c=0;
int argent=100;

void setup() {
   gb.begin();
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
}

else{
x=random(9);
y=random(x);
z=random(y);
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
}

}



