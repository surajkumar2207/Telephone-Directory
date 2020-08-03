#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<graphics.h>
#include<ctype.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>

 void givemebox()// GIVES YOU THE BOX
 {
   clrscr();
   textcolor(RED);
   textbackground(WHITE);

   for(int i=1;i<25;i++)
   {
     if(i==1|i==24)
      {
	for(int h=1;h<=80;h++)
	cprintf("*");
      }
     else
      {
       for(int j=0;j<80;j++)
	{
	  if((j==0)||(j==79))
	  cprintf("*");
	  else
	  cprintf(" ");
	}
      }
    }
 }


 void menu()
 {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setbkcolor(GREEN);
  settextstyle(1,0,7);
  outtextxy(1,50, " *****  MENU  ***** ");
  settextstyle(7,0,4);
  outtextxy(3,175," 1 :  To enter the data  ");
  outtextxy(3,225," 2 :  To display the data");
  outtextxy(3,275," 3 :  To modify the data ");
  outtextxy(3,325," 4 :  To exit            ");
  line(390,465,565,465);
  line(390,467,565,467);
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"\t                                         ENTER YOUR CHOICE : ";

 }

 class directory
 {
   char phonenumber[20];
   char id[20];
   char pan[20];
   char mobilenumber[20];
   char hikenumber[20];
   char whatsappnumber[20];
   char name[50];
   char address[150];
   char adhaar[20];
   char bloodgroup[5];
   char  age[9];
   char profession[50];
   char email[50];
   public:
   void enterdata()
   {
     clrscr();
     givemebox();
     textcolor(BLUE);

     gotoxy(2,21);

     cprintf("[******  IN ORDER TO REMOVE THE AMBIGUITY IN THE PROGRAM PLEASE MAKE   ******]");
     gotoxy(2,22);
     cprintf("[****** SURE THAT YOU FILL THE CORRECT ENTRIES ACCORDING TO DATA TYPE  ******]");
  //   delay(2500);
     gotoxy(2,2);
     textcolor(BLACK);
     cprintf("Enter your ID        : ");
     gotoxy(2,4);
     cprintf("Enter your name      : ");
     gotoxy(2,6);
     cprintf("Enter mobile number  : ");
     gotoxy(45,6);
     cprintf("Enter phone number   : ");
     gotoxy(2,8);
     cprintf("Enter Whatsapp number: ");
     gotoxy(45,8);
     cprintf("Enter Hike number    : ");
     gotoxy(2,10);
     cprintf("Enter Adhaar number  : ");
     gotoxy(45,10);
     cprintf("Enter PAN number     : ");
     gotoxy(2,12);
     cprintf("Enter age            : ");
     gotoxy(45,12);
     cprintf("Enter Blood group    :");
     gotoxy(2,14);
     cprintf("Enter Email ID       :");
     gotoxy(2,16);
     cprintf("Enter the profession :");
     gotoxy(2,18);
     cprintf("Enter the address    :");
     gotoxy(25,2);
     gets(id);
     gotoxy(25,4);
     gets(name);
     gotoxy(25,6);
     gets(mobilenumber);
     gotoxy(68,6);
     gets(phonenumber);
     gotoxy(25,8);
     gets(whatsappnumber);
     gotoxy(68,8);
     gets(hikenumber);
     gotoxy(25,10);
     gets(adhaar);
     gotoxy(68,10);
     gets(pan);
     gotoxy(25,12);
     gets(age);
     gotoxy(68,12);
     gets(bloodgroup);
     gotoxy(25,14);
     gets(email);
     gotoxy(25,16);
     gets(profession);
     gotoxy(25,18);
     gets(address);
     gotoxy(2,19.5);
     cprintf("            Do you want to save this ? (Y-Yes, N-No): ");


   }

   void showdata()
   {

     clrscr();
     givemebox();
     gotoxy(2,2);
     textcolor(BLUE);
     cprintf("1.Your ID              : ");
     gotoxy(2,4);
     cprintf("2.Your name            : ");
     gotoxy(2,6);
     cprintf("3.Your mobile number   : ");
     gotoxy(45,6);
     cprintf("4.Your phone number : ");
     gotoxy(2,8);
     cprintf("5.Your Whatsapp number : ");
     gotoxy(45,8);
     cprintf("6.Your Hike number  : ");
     gotoxy(2,10);
     cprintf("7.Youe Adhaar number   : ");
     gotoxy(45,10);
     cprintf("8.Your PAN number   : ");
     gotoxy(2,12);
     cprintf("9.Your age             : ");
     gotoxy(45,12);
     cprintf("10.Your Blood group :");
     gotoxy(2,14);
     cprintf("11.Your Email ID       :");
     gotoxy(2,16);
     cprintf("12.Your profession     :");
     gotoxy(2,18);
     cprintf("13.Your address        :");
     gotoxy(28,2);
     cout<<id;
     gotoxy(28,4);
     puts(name);
     gotoxy(28,6);
     cout<<mobilenumber;
     gotoxy(68,6);
     cout<<phonenumber;
     gotoxy(28,8);
     cout<<whatsappnumber;
     gotoxy(68,8);
     cout<<hikenumber;
     gotoxy(28,10);
     cout<<adhaar;
     gotoxy(68,10);
     cout<<pan;
     gotoxy(28,12);
     cout<<age;
     gotoxy(68,12);
     puts(bloodgroup);
     gotoxy(28,14);
     puts(email);
     gotoxy(28,16);
     puts(profession);
     gotoxy(28,18);
     puts(address);
     gotoxy(2,20);
   }




    void viewlist(int i)
  {
     settextstyle(6,0,2);
     outtextxy(4,90+i,id);
     outtextxy(150,90+i,name);
     outtextxy(350,90+i,adhaar);
  }

  void compare(char idm[20],int &k)
  {
   if(strcmp(id,idm)==0)
   {
    closegraph();
    showdata();
    gotoxy(4,21);
    cprintf("                     PRESS ANY KEY TO CONTINUE ");
    k++;
    getch();
   }

  }

  int comparendelete(char idn[20])
   {
    if(strcmp(id,idn)==0)
    return (7);
    else
    return(1);
   }
  void  comparenmodify(char idm[20],int &k)
  {
    if(strcmp(id,idm)==0)
   {
    closegraph();
    showdata();
    textcolor(BLACK);
    cprintf("Enter the Detail number  which you wanna replace with  ");
    k++;
    int choice;
    cin>>choice;
    gotoxy(2,21);
    if(choice==1)
    {
     cprintf("Enter the new ID : ");
     gets(id);
    }
    if(choice==2)
    {
     cprintf("Enter the new NAME : ");
     gets(name);
    }if(choice==3)
    {
     cprintf("Enter the new mobile number : ");
     gets(mobilenumber);
    }if(choice==4)
    {
     cprintf("Enter the new phone number : ");
     gets(phonenumber);
    }if(choice==5)
    {
     cprintf("Enter the new Whatsapp number : ");
     gets(whatsappnumber);
    }if(choice==6)
    {
     cprintf("Enter the new Hike number : ");
     gets(hikenumber);
    }if(choice==7)
    {
     cprintf("Enter the new Adhaar number : ");
     gets(adhaar);
    }if(choice==8)
    {
     cprintf("Enter the new PAN number : ");
     gets(pan);
    }if(choice==9)
    {
     cprintf("Enter the new age : ");
     gets(age);
    }if(choice==10)
    {
     cprintf("Enter the new Blood Group : ");
     gets(bloodgroup);
    }if(choice==11)
    {
     cprintf("Enter the new Email ID : ");
     gets(email);
    }if(choice==12)
    {
     cprintf("Enter the new Profession : ");
     gets(profession);
    }
    if(choice==13)
    {
     cprintf("Enter the new Address : ");
     gets(address);
    }
   }

   if(k==0)
   {
    k++;
    cout<<"WRONG CHOICE";
   }
   textcolor(2432);

   gotoxy(4,22);
   cprintf( "                      PRESS ANY KEY TO CONTINUE  ");
  }
 };



 void modify()
 {
  void list(int &c);
  void listmodify(int &c);
  void listdelete();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setbkcolor(CYAN);
  settextstyle(1,0,5);
  outtextxy(1,50, " WHAT DO YOU WANNA DO ? ");
  settextstyle(7,0,4);
  outtextxy(3,175," 1 :  To delete a record ");
  outtextxy(3,225," 2 :  To modify the details of record");
  line(390,465,565,465);
  line(390,467,565,467);
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"\t                                         ENTER YOUR CHOICE : ";
  int choice,c=0;
  cin>>choice;
  switch(choice)
   {
    case 1:
	listdelete();
	break;
    case 2:
	listmodify(c);
	break;
   }
 }


 void listdelete()
 {

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setbkcolor(LIGHTGREEN);
  settextstyle(1,0,5);
  outtextxy(1,0, "*_*_*_*_*_*_* LIST _*_*_*_*_*_*_*");
  settextstyle(7,0,4);
  outtextxy(3,50,"ID");
  outtextxy(150,50,"NAME");
  outtextxy(350,50,"ADAAR NUMBER");
  directory d,d1;
  ifstream file;
  file.open("teledrct.dat",ios::binary);
  int i=0;
  while(file.read((char*)&d,sizeof(d)))
   {
	d.viewlist(i);
	i+=25;

   }
  file.close();
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<" ENTER THE ID OF WHOM DATA YOU WANNNA DELETE ";
  ifstream filee;
  filee.open("teledrct.dat",ios::binary);
  ofstream filetemp;
  filetemp.open("temp.dat",ios::binary);
  char id[20];
  gets(id);

  cleardevice();
  setbkcolor(LIGHTRED);
  settextstyle(10,0,5);
  outtextxy(1,18," PROCESSING..");
  outtextxy(1,200," PLEASE WAIT...");
  delay(1200);


  int returned;
  int hua=0;
  while(filee.read((char*)&d1,sizeof(d1)))
   {
     returned=d1.comparendelete(id);
     if(returned!=7)
	{
	 filetemp.write((char*)&d1,sizeof(d1));
	}
     else
	{
	  hua=1;
	}

   }
 if(hua==1)
  {
	cleardevice();
	setbkcolor(RED);
	settextstyle(7,0,7);
	outtextxy(1,18,"  GOT IT !!!!");
	delay(600);
	outtextxy(7,200,"    DELETING...");
	delay(1200);
  }

  filee.close();
  filetemp.close();
  remove("teledrct.dat");
  rename("temp.dat","teledrct.dat");

 }


 void listmodify(int &c)
 {

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setbkcolor(10);
  settextstyle(1,0,5);
  outtextxy(1,0, "*_*_*_*_*_*_* LIST _*_*_*_*_*_*_*");
  settextstyle(7,0,4);
  outtextxy(3,50,"ID");
  outtextxy(150,50,"NAME");
  outtextxy(350,50,"ADAAR NUMBER");
  directory d,d1;
  ifstream file;
  file.open("teledrct.dat",ios::binary);
  int i=0;
  while(file.read((char*)&d,sizeof(d)))
   {
	d.viewlist(i);
	i+=25;

   }
  file.close();
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  if(c)
  cout<<" ENTER THE ID OF WHOM DATA YOU WANNA SEE  ";
  else
  cout<<" ENTER THE ID OF WHOM DATA YOU WANNNA MODIFY ";
  fstream filee;
  filee.open("teledrct.dat",ios::binary|ios::in|ios::out);
  char id[20];
  gets(id);
  int k=0;
  int pos;
  while(filee.read((char*)&d1,sizeof(d1)))
  {
   d1.comparenmodify(id,k);
   pos=filee.tellg();
   filee.seekg(pos-sizeof(d1));
   filee.write((char*)&d1,sizeof(d1));
  }
  filee.close();
  getch();

 }





 void list(int &c)
 {

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setbkcolor(LIGHTBLUE);
  settextstyle(1,0,5);
  outtextxy(1,0, "*_*_*_*_*_*_* LIST _*_*_*_*_*_*_*");
  settextstyle(7,0,4);
  outtextxy(3,50,"ID");
  outtextxy(150,50,"NAME");
  outtextxy(350,50,"ADAAR NUMBER");
  directory d,d1;
  ifstream file;
  file.open("teledrct.dat",ios::binary);
  int i=0;
  while(file.read((char*)&d,sizeof(d)))
   {
	d.viewlist(i);
	i+=25;

   }
  file.close();
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  if(c)
  cout<<" ENTER THE ID OF WHOM DATA YOU WANNA SEE  ";
  else
  cout<<" ENTER THE ID OF WHOM DATA YOU WANNNA MODIFY ";
  ifstream filee;
  filee.open("teledrct.dat",ios::binary);
  char id[20];
  gets(id);
  int k=0;
  while(filee.read((char*)&d1,sizeof(d1)))
  {
   d1.compare(id,k);
  }
  if(k==0)
  {
    cout<<" WRONG CHOICE";
    getch();
  }
  filee.close();

 }



 void start()//Starting of the program.
 {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setbkcolor(RED);
  textcolor(BLACK);
  settextstyle(1,0,6);
  outtextxy(1,175,"       PROJECT ON      ");
  outtextxy(1,230," TELEPHONE DIRECTORY   ");
  delay(2400);
  cleardevice();
  setbkcolor(CYAN);
  settextstyle(1,0,5);
  outtextxy(1,100," MADE BY               ");
  outtextxy(1,200,"   - SURAJ Kumar       ");
  delay(2400);
  closegraph();
 }


 void  main()
 {
    directory d1;
    char p;
    start();
    while(1)
    {
     menu();
     int choice;
     cin>>choice;
     closegraph();
     switch(choice)
     {
	case 1:
	 {

	   d1.enterdata();
	   cin>>p;
	   ofstream file;
	   file.open("teledrct.dat",ios::binary|ios::app|ios::ate);
	   if((p=='y')||(p=='Y'))
	   file.write((char*)&d1,sizeof(d1));
	   file.close();
	 }
	break;
	case 2:
	 {
	   int m=12;
	   list(m);
	 }
	break;
	case 3:
	 {
	   modify();
	 }
	break;
	case 4:
	 exit(0);
	break;
	default:
	cout<<"                       WRONG CHOICE ";

     }
    }
 }
