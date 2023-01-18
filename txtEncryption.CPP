#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<dos.h>

void mai();
void maii();
void z4195CA();
void main();
void z4195CD();
void csrC();
void csrCD();
void change_password();
void about();
void mainII();

void border()
{

int a,style=178;
textcolor(RED);


for(a=1;a<=80;a++)
{
gotoxy(a,2);
cprintf("%c",style);
gotoxy(a,24);
cprintf("%c",style);
 }
for(a=2;a<=23;a++)
{
gotoxy(1,a);
cprintf("%c",style);

gotoxy(80,a);
cprintf("%c",style);
}

 }

void menu(int ch)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();
	border();
		window(23,7,56,18);
		textbackground(LIGHTBLUE);
		clrscr();
	gotoxy(14,2);
	textcolor(11);
	cprintf("Main menu ");

	gotoxy(1,3);
	for(int n=1;n<35;n++)
	{
	cprintf("=");
	 }

	gotoxy(1,11);
	for( n=1;n<35;n++)
	{
	cprintf("=");
	 }

	 gotoxy(1,9);
	 cprintf("||   ||                         ||");
	 gotoxy(1,10);
	 cprintf("||   ||                         ||");

	 gotoxy(1,4);
	 cprintf("||   ||                         ||");

	int i=0,j=5;
	char m[5][40]={"|| 1 || Encrypt                 ||","|| 2 || Decrypt                 ||","|| 3 || Chang password          ||","|| 4 || About                   ||","|| 5 || Exit                    ||"};
	while(i<5)
	{
	  if(ch==i+1)
	  {
		 textbackground(2);
		 gotoxy(1,j);
		 cprintf("%s",m[i]);
		 textbackground(0);
		 j++;
	  }
	  else
	  {
		 textbackground(BLUE);
		 gotoxy(1,j);
		 cprintf("%s",m[i]);
		 j++;
	  }
	  i++;
	}
}

void cal(int ch)
{
 switch(ch)
 {
  case 1:
  mai();
  break;

  case 2:
  maii();
  break;

  case 3:
  change_password();
  break;

  case 4:
  about();
  break;

  case 5:
  exit(0);

  default:
  break;

 }
}


//second menu
void menuu(int ch)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();
	border();

		window(23,7,56,18);
		textbackground(BLACK);
		clrscr();
	clrscr();
	gotoxy(10,2);
	textcolor(GREEN);
	cprintf("--> Encrypt <--");
	textcolor(11);
	gotoxy(1,3);
	for(int n=1;n<35;n++)
	{
	cprintf("=");
	 }


	gotoxy(1,9);
	for( n=1;n<35;n++)
	{
	cprintf("=");
	 }


	 gotoxy(1,8);
	 cprintf("||   ||                         ||");

	 gotoxy(1,4);
	 cprintf("||   ||                         ||");

	int i=0,j=5;
	char m[3][40]={"|| 1 || Z4895                   ||","|| 2 || Ceaser cipher           ||","|| 3 || Back                    ||"};
	while(i<3)
	{
	  if(ch==i+1)
	  {
		 textbackground(2);
		 gotoxy(1,j);
		 cprintf("%s",m[i]);
		 textbackground(0);
		 j++;
	  }
	  else
	  {
		 textbackground(BLACK);
		 gotoxy(1,j);
		 cprintf("%s",m[i]);
		 j++;
	  }
	  i++;
	}
}


void call(int ch)
{
 switch(ch)
 {
  case 1:
  z4195CA();
  break;

  case 2:
  csrC();
  break;

  case 3:
  mainII();
  break;

  default:
  break;

 }
}

//third menu
void menuuu(int ch)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();
	border();

		window(23,7,56,18);
		textbackground(BLACK);
		clrscr();
	clrscr();
	gotoxy(10,2);
	textcolor(GREEN);
	cprintf("--> Decrypt <--");
	textcolor(11);

	gotoxy(1,3);
	for(int n=1;n<35;n++)
	{
	cprintf("=");
	 }


	gotoxy(1,9);
	for( n=1;n<35;n++)
	{
	cprintf("=");
	 }


	 gotoxy(1,8);
	 cprintf("||   ||                         ||");

	 gotoxy(1,4);
	 cprintf("||   ||                         ||");

	int i=0,j=5;
	char m[3][40]={"|| 1 || Z4895                   ||","|| 2 || Ceaser cipher           ||","|| 3 || Back                    ||"};
	while(i<3)
	{
	  if(ch==i+1)
	  {
		 textbackground(2);
		 gotoxy(1,j);
		 cprintf("%s",m[i]);
		 textbackground(0);
		 j++;
	  }
	  else
	  {
		 textbackground(BLACK);
		 gotoxy(1,j);
		 cprintf("%s",m[i]);
		 j++;
	  }
	  i++;
	}
}


void calll(int ch)
{
 switch(ch)
 {
  case 1:
  z4195CD();
  break;

  case 2:
  csrCD();
  break;

  case 3:
  mainII();
  break;


  default:
  break;

 }
}





void main()
{

	//for password

	char pass[30],original[30],ch;
	int i;
	FILE *fp;
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	//for small portion

	window(20,10,60,16);
	textbackground(BLUE);
	clrscr();
	gotoxy(4,4);
	textcolor(LIGHTRED);
	cprintf("Enter the password : ");

	i=0;
	while(1)
	{
		ch=getch();
		if(ch==13) //ascii of enter
			{
				pass[i]='\0';  //null
				break;
			}
				int j=0;
			int c=1;
			while(!kbhit() && c<10)
			{
				if(j==9)
					j=0;
					delay(80);
				  printf("%d",j);
					j++;
					printf("\b");
					c++;
			}


	  pass[i++]=ch;
	  printf("*");

	}

	//reading data from the file

	fp=fopen("password.dat","r");
	fgets(original,30,fp);
  //	fclose(fp);

  fclose(fp);


	if(!strcmp(original,pass)==0)
	{
		textcolor(RED+BLINK);
		gotoxy(4,4);
		cprintf("Incorrect password,press any key...");
		getch();
		exit(0);

	}


else
{


  window(1,1,80,25);
  clrscr();
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"\\turbo3\\bgi");

  setcolor(YELLOW);
  setbkcolor(RED);
  //setbkcolor(DARKGRAY);
  settextstyle(1,0,7);
  outtextxy(150,50,"..WELCOME..");

  //loading

	settextstyle(4,0,4);
	outtextxy(80,370,"loading");


	settextstyle(10,0,2);   //font position size
	outtextxy(75,135,"Text Encryptor And Decryptor");



	settextstyle(1,0,1);
	outtextxy(400,445,"Prepared by : z4195");


  //delay

	  gotoxy(25,25);

int p;
for(p=1;p<=40;p++)
{
printf("%c",220);
delay(90);
}

closegraph();
 }

 window(1,1,80,25);
 clrscr();

 i=1;
 menu(1);
 ch=' ';
 while(1)
 {
 menu(i);
 ch=getch();
 switch(ch)
 {
  case 72:
  if(i!=1)
  {
  i--;
  menu(i);
  }
  break;

  case 80:
  if(i!=5)
  {
  i++;
  menu(i);
  }
  break;

 case 13:
 cal(i);
 break;

 case 27:
 exit(1);

 }
 }
}

void mai()
{
window(1,1,80,25);
textbackground(BLACK);
clrscr();
 int i=1;
 menuu(1);
 char ch=' ';
 while(1)
 {
 menuu(i);
 ch=getch();
 switch(ch)
 {
  case 72:
  if(i!=1)
  {
  i--;
  menuu(i);
  }
  break;

  case 80:
  if(i!=3)
  {
  i++;
  menuu(i);
  }
  break;

 case 13:
 call(i);
 break;

 case 27:
 exit(1);

 }
 }

}

void maii()
{
window(1,1,80,25);
textbackground(BLACK);
clrscr();
 int i=1;
 menuuu(1);
 char ch=' ';
 while(1)
 {
 menuuu(i);
 ch=getch();
 switch(ch)
 {
  case 72:
  if(i!=1)
  {
  i--;
  menuuu(i);
  }
  break;

  case 80:
  if(i!=3)
  {
  i++;
  menuuu(i);
  }
  break;

 case 13:
 calll(i);
 break;

 case 27:
 exit(1);

 }
 }

}

void z4195CA()
{
	 window(1,1,80,25);
	 textbackground(BLACK);
	 clrscr();
	 border();
	 gotoxy(28,3);
	 textcolor(GREEN);
	 cprintf("Text encryption method : Z4195");

	 gotoxy(2,4);
	for(int na=1;na<79;na++)
	{
	printf("=");
	 }
	 char ptxt[200], ctxt[200],pass[20];
	 int a[20],i;
	 encrypt:
	 gotoxy(2,5);
	 textcolor(LIGHTBLUE);
	 cprintf("Enter the text you want to encrypt:");
	 gotoxy(2,6);
	 scanf(" %[^\n]",&ptxt);

	gotoxy(2,14);
	for( na=1;na<79;na++)
	{
	printf("=");
	 }
	gotoxy(2,12);
	for( na=1;na<79;na++)
	{
	printf("=");
	 }

	 gotoxy(2,13);
	 cprintf("Enter the password(8) :");
	// gotoxy(1,8);
	 scanf("%s",&pass);


	 for(i=0;i<8;i++)
	 {
		  if(pass[i] >= 'a' && pass[i] <= 'i')
		  {
			 a[i] = pass[i] - 97;
		  }
		  else if(pass[i] >= 'j' && pass[i] <= 'r')
		  {
			 a[i] = pass[i] - 106;
		  }
		  else if(pass[i] >= 's' && pass[i] <= 'z')
		  {
			 a[i] = pass[i] - 115;
		  }
		  else if(pass[i] >= 'A' && pass[i] <= 'I')
		  {
			 a[i] = pass[i] - 65;
		  }
		  else if(pass[i] >= 'J' && pass[i] <= 'R')
		  {
			 a[i] = pass[i] - 74;
		  }
		  else if(pass[i] >= 'S' && pass[i] <= 'Z')
		  {
			 a[i] = pass[i] - 83;
		  }
		  else if(pass[i] >= '0' && pass[i] <= '9')
		  {
			 a[i] = pass[i] - 48;
		  }
	 }
	 a[8] = 2467;
	 i=0;int j=0;
	 while(ptxt[i] != '\0' && strlen(ptxt) > i)
	 {

		if(a[j] != a[8])
		{
		  if(ptxt[i] >= '0' && ptxt[i] <= '9')
		  {
			 if(ptxt[i] + a[j] > '9')
			  {
				 ctxt[i] = ptxt[i] + a[j] - 10;
			  }
			  else
			  {
				 ctxt[i] = ptxt[i] + a[j];
			  }
		  }
		 else if(ptxt[i] >= 'a' && ptxt[i] <= 'z')
		  {
			 if(ptxt[i] + a[j] > 'z')
			  {
				 ctxt[i] = ptxt[i] + a[j] - 26;
			  }
			 else
			  {
				 ctxt[i] = ptxt[i] + a[j];
			  }
		  }
		 else if(ptxt[i] >= 'A' && ptxt[i] <= 'Z')
		  {
			 if(ptxt[i] + a[j] > 'Z')
			  {
				 ctxt[i] = ptxt[i] + a[j] - 26;
			  }
			 else
			  {
				 ctxt[i] = ptxt[i] + a[j];
			  }
		  }
		  else if(ptxt[i] == ' ')
		  {
			 ctxt[i] = ' ';
		  }
		}
		else if(a[j] == a[8])
		{
		  j=0;
		  if(ptxt[i] >= '0' && ptxt[i] <= '9')
		  {
			 if(ptxt[i] + a[j] > '9')
			  {
				 ctxt[i] = ptxt[i] + a[j] - 10;
			  }
			  else
			  {
				 ctxt[i] = ptxt[i] + a[j];
			  }
		  }
		  else if(ptxt[i] >= 'a' && ptxt[i] <= 'z')
		  {
			 if(ptxt[i] + a[j] > 'z')
			  {
				 ctxt[i] = ptxt[i] + a[j] - 26;
			  }
			 else
			  {
				 ctxt[i] = ptxt[i] + a[j];
			  }
		  }
		  else if(ptxt[i] >= 'A' && ptxt[i] <= 'Z')
		  {
			 if(ptxt[i] + a[j] > 'Z')
			  {
				 ctxt[i] = ptxt[i] + a[j] - 26;
			  }
			 else
			  {
				 ctxt[i] = ptxt[i] + a[j];
			  }
		  }
		  else if(ptxt[i] == ' ')
		  {
			 ctxt[i] = ' ';
		  }
		}
		j++;
		i++;
	 }
		 gotoxy(2,15);
		 cprintf("The encrypted message is: ");
		 textcolor(LIGHTBLUE);
		 printf("%s",ctxt);
		 getch();

		 //clearing previous data

		for(i=0;i<200;i++)
		{
			ctxt[i]=0;
		}
}

void z4195CD()
{
window(1,1,80,25);
textbackground(BLACK);
	clrscr();
	border();

	 gotoxy(28,3);
	 textcolor(GREEN);
	 cprintf("Text Decryption method : Z4195");

	gotoxy(2,4);
	for(int na=1;na<79;na++)
	{
	printf("=");
	 }


	 char ptxt[200], ctxt[200],pass[20];
	 int a[20],i;
	 gotoxy(2,5);
	 textcolor(LIGHTBLUE);
	 cprintf("Enter the text you want to decrypt:");
	 gotoxy(2,6);
	 scanf(" %[^\n]",&ctxt);


	gotoxy(2,14);
	for(na=1;na<79;na++)
	{
	printf("=");
	 }
	gotoxy(2,12);
	for( na=1;na<79;na++)
	{
	printf("=");
	 }

	 gotoxy(2,13);
	 cprintf("Enter the password used for decryption :");
	 scanf(" %s",&pass);
	 for(i=0;i<8;i++)
	 {
		  if(pass[i] >= 'a' && pass[i] <= 'i')
		  {
			 a[i] = pass[i] - 97;
		  }
		  else if(pass[i] >= 'j' && pass[i] <= 'r')
		  {
			 a[i] = pass[i] - 106;
		  }
		  else if(pass[i] >= 's' && pass[i] <= 'z')
		  {
			 a[i] = pass[i] - 115;
		  }
		  else if(pass[i] >= 'A' && pass[i] <= 'I')
		  {
			 a[i] = pass[i] - 65;
		  }
		  else if(pass[i] >= 'J' && pass[i] <= 'R')
		  {
			 a[i] = pass[i] - 74;
		  }
		  else if(pass[i] >= 'S' && pass[i] <= 'Z')
		  {
			 a[i] = pass[i] - 83;
		  }
		  else if(pass[i] >= '0' && pass[i] <= '9')
		  {
			 a[i] = pass[i] - 48;
		  }
	 }
	 a[8] = 2467;
	 i=0;int j=0;
	 while(ctxt[i] != '\0' && strlen(ctxt) > i)
	 {

		if(a[j] != a[8])
		{
		  if(ctxt[i] >= 'a' && ctxt[i] <= 'z')
		  {
			 if(ctxt[i] - a[j] < 'a')
			  {
				ptxt[i] = ctxt[i] - a[j] + 26;
			  }
			 else
			  {
				ptxt[i] = ctxt[i] - a[j];
			  }
		  }
		  if(ctxt[i] >= 'A' && ctxt[i] <= 'Z')
		  {
			 if(ctxt[i] - a[j] < 'A')
			  {
				ptxt[i] = ctxt[i] - a[j] + 26;
			  }
			 else
			  {
				ptxt[i] = ctxt[i] - a[j];
			  }
		  }
		  if(ctxt[i] >= '0' && ctxt[i] <= '9')
		  {
			 if(ctxt[i] - a[j] < '0')
			  {
				ptxt[i] = ctxt[i] - a[j] + 10;
			  }
			 else
			  {
				ptxt[i] = ctxt[i] - a[j];
			  }
		  }
		  if(ctxt[i] == ' ')
		  {
			 ptxt[i] = ' ';
		  }
		}
		else if(a[j] == a[8])
		{
		  j=0;
		  if(ctxt[i] >= 'a' && ctxt[i] <= 'z')
		  {
			 if(ctxt[i] - a[j] < 'a')
			  {
				ptxt[i] = ctxt[i] - a[j] + 26;
			  }
			 else
			  {
				ptxt[i] = ctxt[i] - a[j];
			  }
		  }
		  if(ctxt[i] >= 'A' && ctxt[i] <= 'Z')
		  {
			 if(ctxt[i] - a[j] < 'A')
			  {
				ptxt[i] = ctxt[i] - a[j] + 26;
			  }
			 else
			  {
				ptxt[i] = ctxt[i] - a[j];
			  }
		  }
		  if(ctxt[i] >= '0' && ctxt[i] <= '9')
		  {
			 if(ctxt[i] - a[j] < '0')
			  {
				ptxt[i] = ctxt[i] - a[j] + 10;
			  }
			 else
			  {
				ptxt[i] = ctxt[i] - a[j];
			  }
		  }
		 if(ctxt[i] == ' ')
		  {
			 ptxt[i] = ' ';
		  }
		}
		j++;
		i++;
	 }
	 gotoxy(2,15);
	 cprintf("The decrypted message is :");
	 printf("%s",ptxt);
	 getch();
	 for(i=0;i<200;i++)
	 {
	 ptxt[i]=0;

	  }
}


void csrC()
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();
	border();

		 gotoxy(23,3);
	 textcolor(GREEN);
	 cprintf("Text Encryption method : Ceaser cipher");

	gotoxy(2,4);
	for(int na=1;na<79;na++)
	{
	printf("=");
	 }


	 int key, i=0;
	 char ptxt[200],ctxt[200];
	 gotoxy(2,5);
	 textcolor(LIGHTBLUE);
	 cprintf("Enter the message you want to encrypt:");
	 gotoxy(2,6);
	 scanf(" %[^\n]",&ptxt);


	gotoxy(2,14);
	for(na=1;na<79;na++)
	{
	printf("=");
	 }
	gotoxy(2,12);
	for( na=1;na<79;na++)
	{
	printf("=");
	 }

	 gotoxy(2,13);
	 cprintf("Enter the code number :");
	 scanf(" %d",&key);


	 while(key>26)
	 {
	 if(key>26 && key%26 != 0)
	 {
		  key = key%26;
	 }
	 else if(key%26 == 0)
	 {
		  key = key/26;
	 }
	 else
	 {
		  key = key;
	 }
	 }
	 //encryption begins
	 while(ptxt[i] != '\0' && strlen(ptxt) > i)
	 {
		if(ptxt[i] == ' ')
		  {
			 ctxt[i] = ' ';
		  }
		else if(ptxt[i]>='a' && ptxt[i]<='z')
		{
		  if(ptxt[i] + key > 'z')
		  {
			  ctxt[i] = ptxt[i] + key - 26;
			  /*say z=25(a=0.....z=25) and key=3, then z+key=28
				when key=3, subsitution of z should be c whose value would be 2
				but we get 28 so to get the right value we subtract it by 26 when the value of z+key is more than value of z
				28-26=2 */
		  }
		  else
				ctxt[i] = ptxt[i] + key;
		}
	  else if(ptxt[i]>='A' && ptxt[i]<='Z')
	  {
		  if(ptxt[i] + key > 'Z')
				{
				ctxt[i] = ptxt[i] + key - 26;
				}
		  else
				ctxt[i] = ptxt[i] + key;
		  }
	  else if(ptxt[i]>='0' && ptxt[i]<='9')
		  {
				int nkey;
				nkey=key%10;
				if(ptxt[i] + nkey > '9')
				{
				 ctxt[i] = ptxt[i] + nkey - 10;
				}
			else
				ctxt[i] = ptxt[i] + nkey;
		  }

		i++;
	 }
	 gotoxy(2,15);
	 cprintf("The encrypted text is :");
	 textcolor(LIGHTBLUE);
	 printf("%s",ctxt);
	 getch();
	 for(i=0;i<200;i++)
	 {
	 ctxt[i]=0;

	  }
}



void csrCD()
{
		window(1,1,80,25);
	textbackground(BLACK);
	clrscr();
	border();

		 gotoxy(23,3);
	 textcolor(GREEN);
	 cprintf("Text Decryption method : Ceaser cipher");

	gotoxy(2,4);
	for(int na=1;na<79;na++)
	{
	printf("=");
	 }
	 textcolor(LIGHTBLUE);
	 int key, i=0;
	 char ptxt[200],ctxt[200];
	 gotoxy(2,5);
	 cprintf("Enter the message you want to decrypt:");
	 gotoxy(2,6);
	 scanf(" %[^\n]",&ctxt);

	gotoxy(2,14);
	for(na=1;na<79;na++)
	{
	printf("=");
	 }
	gotoxy(2,12);
	for( na=1;na<79;na++)
	{
	printf("=");
	 }

	 gotoxy(2,13);
	 cprintf("Enter the code number :");
	 scanf(" %d",&key);

	 //restricting the value of key
	 while(key>26)
	 {
	 if(key>26 && key%26 != 0)
	 {
		  key = key%26;
	 }
	 else if(key%26 == 0)
	 {
		  key = key/26;
	 }
	 else
	 {
		  key = key;
	 }
	 }
	 //decrption starts
	 while(ctxt[i] != '\0' && strlen(ctxt) > i)
	 {
		if(ctxt[i] == ' ')
		  {
				ptxt[i] = ' ';
		  }
		else if(ctxt[i]>='a' && ctxt[i]<='z')
		{
		  if(ctxt[i] - key < 'a')//if the ctxt+key is less than a(0 0r 97 in asci) we get a special symbol and not an alphabet
		  {
			  ptxt[i] = ctxt[i] - key + 26;
		  }
		  else
			  ptxt[i] = ctxt[i] - key;
		}
	  else if(ctxt[i]>='A' && ctxt[i]<='Z')
	  {
		  if(ctxt[i] - key < 'A')
				{
				ptxt[i] = ctxt[i] - key + 26;
				}
		  else
				ptxt[i] = ctxt[i] - key;
		  }
	  else if(ctxt[i]>='0' && ctxt[i]<='9')
		  {
				int nkey;
				nkey=key%10;
				if(ctxt[i] - nkey < '0')
				{
				 ptxt[i] = ctxt[i] - nkey + 10;
				}
				else
				 ptxt[i] = ctxt[i] - nkey;
		  }

		i++;
	 }
	 gotoxy(2,15);
	 cprintf("The encrypted text is :");
	 textcolor(LIGHTBLUE);
	 printf("%s",ptxt);
	 getch();
	 for(i<0;i<200;i++)
	 {
	 ptxt[i]=0;
	 }

}



void change_password()
{
	FILE *fp;
	char current[30],original[30],newpass[30],confirm[30];

	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();
	border();

	gotoxy(35,3);
	textcolor(11);
	cprintf("Change password");
	textcolor(RED);
	//for top line
	gotoxy(2,4);
	for(int i=0;i<78;i++)
	{
		cprintf("%c",205);
	}

	textcolor(LIGHTBLUE);
	gotoxy(3,6);
	cprintf("Enter new password : ");
	scanf("%s",newpass);

	gotoxy(3,8);
	cprintf("Re-Enter password  : ");
	scanf("%s",confirm);


	if(strcmp(confirm,newpass)!=0)
		{
			textcolor(RED+BLINK);
			gotoxy(3,11);
			cprintf("Not match,press any key.....");
			getch();
			return;

		}

	fp=fopen("password.dat","w");
	fprintf(fp,"%s",newpass);
	fclose(fp);
  gotoxy(3,11);
  textcolor(RED+BLINK);
  cprintf("successfully updated,press any key....");
  getch();
}

void about()
{
window(1,1,80,25);
textbackground(BLACK);
clrscr();
border();
gotoxy(3,3);
textcolor(YELLOW);
cprintf("How it works ?");
gotoxy(2,5);
delay(500);
char text[500]={" The program takes two input, a plaintext message and a key. It then changes \n  the ASCII value of the message as per the key. In both methods the key is \n  added to the message to encrypt and is subtracted from to decrypt. But the \n  process  of adding the key is different in the two methods. In Ceasar Cipher\n  the key is added directly to the message whereas in the 2nd method the first\n  number of the key is added to the first letter of the message and so on."};
printf("%s",text);
border();

gotoxy(30,17);
textcolor(RED+BLINK);
cprintf("Press any key......");

getch();

}
 //for back

void mainII()
{

 window(1,1,80,25);
 clrscr();


 int i=1;
 menu(1);
 char ch=' ';
 while(1)
 {
 menu(i);
 ch=getch();
 switch(ch)
 {
  case 72:
  if(i!=1)
  {
  i--;
  menu(i);
  }
  break;

  case 80:
  if(i!=5)
  {
  i++;
  menu(i);
  }
  break;

 case 13:
 cal(i);
 break;

 case 27:
 exit(1);

 }
 }
}


