#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void main()
{

 int gd=DETECT,gm;

 initgraph(&gd,&gm,"C:\\turboc3\\bgi");

 cleardevice();

 setcolor(0);
 setfillstyle(1,15);
 floodfill(150,100,15);

 ellipse(300,120,-53,240,85,85);   /*head*/

 ellipse(281,60,0,360,15,18); /*eye left*/
 ellipse(312,60,-120,210,15,18); /*eye right*/

 ellipse(287,60,0,360,3,5); /*eye ball left*/
 ellipse(305,60,0,360,3,5); /*eye ball right*/

 /*below eye circle connecting*/

 ellipse(300,130,20,70,70,65);
 ellipse(300,130,115,160,70,65);
 ellipse(300,130,300,0,70,76);
 ellipse(300,130,180,-120,70,76);




 ellipse(243,120,80,270,17,14); /*left mouth cirle*/
 ellipse(241,74,268,295,75,60); /*joining with mouth circle*/

 ellipse(357,120,270,96,17,14);  /*right mouth circle*/
 ellipse(359,75,244,268,75,60);  /*joining with mouth circle*/

 ellipse(300,142,35,140,35,20);   /*connecting mouth circle with another*/

 ellipse(300,80,212,328,65,105);  /*connected with mouth circle*/

 ellipse(297,78,0,360,8,9);      /*nose*/

 line(298,87,298,121);         /*nose connection with mouth*/

 /*Mooochhh in his face right side*/

 line(310,90,345,85);
 line(310,100,349,107);
 line(310,110,350,124);

 /*Mooochhh in his face left side*/

 line(286,90,252,85);
 line(286,100,250,107);
 line(286,110,247,124);

 ellipse(286,185,35,147,15,20); /*tounge left side*/

 ellipse(310,185,20,143,15,20); /*tounge right side*/

 ellipse(300,145,233,307,85,55);   /*neck belt upper*/
 ellipse(300,152,276,306,85,55);   /*neck belt lower right*/
 ellipse(300,152,233,265,85,55);   /*neck belt lower left*/

 ellipse(283,195,174,180,35,85);   /*touchup upper and lower layer belt in left*/

 ellipse(385,196,175,180,35,85);   /*same but in right*/

 /*neck bell*/
 ellipse(300,219,0,180,15,15);

 ellipse(300,225,10,165,17,12);
 ellipse(300,231,45,130,22,12);


 ellipse(300,219,195,346,15,15);

 ellipse(300,225,0,360,2,2);

 line(300,227,300,234);

 /*neck bell finished*/


 ellipse(350,230,170,195,105,138); /*line of his body left side*/
 ellipse(280,280,155,-165,34,40);  /*connected with this line for curve leg in left side*/

 ellipse(270,279,220,300,30,20);  /*connected with curve part for toe in left side*/

 ellipse(263,305,125,390,25,15);  /*shoe in left side*/

 ellipse(245,230,-15,10,105,138);  /*right parts of body */
 ellipse(315,280,-24,22,34,40);
 ellipse(330,279,235,-55,30,20);
 ellipse(330,306,130,53,25,15);

 ellipse(299,305,19,160,15,25);  /*connection between two legs*/

 ellipse(298,237,115,60,45,35); /*stomach*/

 ellipse(298,237,180,0,32,27);  /*pocket*/

 ellipse(298,210,245,-65,80,30); /*pocket upper line*/

 line(245,220,200,180);  /*left hand lower lining*/
 line(210,165,240,180); /*left hand upper lining*/

 circle(195,165,15); /*left hand circle*/

 line(350,220,365,235); /*right side lower line of hand*/
 line(351,195,376,220); /*right side upper line of hand*/

 ellipse(378,232,-175,109,15,15);

 ellipse(360,220,285,5,15,15);

 /*Color filling in the body*/

 setfillstyle(1,11);
 floodfill(300,37,0);
 floodfill(212,170,0);

 setfillstyle(1,12);
 floodfill(300,75,0);
 floodfill(300,174,0);

 setfillstyle(1,4);
 floodfill(300,201,0);

 setfillstyle(1,14);
 floodfill(300,205,0);
 floodfill(300,215,0);
 floodfill(300,220,0);

 setfillstyle(1,0);
 floodfill(288,60,0);
 floodfill(305,60,0);

 setfillstyle(1,4);
 floodfill(300,150,0);

 setfillstyle(7,2);
 floodfill(300,20,0);

 getch();
 closegraph();

 }