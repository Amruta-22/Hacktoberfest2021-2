Snake And Ladder

#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<graphics.h>
#include<iostream.h>

enum whoplays{p1,p2};
int counter1=0,counter2=0,counter11=0,counter22=0;
void graph(int,int,int);
void sohaib(void);
void ladder(int,int,int,int);
void cp1(int,int);
void cp2(int,int);
void snake(int,int,int,int);
whoplays setplayer(whoplays);
class dice
{
   private:
     int dice1;
   public:
      dice();
      int rolldice(void);
      operator int()
    {
       return dice1/1;
    }
};
void dice::dice()
{
   dice1=0;
}
int dice::rolldice(void)
{
   randomize();
   dice1=rand()%6+1;
   return dice1;
}
class player1
{
   private:
      int a;
   public:
      player1();
      returna();
      reseta(int);
      minusa(int);
      operator int()
    {
       return a/1;
    }

};
void player1::player1()
{
   a=0;
}
int player1::returna()
{
   return a;
}
int player1::reseta(int ra)
{
   a+=ra;
}
int player1::minusa(int ma)
{
   a-=ma;
}
class player2
{
   private:
      int b;
   public:
      player2();
      returnb();
      minusb(int);
      resetb(int);
      operator int()
    {
       return b/1;
    }

};
void player2::player2()
{
   b=0;
}
int player2::returnb()
{
   return b;
}

int player2::resetb(int rb)
{
   b+=rb;
}
int player2::minusb(int mb)
{
   b-=mb;
}
//starting of main
void main()
{
   sohaib();
}
//end of main
void sohaib(void)
{
   int l=VGA,k=VGAMED;
   initgraph(&l,&k,"e:\tc\bgi");
   static int x=0;
   dice dice1;
   player1 obj1;
   player2 obj2;
   int one=0,two=0,y=0;
   y=setplayer(1);
   g:if(x==6)
   {
      if(y==0)
      {
    y=setplayer(0);
      }
      else
      if(y==1)
      {
   y=setplayer(1);
      }
   }
   else
   {
      if(y==0)
      {
    y=setplayer(1);
      }
      else
      if(y==1)
      {
    y=setplayer(0);
      }
   }

   x=int(dice1.rolldice());
   one=int(obj1.returna());
   two=int(obj2.returnb());
   graph(y,one,two);
   if(x==6&&y==0)
   {
      counter11=1;
   }
   if(x==6&&y==1)
   {
      counter22=1;
   }
   if(y==0&&counter11==1)
   {
      counter1=1;
   }
   if(y==1&&counter22==1)
   {
      counter2=1;
   }
   if(y==0&&counter1>=1)
   {
      obj1.reseta(x);
      if(one==10)
      {
    obj1.reseta(27);
    cout<<endl<<"player1 you have moved to 37";
      }
      if(one==55)
      {
    obj1.reseta(15);
    cout<<endl<<"player1 you have moved to 64";
      }
      if(one==79)
      {
    obj1.reseta(10);
    cout<<endl<<"player1 you have moved to 89";
      }
      if(one==99)
      {
    obj1.minusa(60);
    cout<<endl<<"alas! moved to 39";
      }
      if(one==56)
      {
    obj1.minusa(30);
    cout<<endl<<"alas! moved to 26";
      }
      if(one==77)
      {
    obj1.minusa(25);
    cout<<endl<<"alas! moved to 52";
      }
   }
   if(y==1&&counter2>=1)
   {
      obj2.resetb(x);
      if(two==24)
      {
    obj2.resetb(27);
    cout<<endl<<"player2 you have moved to 51";
      }
      if(two==43)
      {
    obj2.resetb(15);
    cout<<endl<<"player2 you have moved to 58";
      }
      if(two==88)
      {
    obj2.resetb(10);
    cout<<endl<<"player2 you have moved to 98";
      }
      if(two==28)
      {
    obj2.minusb(15);
    cout<<endl<<"alas! moved to 13";
      }
      if(two==69)
      {
    obj2.minusb(30);
    cout<<endl<<"alas! moved to 39";
      }
      if(two==99)
      {
    obj2.minusb(60);
    cout<<endl<<"alas! moved to 39";
      }
   }
   if(one>=100)
   {
      cout<<"
congratulations player 1 have won";
      goto b;
   }
   if(two>=100)
   {
      cout<<"
congratulations player 2 have won";
      goto b;
   }
   if((one<101&&two<101)&&(one>=0&&two>=0))
   {
      goto g;
   }
   b:getch();
}
whoplays setplayer(whoplays p)
{
   whoplays player=p;
   return player;
}

void graph(int y,int one,int two)
{
   int a=VGA,b=VGAMED;
   initgraph(&a,&b,"e:\tc\bgi");
   cleardevice();
   int count=0,r=21;
   if(y==0)
   {
      rectangle(200,100,400,200);
      setfillstyle(1,BLUE);
      floodfill(201,101,WHITE);
      moveto(210,110);
      setcolor(GREEN);
      settextstyle(SCRIPT_FONT,HORIZ_DIR,5);
      outtext("Player 2");
      getch();
      cleardevice();
   }
   if(y==1)
   {
      rectangle(200,100,400,200);
      setfillstyle(1,RED);
      floodfill(201,101,WHITE);
      moveto(210,110);
      setcolor(YELLOW);
      settextstyle(SCRIPT_FONT,HORIZ_DIR,5);
      outtext("Player 2");
      getch();
      cleardevice();
   }
   setcolor(4);
   moveto(75,5);
   settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
   outtext("SNAKE AND LADDER");
   rectangle(65,8,535,53);
   setcolor(GREEN);
   rectangle(15,58,590,298);
   for(int e=73;e<590;e=e+58)
   {
      line(e,58,e,298);
   }
   for(int d=82;d<298;d=d+24)
   {
      line(15,d,590,d);
   }
   setcolor(RED);
   moveto(44,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("1");
   moveto(102,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("2");
   moveto(160,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("3");
   moveto(218,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("4");
   moveto(276,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("5");
   moveto(334,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("6");
   moveto(392,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("7");
   moveto(450,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("8");
   moveto(508,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("9");
   moveto(566,286);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("10");
   moveto(44,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("11");
   moveto(102,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("12");
   moveto(160,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("13");
   moveto(218,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("14");
   moveto(276,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("15");
   moveto(334,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("16");
   moveto(392,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("17");
   moveto(450,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("18");
   moveto(508,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("19");
   moveto(566,262);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("20");
   moveto(44,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("21");
   moveto(102,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("22");
   moveto(160,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("23");
   moveto(218,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("24");
   moveto(276,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("25");
   moveto(334,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("26");
   moveto(392,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("27");
   moveto(450,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("28");
   moveto(508,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("29");
   moveto(566,238);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("30");
   moveto(44,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("31");
   moveto(102,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("32");
   moveto(160,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("33");
   moveto(218,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("34");
   moveto(276,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("35");
   moveto(334,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("36");
   moveto(392,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("37");
   moveto(450,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("38");
   moveto(508,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("39");
   moveto(566,214);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("40");
   moveto(44,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("41");
   moveto(102,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("42");
   moveto(160,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("43");
   moveto(218,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("44");
   moveto(276,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("45");
   moveto(334,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("46");
   moveto(392,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("47");
   moveto(450,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("48");
   moveto(508,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("49");
   moveto(566,190);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("50");
   moveto(44,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("51");
   moveto(102,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("52");
   moveto(160,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("53");
   moveto(218,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("54");
   moveto(276,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("55");
   moveto(334,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("56");
   moveto(392,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("57");
   moveto(450,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("58");
   moveto(508,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("59");
   moveto(566,166);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("60");
   moveto(44,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("61");
   moveto(102,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("62");
   moveto(160,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("63");
   moveto(218,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("64");
   moveto(276,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("65");
   moveto(334,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("66");
   moveto(392,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("67");
   moveto(450,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("68");
   moveto(508,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("69");
   moveto(566,142);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("70");
   moveto(44,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("71");
   moveto(102,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("72");
   moveto(160,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("73");
   moveto(218,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("74");
   moveto(276,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("75");
   moveto(334,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("76");
   moveto(392,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("77");
   moveto(450,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("78");
   moveto(508,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("79");
   moveto(566,118);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("80");
   moveto(44,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("81");
   moveto(102,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("82");
   moveto(160,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("83");
   moveto(218,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("84");
   moveto(276,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("85");
   moveto(334,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("86");
   moveto(392,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("87");
   moveto(450,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("88");
   moveto(508,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("89");
   moveto(566,94);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("90");
   moveto(44,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("91");
   moveto(102,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("92");
   moveto(160,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("93");
   moveto(218,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("94");
   moveto(276,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("95");
   moveto(334,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("96");
   moveto(392,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("97");
   moveto(450,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("98");
   moveto(508,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("99");
   moveto(558,70);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtext("100");
   settextstyle(SMALL_FONT,HORIZ_DIR,5);
   setcolor(GREEN);
   rectangle(363,300,590,349);
   setcolor(6);
   moveto(375,306);
   outtext("Dice -> ");
   moveto(375,317);
   outtext("Player 1 -> ");
   moveto(375,328);
   outtext("Player 2 -> ");
   setcolor(GREEN);
   rectangle(15,300,350,349);
   setcolor(YELLOW);
   moveto(19,302);
   outtext("Help : ");
   setcolor(7);
   settextstyle(SMALL_FONT,HORIZ_DIR,4);
   outtext("Just press any key, a number will appear before ");
   moveto(72,312);
   outtext("dice. The mark of player will automatically move");
   moveto(19,322);
   outtext("to the accurate position. The player who will reach  100 ");
   moveto(19,332);
   outtext("will Win the game. ");
   ladder(392,214,566,286);
   ladder(218,142,276,166);
   //ladder(508,94,508,118);
   ladder(44,166,218,238);
   ladder(160,190,450,166);
   ladder(450,70,450,94);
   snake(508,70,556,238);
   snake(334,166,334,238);
   snake(392,118,102,166);
   snake(450,238,160,262);
   snake(508,142,508,214);
   cp1(515,310);
   moveto(520,307);
   outtext("  Player 1");
   cp2(515,330);
   moveto(520,327);
   outtext("  Player 2");


      if(one==1)
      {
    cp1(44,286);
      }
      if(one==2)
      {
    cp1(102,286);
      }
      if(one==3)
      {
    cp1(160,286);
      }
      if(one==4)
      {
    cp1(218,286);
      }
      if(one==5)
      {
    cp1(276,286);
      }
      if(one==6)
      {
    cp1(334,286);
      }
      if(one==7)
      {
    cp1(392,286);
      }
      if(one==8)
      {
    cp1(450,286);
      }
      if(one==9)
      {
    cp1(508,286);
      }
      if(one==10)
      {
    cp1(566,286);
      }
      if(one==11)
      {
    cp1(44,262);
      }
      if(one==12)
      {
    cp1(102,262);
      }
      if(one==13)
      {
    cp1(160,262);
      }
      if(one==14)
      {
    cp1(218,262);
      }
      if(one==15)
      {
    cp1(276,262);
      }
      if(one==16)
      {
    cp1(334,262);
      }
      if(one==17)
      {
    cp1(392,262);
      }
      if(one==18)
      {
    cp1(450,262);
      }
      if(one==19)
      {
    cp1(508,262);
      }
      if(one==20)
      {
    cp1(566,262);
      }
      if(one==21)
      {
    cp1(44,238);
      }
      if(one==22)
      {
    cp1(102,238);
      }
      if(one==23)
      {
    cp1(160,238);
      }
      if(one==24)
      {
    cp1(218,238);
      }
      if(one==25)
      {
    cp1(276,238);
      }
      if(one==26)
      {
    cp1(334,238);
      }
      if(one==27)
      {
    cp1(392,238);
      }
      if(one==28)
      {
    cp1(450,238);
      }
      if(one==29)
      {
    cp1(508,238);
      }
      if(one==30)
      {
    cp1(566,238);
      }
      if(one==31)
      {
    cp1(44,214);
      }
      if(one==32)
      {
    cp1(102,214);
      }
      if(one==33)
      {
    cp1(160,214);
      }
      if(one==34)
      {
    cp1(218,214);
      }
      if(one==35)
      {
    cp1(276,214);
      }
      if(one==36)
      {
    cp1(334,214);
      }
      if(one==37)
      {
    cp1(392,214);
      }
      if(one==38)
      {
    cp1(450,214);
      }
      if(one==39)
      {
    cp1(508,214);
      }
      if(one==40)
      {
    cp1(566,214);
      }
      if(one==41)
      {
    cp1(44,190);
      }
      if(one==42)
      {
    cp1(102,190);
      }
      if(one==43)
      {
    cp1(160,190);
      }
      if(one==44)
      {
    cp1(218,190);
      }
      if(one==45)
      {
    cp1(276,190);
      }
      if(one==46)
      {
    cp1(334,190);
      }
      if(one==47)
      {
    cp1(392,190);
      }
      if(one==48)
      {
    cp1(450,190);
      }
      if(one==49)
      {
    cp1(508,190);
      }
      if(one==50)
      {
    cp1(566,190);
      }
      if(one==51)
      {
    cp1(44,166);
      }
      if(one==52)
      {
    cp1(102,166);
      }
      if(one==53)
      {
    cp1(160,166);
      }
      if(one==54)
      {
    cp1(218,166);
      }
      if(one==55)
      {
    cp1(276,166);
      }
      if(one==56)
      {
    cp1(334,166);
      }
      if(one==57)
      {
    cp1(392,166);
      }
      if(one==58)
      {
    cp1(450,166);
      }
      if(one==59)
      {
    cp1(508,166);
      }
      if(one==60)
      {
    cp1(566,166);
      }
      if(one==61)
      {
    cp1(44,142);
      }
      if(one==62)
      {
    cp1(102,142);
      }
      if(one==63)
      {
    cp1(160,142);
      }
      if(one==64)
      {
    cp1(218,142);
      }
      if(one==65)
      {
    cp1(276,142);
      }
      if(one==66)
      {
    cp1(334,142);
      }
      if(one==67)
      {
    cp1(392,142);
      }
      if(one==68)
      {
    cp1(450,142);
      }
      if(one==69)
      {
    cp1(508,142);
      }
      if(one==70)
      {
    cp1(566,142);
      }
      if(one==71)
      {
    cp1(44,118);
      }
      if(one==72)
      {
    cp1(102,118);
      }
      if(one==73)
      {
    cp1(160,118);
      }
      if(one==74)
      {
    cp1(218,118);
      }
      if(one==75)
      {
    cp1(276,118);
      }
      if(one==76)
      {
    cp1(334,118);
      }
      if(one==77)
      {
    cp1(392,118);
      }
      if(one==78)
      {
    cp1(450,118);
      }
      if(one==79)
      {
    cp1(508,118);
      }
      if(one==80)
      {
    cp1(566,118);
      }
      if(one==81)
      {
    cp1(44,94);
      }
      if(one==82)
      {
    cp1(102,94);
      }
      if(one==83)
      {
    cp1(160,94);
      }
      if(one==84)
      {
    cp1(218,94);
      }
      if(one==85)
      {
    cp1(276,94);
      }
      if(one==86)
      {
    cp1(334,94);
      }
      if(one==87)
      {
    cp1(392,94);
      }
      if(one==88)
      {
    cp1(450,94);
      }
      if(one==89)
      {
    cp1(508,94);
      }
      if(one==90)
      {
    cp1(566,94);
      }
      if(one==91)
      {
    cp1(44,70);
      }
      if(one==92)
      {
    cp1(102,70);
      }
      if(one==93)
      {
    cp1(160,70);
      }
      if(one==70)
      {
    cp1(218,70);
      }
      if(one==95)
      {
    cp1(276,70);
      }
      if(one==96)
      {
    cp1(334,70);
      }
      if(one==97)
      {
    cp1(392,70);
      }
      if(one==98)
      {
    cp1(450,70);
      }
      if(one==99)
      {
    cp1(508,70);
      }
      if(one==100)
      {
    cp1(566,70);
      }



      if(two==1)
      {
    cp2(44,286);
      }
      if(two==2)
      {
    cp2(102,286);
      }
      if(two==3)
      {
    cp2(160,286);
      }
      if(two==4)
      {
    cp2(218,286);
      }
      if(two==5)
      {
    cp2(276,286);
      }
      if(two==6)
      {
    cp2(334,286);
      }
      if(two==7)
      {
    cp2(392,286);
      }
      if(two==8)
      {
    cp2(450,286);
      }
      if(two==9)
      {
    cp2(508,286);
      }
      if(two==10)
      {
    cp2(566,286);
      }
      if(two==11)
      {
    cp2(44,262);
      }
      if(two==12)
      {
    cp2(102,262);
      }
      if(two==13)
      {
    cp2(160,262);
      }
      if(two==14)
      {
    cp2(218,262);
      }
      if(two==15)
      {
    cp2(276,262);
      }
      if(two==16)
      {
    cp2(334,262);
      }
      if(two==17)
      {
    cp2(392,262);
      }
      if(two==18)
      {
    cp2(450,262);
      }
      if(two==19)
      {
    cp2(508,262);
      }
      if(two==20)
      {
    cp2(566,262);
      }
      if(two==21)
      {
    cp2(44,238);
      }
      if(two==22)
      {
    cp2(102,238);
      }
      if(two==23)
      {
    cp2(160,238);
      }
      if(two==24)
      {
    cp2(218,238);
      }
      if(two==25)
      {
    cp2(276,238);
      }
      if(two==26)
      {
    cp2(334,238);
      }
      if(two==27)
      {
    cp2(392,238);
      }
      if(two==28)
      {
    cp2(450,238);
      }
      if(two==29)
      {
    cp2(508,238);
      }
      if(two==30)
      {
    cp2(566,238);
      }
      if(two==31)
      {
    cp2(44,214);
      }
      if(two==32)
      {
    cp2(102,214);
      }
      if(two==33)
      {
    cp2(160,214);
      }
      if(two==34)
      {
    cp2(218,214);
      }
      if(two==35)
      {
    cp2(276,214);
      }
      if(two==36)
      {
    cp2(334,214);
      }
      if(two==37)
      {
    cp2(392,214);
      }
      if(two==38)
      {
    cp2(450,214);
      }
      if(two==39)
      {
    cp2(508,214);
      }
      if(two==40)
      {
    cp2(566,214);
      }
      if(two==41)
      {
    cp2(44,190);
      }
      if(two==42)
      {
    cp2(102,190);
      }
      if(two==43)
      {
    cp2(160,190);
      }
      if(two==44)
      {
    cp2(218,190);
      }
      if(two==45)
      {
    cp2(276,190);
      }
      if(two==46)
      {
    cp2(334,190);
      }
      if(two==47)
      {
    cp2(392,190);
      }
      if(two==48)
      {
    cp2(450,190);
      }
      if(two==49)
      {
    cp2(508,190);
      }
      if(two==50)
      {
    cp2(566,190);
      }
      if(two==51)
      {
    cp2(44,166);
      }
      if(two==52)
      {
    cp2(102,166);
      }
      if(two==53)
      {
    cp2(160,166);
      }
      if(two==54)
      {
    cp2(218,166);
      }
      if(two==55)
      {
    cp2(276,166);
      }
      if(two==56)
      {
    cp2(334,166);
      }
      if(two==57)
      {
    cp2(392,166);
      }
      if(two==58)
      {
    cp2(450,166);
      }
      if(two==59)
      {
    cp2(508,166);
      }
      if(two==60)
      {
    cp2(566,166);
      }
      if(two==61)
      {
    cp2(44,142);
      }
      if(two==62)
      {
    cp2(102,142);
      }
      if(two==63)
      {
    cp2(160,142);
      }
      if(two==64)
      {
    cp2(218,142);
      }
      if(two==65)
      {
    cp2(276,142);
      }
      if(two==66)
      {
    cp2(334,142);
      }
      if(two==67)
      {
    cp2(392,142);
      }
      if(two==68)
      {
    cp2(450,142);
      }
      if(two==69)
      {
    cp2(508,142);
      }
      if(two==70)
      {
    cp2(566,142);
      }
      if(two==71)
      {
    cp2(44,118);
      }
      if(two==72)
      {
    cp2(102,118);
      }
      if(two==73)
      {
    cp2(160,118);
      }
      if(two==74)
      {
    cp2(218,118);
      }
      if(two==75)
      {
    cp2(276,118);
      }
      if(two==76)
      {
    cp2(334,118);
      }
      if(two==77)
      {
    cp2(392,118);
      }
      if(two==78)
      {
    cp2(450,118);
      }
      if(two==79)
      {
    cp2(508,118);
      }
      if(two==80)
      {
    cp2(566,118);
      }
      if(two==81)
      {
    cp2(44,94);
      }
      if(two==82)
      {
    cp2(102,94);
      }
      if(two==83)
      {
    cp2(160,94);
      }
      if(two==84)
      {
    cp2(218,94);
      }
      if(two==85)
      {
    cp2(276,94);
      }
      if(two==86)
      {
    cp2(334,94);
      }
      if(two==87)
      {
    cp2(392,94);
      }
      if(two==88)
      {
    cp2(450,94);
      }
      if(two==89)
      {
    cp2(508,94);
      }
      if(two==90)
      {
    cp2(566,94);
      }
      if(two==91)
      {
    cp2(44,70);
      }
      if(two==92)
      {
    cp2(102,70);
      }
      if(two==93)
      {
    cp2(160,70);
      }
      if(two==70)
      {
    cp2(218,70);
      }
      if(two==95)
      {
    cp2(276,70);
      }
      if(two==96)
      {
    cp2(334,70);
      }
      if(two==97)
      {
    cp2(392,70);
      }
      if(two==98)
      {
    cp2(450,70);
      }
      if(two==99)
      {
    cp2(508,70);
      }
      if(two==100)
      {
    cp2(566,70);
      }

   getch();
   closegraph();
}
void ladder(int s1,int s2,int s3,int s4)
{
   setcolor(WHITE);
   setlinestyle(1,10,3);
   line(s1,s2,s3,s4);
   line(s1,s2,s1,s2+10);
   line(s1,s2,s1+17,s2);
   //circle(s1,s2,3);

}
void cp1(int xx,int yy)
{
   setcolor(7);
   circle(xx,yy,10);
   setfillstyle(1,9);
   floodfill(xx,yy,7);
}
void cp2(int xx,int yy)
{
   setcolor(7);
   circle(xx,yy,10);
   setfillstyle(1,4);
   floodfill(xx,yy,7);
}

void snake(int s1,int s2,int s3,int s4)
{
   setcolor(YELLOW);
   setlinestyle(1,10,3);
   line(s1,s2,s3,s4);
   circle(s1,s2,4);
}