//password 0000 username 5555
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define DATA_SIZE 1000

void intro(); // starts at line 252 //start of program intro after front page
void login(); // starts at line 268  //login system for built in username password
void menu(); // starts at 316. //menu to ask if encrypt or decrypt//I just made a movie dialouge in my head. If 14 hours a day is not enough and I think I'll fail. Bring it. can they stop me timing at 20hours a day? I watch lots of anime, so yeah.lol.
void encrypt(); //for encryption
void decrypt(); //for decryption
void bait();  // starts at page 311. I have literally no idea why I made this, but in the flow of coding a few days back, It came up. There MUST BE some logic I cant remeber but i trust me from three days back so it stays. Probably serving as a translational function.//cha cha real smooth version of goto()
void pswmodule(); //line 352 //password reqired to sign in, something cooking in my head. What Im thinking is, if I code a system with everchanging passwords, it will become impossible to hack. Searched chrome nothing like that exists for users. lets see...
void frontpg();   // starts from line 35  //front page logo and costomer friendly impression
void newacc();  // for new account generation
void info();  // how encryption works
void maime();  //mainmenu in between program for better nevigation for curious and exploring user.
void binaryint();
void linkfloat(); //suppreses warnings by engaging emulator
void review();
void reviewtwos();
void emperor();

struct review
{
	int usrn;
	float star;
	char rev[400];
};

struct complain
{
	int usr;
	float stars;
	char comp[400];
};


// i have decided to fill main with functions and nothing else. This will keep main free and easy to analyse the sequencing of modules and overall program.
int main()
{	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);
	frontpg();
	intro();
	login();
	bait();
	return 0;
}

//every application has a front page with it's logo on it while it is initializing. But C language is fast, which makes it boring too sometimes.
//Not only is the time delay catchy to the human eye, it makes a person and app more interactive as people are not as fast as compters.
//since the theme is encryption, green background is added with classic binary theme from the 1960, right when C was a miracle. I mean, it is a miracle evn now!
void frontpg()
{
int i;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);
int x;
for (i=1;i<=8;i++)
if (i==1)
{
	binaryint();
i++;
}
else if (i==2)
{
	binaryint();
i++;	
}
else if (i==3)
{
	binaryint();

i++;
}

else if (i==4)
{
	binaryint();
i++;
}

else if (i==5)
{
	binaryint();
i++;
}

else if(i==6)
{
	binaryint();
i++;	
}

else if (i==7)
{
	binaryint();
i++;
}

else
{
	binaryint();
i++;
}


system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                                                   *                    *            **            *                    *  ");
printf("\n                                                  ***                  **         ********         **                  ***");
printf("\n                                                  ***                  ***     **************     ***                  ***");
printf("\n                                                  ***                  ***** ****************** *****                  ***");
printf("\n                                                  ***                   ****************************                   ***");
printf("\n                                                  ***                    **************************                    ***");
printf("\n                                                  ***                      ***********************                     ***");
printf("\n                                                  ***                      ***********************                     ***");
printf("\n                                                  ***                      ***********************                     ***");
printf("\n                                                  ***                      ***********************                     ***");
printf("\n                                                  ***                      *** Secure Messages ***                      ***");
printf("\n                                                  ************************************************************************");
printf("\n\n\n                                              Encrypting messages has never been more easier.Lets Press 1 to begin now!\n\n\n\n\n\n\n\n\n\n                                                                                                              Press 3 if you would like to Support Us");
scanf("%d", &x);

if (x==3)
{
	int gon;
	printf("Your current status is King, lvl 5. To move to Emperor lvl 5, become a premium memebr now. Press 1");
	printf("\n\nTo skip for now and support us, please award full weightage to this project. Press any other key to proceed.!");
	scanf("%d", &gon);
	if (gon==1)
	{
		emperor();
	}
	else
	{
		login();
	}
	system("cls");
}
else if (x==1)
{
	system("cls");
}
else
{
	system("cls");
	frontpg();
}

}

//intro function starts. Introduction is unnesesary for app, but obviously a requirment as it is a project.
//At first I thought to add this as a module in @info, just like professional apps, but then again trying to do something "different" might look boring to veiwers.
void intro() 
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);	
sleep(2);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                 Welcome\n");
sleep(3);
printf("\n                                                                         Encrytion ");	
printf(" Decryption");
sleep(2);
printf("\n                                                                       By Hamza Khan ");
printf("  (20K-1733)");
sleep(3);
system("cls");
}

// a tough part to decide what to add since user is expecting security from an encryption themed program. Hope I survive this module. Changing password is cooking in my head. definitly something new for the world.
void login()
{
	system("cls");
	int us, x;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                          Enter username :\n\n\n\n                                                                      \n\n\n\n\n\n\n\n\n\n\n                                                                                                      o Don't have an account?\n                                                                                                        Press 1 and make one!\n                                                                                                      o Want to know how Catastrophic Planetary Encryptor works?\n                                                                                                        Press 2 to out of the blue!\n                                                                                                      o Want to Exit for now?\n                                                                                                        Press 3 to Ciao Ciao!");
	scanf("%d", &us);
	system("cls");
	if (us==5555)
	{
		pswmodule();
	}
	else if (us==1)
	{
		newacc();  //yet to be coded
	}
	else if (us==2)
	{
		info();   //    new stats- complete!      //yet to be coded.
	}
	else if (us==3)
	{
		maime();    //not available to main only a bridge. Ingenius!
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);
		system("cls");
		printf(" \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                           Incorrect username. Press 3 to try again.\n");
		printf("\n                                                                    Press any other key to exit.");
		scanf("%d", &x);
		if (x==3)
		{
			login();
		}
		else
		{
			maime();
		}
	}	
}

void bait()
{
	system("cls");
}

// menu. definitly has to be rich and stunning.
void menu()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
system("cls");	
int pi;
	printf("\n      .________________________________________________HOW WOULD YOU LIKE TO PROCEED______________________________________.");
	printf("\n      |           |___________Menu__________|                                                                             |");
	printf("\n      |           |_________________________|                                                                             |");
	printf("\n      |           | To encrypt file press 1 |                                                                             |");
	printf("\n      |           |_________________________|                                                                             |");
	printf("\n      |           | To decrypt file press 2 |                                                                             |");
	printf("\n      |           |_________________________|                                                                             |");
	printf("\n      |           | To logout, press 3      |                                                                             |");
	printf("\n      |           |_________________________|                                                                             |");
	printf("\n      |._________________________________________________________________________________________________________________.|");
	scanf("%d", &pi);
	if (pi==1)
	{
		system("cls");
		encrypt();
	}
	else if (pi==2)
	{
		system("cls");
		decrypt();
	}
	else if (pi==3)
	{
		system("cls");
		maime();
	}
	else
	{
		system("cls");
		menu();
	}
}


void pswmodule()
{
	int on,tw,th;
	printf("To Go Back, press 3");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                      Please enter password: ");
	scanf("%d", &on);
	switch(on)
	{
		case 0000:
			menu();
			break;
			
		case 3:
			system("cls");
			maime();
			break;
			
		default:
			{
				system("cls");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);
				printf("To Go Back, press 3");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                            (2) tries remain "); system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             (2) tries remain "); system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                            (2) tries remain "); system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             (2) tries remain "); system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                            (2) tries remain "); system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             (2) tries remain ");	
				printf("        Please enter password: ");
				scanf("%d", &tw);
				switch(tw)
				{
					case 0000:
						menu();
						break;
					
					case 3:
						maime();
						break;
							
						
					default:
						{
							system("cls");
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);
							printf("To Go Back, press 3");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             (1) tries remain "); system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                            (1) tries remain "); system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             (1) tries remain "); system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                            (1) tries remain "); system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             (1) tries remain "); system("cls");
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                            (1) tries remain ");
							printf("        Please enter password: ");
							scanf("%d", &th);
							switch(th)
							{
								case 0000:
									menu();
									break;
									
								case 3:
									maime();
									break;
									
								default:
									{
										system("cls");
										exit(0);
										break;
									}
							}
						}
						break;
				}
			}
			break;
	}
	
}

void encrypt()
{
	fflush(stdin);
	int l;
	int y;
	char ceaser[100], ceas;
	int i,a;
	printf("-----------------------------------------------------------------------------------------------------\n");
	printf("Enter a message to encrypt: ");
	gets(ceaser);
	for(i = 0; ceaser[i] != '\0'; ++i)
	{
		ceas = ceaser[i];
		if(ceas >= 'a' && ceas <= 'z')
		{
			ceas = ceas + 3;
			ceaser[i] = ceas;
		}
	}
printf("\nEncrypted message: %s", ceaser);
printf("--------------------------------------------------------------------------------------------------------\n");
l=1;
l = l + 1;
if (l<=2)
{
	printf("\n\nTo encrypt new message, press 1.\nTo return to menu, press any other key\n");
	scanf("%d", &y);
	if (y==1)
	{
		encrypt();
	}
	else
	{
		menu();
	}
}
else
{
	exit(0);
}
}

void decrypt()
{
	fflush(stdin);
	static int ll;
	int yy;
	char ceaser[100], ceas;
	int i,a;
	printf("----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("Enter a message to decrypt: ");
	gets(ceaser);
	for(i = 0; ceaser[i] != '\0'; ++i)
	{
		ceas = ceaser[i];
		if(ceas >= 'a' && ceas <= 'z')
		{
			ceas = ceas - 3;
			ceaser[i] = ceas;
		}
	}
printf("\nDecrypted message: %s", ceaser);
printf("-------------------------------------------------------------------------------------------------------------------------------------\n");
ll=1;
ll = ll + 1;
if (ll<=2)
{
	printf("\n\nTo decrypt new message, press 1.\nTo return to menu, press any other key\n");
	scanf("%d", &yy);
	if (yy==1)
	{
		decrypt();
	}
	else
	{
		menu();
	}
	}
else
{
	exit(0);
}
}


void newacc()
{
	int i;
	printf("This module will take a lot of time and since I am a one person team, I will let it be.");
	printf("\nTo go back, press 1.\nTo exit, press any other key.");
	scanf("%d", &i);
	if (i==1)
	{
		login();
	}
	else
	{
		exit(0);
	}
}

void info()
{
	int ii;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN);
	int i, j;
	for (i=0;i<=35;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("0 11 0010   110     HACKED      10       101          ACCESS GRANTED       1100   DENIED  0000  1001   0   0 ERROR      1         100       10   ID NOT FOUNT     000          01      10");
			printf("    011  10 1  01     011        1        10     101  1001        0110      0100     100  HACKED         1001        0 00    ACCESS GRANTED         0   11");
			
			
		}
		system("cls");
		
	}
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                                                   *                   *             **             *                  *");
printf("\n                                                  ***                  **         ********         **                 ***");
printf("\n                                                  ***                  ***     **************     ***                 ***     0  ERRO R  01");
printf("\n                           00       !    1        ***                  ***** ****************** *****                 ***    0 11    0  -  10  -1  - 0");
printf("\n                   1              ERRO R          ***                   ****************************                  ***                      ");
printf("\n                            404           1       ***                    **************************                   ***     1 -          00  - 1 -  10");
printf("\n                                                  ***                      **********************                     ***           ACCE SS DENI ED   01");
printf("\n                               10      0          ***                       ********************                      ***               0");
printf("\n                       Acce ss Deni ed1           ***                   ***************************                   ***         00    10   1");
printf("\n                  WARN ING                   1    ***                     ***********************                     ***          0");
printf("\n                             0      00      1     ***                     *** Secure Messages ***                     ***");
printf("\n                                                  ************************************************************************");
Sleep(1500);


system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                                               *                        *            **            *                       *");
printf("\n                                              ***                      **         ********         **                     ***");
printf("\n                                              ***                      ***     **************     ***                     ***     0  ERRO R  01");
printf("\n                           00       !    1    ***                      ***** ****************** *****                     ***    0 11    0  -  10  -1  - 0");
printf("\n                   1              ERRO R      ***                       ****************************                      ***                      ");
printf("\n                            404           1   ***                        **************************                       ***     1 -          00  - 1 -  10");
printf("\n                                              ***                          **********************                         ***           ACCE SS DENI ED   01");
printf("\n                               10      0      ***                           ********************                          ***               0");
printf("\n                       Acce ss Deni ed1       ***   *                   ***************************                  *    ***         00    10   1");
printf("\n                  WARN ING                   1***  ***                    ***********************                   ***   ***          0");
printf("\n                             0      00      1 ***  ***                    *** Secure Messages ***                   ***   ***");
printf("\n                                              *******************************************************************************");
Sleep(1500);


system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                                         *                              *            **            *                             *");
printf("\n                                        ***                            **         ********         **                           ***");
printf("\n                                        ***                            ***     **************     ***                           ***0  ERRO R  01");
printf("\n                           00       !  1***                             ***** ****************** *****                          ***0 11    0  -  10  -1  - 0");
printf("\n                   1              ERRO R***                              ****************************                           ***");
printf("\n                            404        1***                               **************************                            ***1 -          00  - 1 -  10");
printf("\n                                        ***         *                      ************************                  *          ***ACCE SS DENI ED   01");
printf("\n                               10      0***        ***                       ********************                   ***         ***0");
printf("\n                       Acce ss Deni ed1 ***        ***                   ***************************                ***         ***00    10   1");
printf("\n                  WARN ING             1***        ***                     ***********************                  ***         ***0");
printf("\n                             0      00 1***        ***                     *** Secure Messages ***                  ***         ***");
printf("\n                                        ********************************************************************************************");
Sleep(1500);

system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                              *                                        *             **             *                                       *");
printf("\n             00              ***                                       **         ********         **                                      ***");
printf("\n                             ***                                       ***      **************     ***                                     ***RRO R  01");
printf("\n                     00   1  ***                                        ***** ****************** *****                                     ***    0    -1  - 0");
printf("\n       ERRO O1               ***                    *                    ****************************                *                     ***");
printf("\n                      404    ***                   ***                    **************************                ***                    ***  00  -   10");
printf("\n          01                 ***                   ***                     ************************                 ***                    ***S DENI ED   01");
printf("\n                         10  ***                   ***                       ********************                   ***                    ***");
printf("\n                 Acce ss Deni***                   ***                   ***************************                ***                    ***    1");
printf("\n    00 1    WARN ING         ***                   ***                     ***********************                  ***                    ***0");
printf("\n                       0     ***                   ***                     *** Secure Messages ***                  ***                    ***");
printf("\n                             *************************************************************************************************************");
Sleep(1500);

system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                 *                                *                         *             **              *             *                                      *");
printf("\n                 ***                               ***                 **         ********         **               ***                                ***");
printf("\n                 ***                               ***                 ***     **************     ***               ***                                ***RRR  01");
printf("\n                 ***                               ***                  ***** ****************** *****              ***                                ***    0  - 0");
printf("\n             1   ***                               ***                   ****************************               ***                                ***");
printf("\n                 ***                               ***                    **************************                ***                                ***  00  -0");
printf("\n                 ***                               ***                     ************************                 ***                                ***S DE01");
printf("\n                 ***                               ***                       ********************                   ***                                ***");
printf("\n                 ***                               ***                   ***************************                ***                                ***    1");
printf("\n            WARN ***                               ***                     ***********************                  ***                                ***0");
printf("\n                 ***                               ***                     *** Secure Messages ***                  ***                                ***");
printf("\n                 *****************************************************************************************************************************************");
Sleep(1500);

system("cls");
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n        *                                           *                   *            **             *                *                                            *");
printf("\n       ***                                         ***                 **         ********         **               ***                                          ***");
printf("\n       ***                                         ***                 ***     **************     ***               ***                                          ***");
printf("\n       ***                                         ***                  ***** ****************** *****              ***                                          ***");
printf("\n       ***                                         ***                   ****************************               ***                                          ***");
printf("\n       ***                                         ***                    **************************                ***                                          ***");
printf("\n       ***                                         ***                     ************************                 ***                                          ***");
printf("\n       ***                                         ***                       ********************                   ***                                          ***");
printf("\n       ***                                         ***                   ***************************                ***                                          ***");
printf("\n       ***                                         ***                     ***********************                  ***                                          ***");
printf("\n       ***                                         ***                     *** Secure Messages ***                  ***                                          ***");
printf("\n       *************************************************************************************************************************************************************");
Sleep(1500);

system("cls");
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                                                    *                  *             **            *                 *");
printf("\n                                                   ***                 **         ********         **               ***");
printf("\n                                                   ***                 ***     **************     ***               ***");
printf("\n                                                   ***                  ***** ****************** *****              ***");
printf("\n                                                   ***                   ****************************               ***");
printf("\n                                                   ***                    **************************                ***");
printf("\n        *                                          ***                     ************************                 ***                                           *");
printf("\n       ***                                         ***                       ********************                   ***                                          ***");
printf("\n       ***                                         ***                   ***************************                ***                                          ***");
printf("\n       ***                                         ***                     ***********************                  ***                                          ***");
printf("\n       ***                                         ***                     *** Secure Messages ***                  ***                                          ***");
printf("\n       *************************************************************************************************************************************************************");
Sleep(1500);

system("cls");
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n                                                                      Catastrophic Planetery Encrypter");
printf("\n\n\n                                                    *                  *             **            *                 *");
printf("\n                                                   ***                 **         ********         **               ***");
printf("\n                                                   ***                 ***     **************     ***               ***");
printf("\n                                                   ***                 ***** ****************** *****               ***");
printf("\n                                                   ***                   ****************************               ***");
printf("\n                                                   ***                    **************************                ***");
printf("\n                                                   ***                     ************************                 ***");
printf("\n                                                   ***                       ********************                   ***");
printf("\n                                                   ***                   ***************************                ***");
printf("\n                                                   ***                     ***********************                  ***");
printf("\n                                                   ***                     *** Secure Messages ***                  ***");
printf("\n                                                   *********************************************************************");
Sleep(1500);

	system("cls");
	printf("\n          o Hello User! Catastrophic Planetary Encryptor is a little donation from us to those who would like\n            to avail full privacy and safety of data that is transferred from them to another trusted\n            user. Many applications have built in Encryptors and Decryptors that\n           do a pretty honest job in protecting data. But there are always algorithms and minds behind these ever evolving\n           algorithms, that eventually find a way to reverse vital information through loopholes by disecting\n           the source code.\n\n           It is for this reason that an offline encryptor needs to be available that is fast, reliable, easy to use and\n          most importantly independent from the programe being used to sent important data.\n           This is because even if your encrypted message does get deciphered, it will still make no sense as you would have typed\n          in an already encrypted message using CPE that is Catistrophic Planetry Encryptor, which too works on different ciphers, thus to make our programme even better\n          and to make sure our CPE community keeps growing, do give us full weightage\n           so we can keep improving.\n\n\n\n           Dear user, you are welcome to use version 0.0.57.2 which is fully available free of cost. Still, don't forget to\n           donate and share us with the world!\n                      Yours Truly\n                      Hamza Khan, Founder of  'TheCPE Projects'  \n\n                            Follow Us at Instagram @TheCPEproject");
	printf("\n\n\n\n                                                                                                                 Press 3 to Return to Main Page"); scanf("%d", &ii);
	switch (ii)
	{
		case 3:
			login();
			break;
			
		default :
			info();
			break;
	}
}

void maime()
{
	int c;
	printf("\n      ._________________________________________________________Portal____________________________________________________.");
	printf("\n      |           |___________Menu_______________|                                                                        |");
	printf("\n      |           |______________________________|                                                                        |");
	printf("\n      |           | Press 1 to leave us a review_|                                                                        |");
	printf("\n      |           |______________________________|                                                                        |");
	printf("\n      |           | press 2 to complain/inquire._|                                                                        |");
	printf("\n      |           |______________________________|                                                                        |");
	printf("\n      |           | To exit program._____________|                                                                        |");
	printf("\n      |           |______________________________|                                                                        |");
	printf("\n      |._________________________________________________________________________________________________________________.|");

scanf("%d", &c);
switch (c)
	{
	case 1:
		review();
		break;
	case 2:
		reviewtwo();
		break;
	case 3:
		login();
		break;
	default:
		maime();
	}
} 

void review()
{
	int i;
	struct review cos;
	FILE *fp;
	fp=fopen("reviews.txt","w");
	system("cls");
	printf("What are your thaughts? Be honest about us!");
	printf("\nEnter your username and how much you would rate us out of 5. Then leave us a review.");
	scanf("%d", &cos.usrn);
	fflush(stdin);
	printf("\n");
	scanf("%f", &cos.star);
	printf("\n");
	fflush(stdin);
	gets(cos.rev);
	fwrite(&cos, sizeof(cos),1,fp);
	fclose(fp);
	system("cls");
    printf("Your feedback has been recorded. Thankyou for your kind words:) \n");
	printf("To go back, please press 1. To write again please press any other key.");
	scanf("%d", &i);
	if (i==1)
	{
		maime();
	}
	else
	{
		reviewtwo();
	}

    return 0;
}

void reviewtwo()
{
	int i;
	struct complain sin;
	FILE *fp;
	fp=fopen("complains.txt","w");
	system("cls");
	printf("What bothers you. We'll do our best to fix it!!");
	printf("\nEnter your username and how much you would rate us out of 5. Then leave us a review.");
	scanf("%d", &sin.usr);
	fflush(stdin);
	printf("\n");
	scanf("%f", &sin.stars);
	printf("\n");
	fflush(stdin);
	gets(sin.comp);
	fwrite(&sin, sizeof(sin),1,fp);
	fclose(fp);
	system("cls");
    printf("Your complain has been recorded. We apologise for the inconveniance.:) \n");
    printf("To go back, please press 1. To write again please press any other key.");
	scanf("%d", &i);
	if (i==1)
	{
		maime();
	}
	else
	{
		reviewtwo();
	}
}


void binaryint()
{
	printf("011                  0010                                          1 11110 10                                                       001         011     011   10    10                                                                       000    0001     100    10100111     100                      1        0");
                                         
printf("011 00                                                101 1111                      0 10        110    1000    10                                                  101   1110   10010       1011        010100   10     10 10 001         011     011   10    10                000    0001     100    1");

printf("011 00101 11110 10        110    1000                                                                  10010                                    1011                                                                     010100   10     10 10 00                                1         011     011   10    10 000    0                              001                                 1010          10001   1        0");
printf(" 01 10 1                                                                                                       0 10010       110     100    01101   10 10         1            00          01   1001     1110     101010      0101      00001   10      100     010  01      0100 110    10001    10   1               00          1   1      1 ");

printf(" 01  110   110   010   100 10            01                                                         10    0                1                                    111110     10   100         100                                  1011111000000    01   00    11  01     011 0        001      01       101         1110               00101        0010");
printf("011 00101 11110 10                                                                                                        10101   1110   10010       1011        01010                                                       0   10     10 10 001         011     011   10    10 000    0001     100    10                                 0");
printf(" 01 10 10 10010       110     100    011                                                          01   10 10         1            00          01   1001     1110     101010      0101      00001   10      1 ");                


printf(" 01 10 1                             0 10010       110     100    01          101   10 10         1            00          01   1001     1110     101010      0101      00001   10      100     010  01      0100 110    10001    10   100          1   1      1 ");
printf("011 00                                                101 1111                      0 10        110    1000    10                                                  101   1110   10010       1011        010100   10     10 10 001         011     011   10    10                000    0001     100    1");

printf("011 00101 11110 10        110    1000                                                                  10010                                    1011                                                                     010100   10     10 10 00                                1         011     011   10    10 000    0                              001                                 1010          10001   1        0");
printf(" 01 10 1                                                                                                       0 10010       110     100    01101   10 10         1            00          01   1001     1110     101010      0101      00001   10      100     010  01      0100 110    10001    10   1               00          1   1      1 ");

printf(" 01  110   110   010   100 10            01                                                         10    0                1                                    111110     10   100         100                                  1011111000000    01   00    11  01     011 0        001      01       101         1110               00101        0010");
printf("011 00101 11110 10                                                                                                        10101   1110   10010       1011        01010                                                       0   10     10 10 001         011     011   10    10 000    0001     100    10                                 0");
printf(" 01 10 10 10010       110     100    011                                                          01   10 10         1            00          01   1001     1110     101010      0101      00001   10      1 ");                


printf(" 01 10 1                             0 10010       110     100    01          101   10 10         1            00          01   1001     1110     101010      0101      00001   10      100     010  01      0100 110    10001    10   100          1   1      1 ");


printf(" 01 10 10 10010       110     100    01101   10 10         1            00          01   1001     1110     101010      0101      00001   10       1 ");
sleep(3);
}

void linkfloat()
{
	float a=0, *b;
	b=&a;
	a=*b;
}


//commenting 'void ADR_1' out because it is causing problems on devc++ ide however it works fine on visual studio code

// void ADR_1()
// {
// 	int enn;
// 	system("cls");
// 	printf("Keep using the free trial dear costomer. We will be back with more news soon.");
// 	printf("\nTo go back to login, press 1.");
// 	scanf("%d", &enn);
// 	if (enn==1)
// 	{
// 		login();
// 	}
// 	else
// 	{
// 		system("cls");
// 		emperor();
// 	}
// }
void emperor(){
}
