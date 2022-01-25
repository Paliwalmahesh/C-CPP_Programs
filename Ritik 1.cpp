
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 float x1,y1,x2,y2,dx,dy,xinc,yinc,step,p;
 int i,choice=1;
 char a;
 while(choice==1 || choice==2)
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 cout<<"Your choices :\n1) DDA\n2) Bresenham\n3) Exit\nEnter your choice :\n";
 cin>>choice;
 if(choice!=1 && choice!=2)
 {
  break;
 }
 switch(choice)
 {
 case 1:
 cout<<"Enter the x1,y1\n";
 cin>>x1>>y1;
 cout<<"Enter the x2,y2\n";
 cin>>x2>>y2;
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 if(dx>dy)
 {
  step=dx;
 }
 else
 {
  step=dy;
 }
 xinc=(x2-x1)/step;
 yinc=(y2-y1)/step;
 float x=x1,y=y1;
 putpixel(x+xinc,y+yinc,WHITE);
   for(i=1;i<=step;i++)
   {
    x=x+xinc;
    y=y+yinc;
    putpixel(x,y,WHITE);
    delay(15);
   }
   break;
  case 2:
  cout<<"Enter the start point\n";
 cin>>x1>>y1;
 cout<<"Enter the end point\n";
 cin>>x2>>y2;
 dx=x2-x1;
 dy=y2-y1;
 p=2*dy-dx;
 putpixel(x1,y1,WHITE);

  for(i=1;i<=dx;i++)
  {
   if(p<0)
   {
    x1=x1+1;
    y1=y1;
    putpixel(x1,y1,WHITE);
    p=p+2*dy;
   }
   else
   {
    x1=x1+1;
    y1=y1+1;
    putpixel(x1,y1,WHITE);
    p=p+2*dy-2*dx;
   }
   delay(15);
  }
  break;
 }
 cout<<"\nEnter any character\n";
 cin>>a;
 clrscr();
 }
 getch();
 closegraph();
 return 0;
}
