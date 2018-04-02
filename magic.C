/*Program Developed By Mr. Vivek Khasawat*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int j,k,l,m,n,o,p,q;
 void start()
{
char ch;
int i;
	clearviewport();
	settextstyle(3,0,0);
       setcolor(14);
	outtextxy(10,300,"  PRESS ENTER TO CONTINUE....");
	settextstyle(7,0,0);
	setcolor(4);
	setusercharsize(25,15,20,4);
	outtextxy(100,50,"MaGiC GAME");
     for(i=0;i<15;i++)
     {
     setcolor(i);
     rectangle(90-i,90-i,450+i,230+i);
	  }
     settextstyle(1,0,1);
setcolor(13);
     outtextxy(50,400,"if you want to QUIT a game without playing then press Q");
     scanf("%c",&ch)     ;
     if(ch=='Q'||ch=='q')
     {
     exit(15);
     }
    }



display()
{
int x=getmaxx()/2;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;
clearviewport();
setcolor(12);
setfillstyle(1,1);
fillellipse(x,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w,z-200,"1");
setcolor(12);

setcolor(12);
setfillstyle(1,2);
fillellipse(x-50,y-200+50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-200+50,"2");


setcolor(12);
setfillstyle(1,3);
fillellipse(x-100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z-200,"3");


setcolor(12);
setfillstyle(1,4);
fillellipse(x+50,y-150,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-150,"4");


setcolor(12);
setfillstyle(1,5);
fillellipse(x+100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z-200,"5");

setcolor(12);
setfillstyle(1,6);
fillellipse(x-50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-50,"6");

setcolor(12);
setfillstyle(1,7);
fillellipse(x+50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-50,"7");


setcolor(12);
setfillstyle(1,8);
fillellipse(x-100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z,"8");

setcolor(12);
setfillstyle(1,9);
fillellipse(x+100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z,"9");


setcolor(12);
setfillstyle(1,13);
fillellipse(x,y,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w-6,z+2,"10");

setcolor(15)  ;
 settextstyle(7,0,4 );
outtextxy(100,310,"Pick any number from above \t ");
outtextxy(100,350,"And we will guess that");
outtextxy(100,400,"press enter to continue");
getch();
}

int a()
{
int x=getmaxx()/2;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;
clearviewport();
setcolor(12);
setfillstyle(1,2);
fillellipse(x-50,y-200+50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-200+50,"3");


setcolor(12);
setfillstyle(1,3);
fillellipse(x-100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z-200,"4");




setcolor(12);
setfillstyle(1,4);
fillellipse(x+50,y-150,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-150,"9");


setcolor(12);
setfillstyle(1,5);
fillellipse(x+100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z-200,"7");

setcolor(12);
setfillstyle(1,6);
fillellipse(x-50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-50,"6");

setcolor(12);
setfillstyle(1,7);
fillellipse(x+50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-50,"8");


setcolor(12);
setfillstyle(1,8);
fillellipse(x-100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z,"5");

setcolor(12);
setfillstyle(1,9);
fillellipse(x+100,y,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w+100-5,z+2,"10");
outtextxy(100,350,"\nif no is present press 1 else 0 \n");
scanf("%d",&j);
return j;
}


int b()
{
int x=getmaxx()/2;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;

clearviewport();

setcolor(12);
setfillstyle(1,2);
fillellipse(x-50,y-200+50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-200+50,"1");


setcolor(12);
setfillstyle(1,3);
fillellipse(x-100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z-200,"9");


setcolor(12);
setfillstyle(1,4);
fillellipse(x+50,y-150,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-150,"5");


setcolor(12);
setfillstyle(1,5);
fillellipse(x+100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z-200,"7");

setcolor(12);
setfillstyle(1,6);
fillellipse(x-50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-50,"2");

setcolor(12);
setfillstyle(1,7);
fillellipse(x+50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-50,"8");


setcolor(12);
setfillstyle(1,8);
fillellipse(x-100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z,"6");

setcolor(12);
setfillstyle(1,9);
fillellipse(x+100,y,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w+100-5,z+2,"10");
outtextxy(100,350,"\nif no is present press 1 else 0 \n");
scanf("%d",&k);
return k;

}
check1()
{

int x=getmaxx()/2,d;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;

clearviewport();

setcolor(12);
setfillstyle(1,2);
fillellipse(x-50,y-200+50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-200+50,"3");


setcolor(12);
setfillstyle(1,3);
fillellipse(x-100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z-200,"1");


setcolor(12);
setfillstyle(1,4);
fillellipse(x+50,y-150,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-150,"9");


setcolor(12);
setfillstyle(1,5);
fillellipse(x+100,y-200,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w+100,z-200,"12");

setcolor(12);
setfillstyle(1,6);
fillellipse(x-50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-50,"6");

setcolor(12);
setfillstyle(1,7);
fillellipse(x+50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-50,"8");


setcolor(12);
setfillstyle(1,8);
fillellipse(x-100,y,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w-100,z,"11");

setcolor(12);
setfillstyle(1,9);
fillellipse(x+100,y,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w+100-5,z+2,"10");
outtextxy(100,350,"\nif no is present press 1 else 0 \n");
scanf("%d",&l);

if(j==1&&k==0&&l==1)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"3");
getch();
over();
exit(0);
}

else if(j==0&&k==1&&l==1)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"1");
getch();
over();
exit(1);
}
else if(j==0&&k==1&&l==0)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"2");
 getch();
 over();
 exit(2);
}if(j==1&&k==0&&l==0)

{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"4");
getch();
over();
exit(3);}
}
int c()
{

int x=getmaxx()/2,d;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;

clearviewport();

setcolor(12);
setfillstyle(1,2);
fillellipse(x-50,y-200+50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-200+50,"4");


setcolor(12);
setfillstyle(1,3);
fillellipse(x-100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z-200,"9");


setcolor(12);
setfillstyle(1,4);
fillellipse(x+50,y-150,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-150,"7");


setcolor(12);
setfillstyle(1,5);
fillellipse(x+100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z-200,"2");

setcolor(12);
setfillstyle(1,6);
fillellipse(x-50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-50,"8");

setcolor(12);
setfillstyle(1,7);
fillellipse(x+50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-50,"1");


setcolor(12);
setfillstyle(1,8);
fillellipse(x-100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z,"3");

setcolor(12);
setfillstyle(1,9);
fillellipse(x+100,y,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w+100-5,z+2,"10");
outtextxy(100,350,"\nif no is present press 1 else 0 \n");
scanf("%d",&m);
return m;
}
int d()
{

int x=getmaxx()/2,d;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;
clearviewport();
setcolor(12);
setfillstyle(1,2);
fillellipse(x-50,y-200+50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-200+50,"1");


setcolor(12);
setfillstyle(1,3);
fillellipse(x-100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z-200,"5");


setcolor(12);
setfillstyle(1,4);
fillellipse(x+50,y-150,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-150,"9");


setcolor(12);
setfillstyle(1,5);
fillellipse(x+100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z-200,"2");

setcolor(12);
setfillstyle(1,6);
fillellipse(x-50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-50,"4");

setcolor(12);
setfillstyle(1,7);
fillellipse(x+50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-50,"3");


setcolor(12);
setfillstyle(1,8);
fillellipse(x-100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z,"6");

setcolor(12);
setfillstyle(1,9);
fillellipse(x+100,y,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w+100-5,z+2,"10");
outtextxy(100,350,"\nif no is present press 1 else 0 \n");
scanf("%d",&n);
return n;
}
int e()
{

int x=getmaxx()/2,d;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;

clearviewport();
setcolor(12);
setfillstyle(1,2);
fillellipse(x-50,y-200+50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-200+50,"1");


setcolor(12);
setfillstyle(1,3);
fillellipse(x-100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z-200,"5");


setcolor(12);
setfillstyle(1,4);
fillellipse(x+50,y-150,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-150,"6");


setcolor(12);
setfillstyle(1,5);
fillellipse(x+100,y-200,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z-200,"2");

setcolor(12);
setfillstyle(1,6);
fillellipse(x-50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-50,z-50,"4");

setcolor(12);
setfillstyle(1,7);
fillellipse(x+50,y-50,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+50,z-50,"3");


setcolor(12);
setfillstyle(1,8);
fillellipse(x-100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w-100,z,"8");

setcolor(12);
setfillstyle(1,8);
fillellipse(x,y-100,20,20);
setcolor(14);
settextstyle(4,0,3.3);
outtextxy(w-5,z-100,"10");

setcolor(12);
setfillstyle(1,9);
fillellipse(x+100,y,20,20);
setcolor(14);
settextstyle(4,0,4);
outtextxy(w+100,z+2,"7");
outtextxy(100,350,"\nif no is present press 1 else 0 \n");
scanf("%d",&o);
return o;
}
check2()
{
int x=getmaxx()/2;
int y=getmaxy()/2+50;
int w=x-5,z=y-20;
if(l==0&&m==0&&n==1)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"5");
getch();
over();
exit(4);}

else if(l==1&&m==0&&n==1)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"6");
getch();
over();
exit(5);
}
else if(l==0&&m==1&&n==0)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"7");
getch();
over();
exit(6);
}
else if(l==1&&m==1&&n==0)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");
setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"8");
getch();
over();
exit(7);}
}

check3()
{

clearviewport();
if(o==0)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");

setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,9);
outtextxy(305,180,"9");
getch();
over();
exit(9);
}
else if(o==1)
{
clearviewport();
setcolor(13);
settextstyle(4,0,4);
outtextxy(100,150,"Your number is");

setfillstyle(9,4);
fillellipse(325,250,50,50);
setcolor(14);
settextstyle(1,0,8.5);
outtextxy(283,195,"10");
getch();
over();
exit();
}
exit(11);
}
over()
{
clearviewport();
setcolor(4);
outtextxy(100,100,"GAME OVER ");
setcolor(14);
outtextxy(100,200,"THANK YOU");
settextstyle(7,0,4);
setcolor(15);
outtextxy(50,340,"Made By :- ");
setcolor(6);
outtextxy(100,340,"    VIVEK KHASAWAT ");


getch();
}
main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,"..\\BGI");
clearviewport();
start();
display();
a();
b();
check1();
c();
d();
check2();
e();
check3();
getch();
}