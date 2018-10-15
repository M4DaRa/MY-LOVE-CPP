// I was here today
// Me Too

#include<graphics.h>
#include<conio.h>
 
int main() //if you dont give a return type it gives a warning while compiling
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   putpixel(25, 25, RED);
 
   getch();
   closegraph();
   return 0;
}
