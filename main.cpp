#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <dos.h>

using namespace std;

//POPITKA RANDOM SDELAT
void randomABC(int& a, int& b, int& c)
{
    for (int i=0;i<1;i++)
    {
        a=rand()%100;
        //****************************
        if (a>=0 && a<=5)
        {
            a=7;
        }
        //****************************
        else if (a>=6 && a<=15 || a==86 || a==87 || a==88 || a==89 || a==90)
        {
            a=1;
        }
        else if (a>=16 && a<=25 || a==91 || a==92 || a==93 || a==94 || a==95)
        {
            a=2;
        }
        else if (a>=26 && a<=35 || a==96 || a==97 || a==98 || a==99 || a==100)
        {
            a=3;
        }
        else if (a>=36 && a<=45)
        {
            a=4;
        }
        else if (a>=46 && a<=55)
        {
            a=5;
        }
        else if (a>=56 && a<=65)
        {
            a=6;
        }
        else if (a>=66 && a<=75)
        {
            a=8;
        }
        else if (a>=76 && a<=85)
        {
            a=9;
        }

    }
    for (int o=0;o<1;o++)
    {
        b=rand()%100;
        //****************************
        if (b>=0 && b<=5)
        {
            b=7;
        }
        //****************************
        else if (b>=6 && b<=15 || b==86 || b==87 || b==88 || b==89 || b==90)
        {
            b=1;
        }
        else if (b>=16 && b<=25 || b==91 || b==92 || b==93 || b==94 || b==95)
        {
            b=2;
        }
        else if (b>=26 && b<=35 || b==96 || b==97 || b==98 || b==99 || b==100)
        {
            b=3;
        }
        else if (b>=36 && b<=45)
        {
            b=4;
        }
        else if (b>=46 && b<=55)
        {
            b=5;
        }
        else if (b>=56 && b<=65)
        {
            b=6;
        }
        else if (b>=66 && b<=75)
        {
            b=8;
        }
        else if (b>=76 && b<=85)
        {
            b=9;
        }
    }
    for (int p=0;p<1;p++)
    {
        c=rand()%100;
        //****************************
        if (c>=0 && c<=5)
        {
            c=7;
        }
        //****************************
        else if (c>=6 && c<=15 || c==86 || c==87 || c==88 || c==89 || c==90)
        {
            c=1;
        }
        else if (c>=16 && c<=25 || c==91 || c==92 || c==93 || c==94 || c==95)
        {
            c=2;
        }
        else if (c>=26 && c<=35 || c==96 || c==97 || c==98 || c==99 || c==100)
        {
            c=3;
        }
        else if (c>=36 && c<=45)
        {
            c=4;
        }
        else if (c>=46 && c<=55)
        {
            c=5;
        }
        else if (c>=56 && c<=65)
        {
            c=6;
        }
        else if (c>=66 && c<=75)
        {
            c=8;
        }
        else if (c>=76 && c<=85)
        {
            c=9;
        }
    }
}

int main()
{
    srand(time(NULL));
    system("color 06");

    int a;
    int b;
    int c;
    a=0;
    b=0;
    c=0;

    int a1;
    a1=7;
    int b1;
    b1=7;
    int c1;
    c1=7;

    int nacDengi = 1000;
    int spin1 = 100;
    int freeSpins = 0;

    //NACALNIJ EKRANCIK
    cout << "                             -|             |-"                    << endl;
    cout << "         -|                  [-_-_-_-_-_-_-_-]                  |-" << endl;
    cout << "         [-_-_-_-_-]          |             |          [-_-_-_-_-]" << endl;
    cout << "          | 7   7 |           [  0   0   0  ]           | 7   7 |" << endl;
    cout << "           |     |    -|       | LuckyJack |       |-    |     |" << endl;
    cout << "           |     |_-___-___-___-|         |-___-___-___-_|     |" << endl;
    cout << "           |  7  ]              [    0    ]              [  7  |" << endl;
    cout << "           |     ]   L   A   S  [ _______ ]  V   E   G   [     | ----__________" << endl;
    cout << "_____----- |     ]              [ ||||||| ]              [     | " << endl;
    cout << "           |     ]              [ ||||||| ]              [     | " << endl;
    cout << "       _-_-|_____]--------------[_|||||||_]--------------[_____|-_-_ " << endl;
    cout << "      ( (__________------------_____________-------------_________) ) " << endl;
    cout << "                                                                               " << endl;

    //BAZA

    cout << "Welcome to the Las Vegas Casino!!" << endl;
    cout << "       ___________________      " << endl;
    cout << "      $   !!LUCKYJACK!!   $   " << endl;
    cout << "     $                     $      " << endl;
    cout << "    $________|"<<a1<<"|"<<b1<<"|"<<c1<<"|________$    " << endl;
    cout << "    |_______________________|     " << endl;
    cout << "    |                       |      " << endl;
    cout << "    |                       |      " << endl;
    cout << "    |                       |      " << endl;
    cout << "    |                       |      " << endl;
    cout << "    |                       |      " << endl;
    cout << "    |                       |     " << endl;
    cout << "    |                       |      " << endl;
    cout << "    |                       |      " << endl;
    cout << "    |_______________________|      " << endl;

    //OSNOVNOJ MOMENT

    cout << " Want to play ? (1-yes,2-no) \n Pay money and test your luck!\n Cost of 1 spin: 100$" << endl;
    int answer=0;
    cin >> answer;
    system("cls");
    if (answer==1)
    {
        while (answer!=2)
        {
            randomABC(a,b,c);
            nacDengi -= spin1;
            if (a==7 && b==7 && c==7)
            {
                nacDengi=nacDengi+100000;
                system("color 04"); // 3-lvl
            }
            if (a==1 && b==5 && c==1)
            {
                nacDengi=nacDengi+5100;
                system("color 02"); // 2-lvl
            }
            if (a==3 && b==6 && c==9)
            {
                nacDengi=nacDengi+400;
                system("color 03"); // 1-lvl
            }
            if (a==9 && b==6 && c==3)
            {
                nacDengi=nacDengi+2000;
                system("color 03"); // 1-lvl
            }
            if (a==1 && b==1 && c==1)
            {
                nacDengi=nacDengi+11111;
                system("color 04"); // 3-lvl
            }
            if (a==9 && b==9 && c==9)
            {
                nacDengi=nacDengi+12000;
                system("color 04"); // 3-lvl
            }
            if (a==1 && b==2 && c==3)
            {
                nacDengi=nacDengi+3000;
                system("color 03"); // 1-lvl
            }
            if (a==2 && b==3 && c==4)
            {
                nacDengi=nacDengi+4000;
                system("color 03"); // 1-lvl
            }
            if (a==3 && b==4 && c==5)
            {
                nacDengi=nacDengi+5000;
                system("color 02"); // 2-lvl
            }
            if (a==6 && b==6 && c==6)
            {
                nacDengi=nacDengi-9999999;
                system("color 03"); // 3-lvl
            }
            if (a==3 && b==3 && c==3)
            {
                nacDengi=nacDengi+3333;
                system("color 03"); // 1-lvl
            }
            if (a==2 && b==4 && c==6)
            {
                nacDengi=nacDengi+2460;
                system("color 03"); // 1-lvl
            }
            if (a==3 && b==5 && c==7)
            {
                nacDengi=nacDengi+3570;
                system("color 03"); // 1-lvl
            }
            if (a==4 && b==6 && c==8)
            {
                nacDengi=nacDengi+4680;
                system("color 03"); // 1-lvl
            }
            if (a==5 && b==7 && c==9)
            {
                nacDengi=nacDengi+5790;
                system("color 02"); // 2-lvl
            }
            if (a==5 && b==4 && c==4)
            {
                nacDengi=nacDengi+5444;
                system("color 02"); // 2-lvl
            }
            if (a==2 && b==2 && c==8)
            {
                nacDengi=nacDengi+4200;
                system("color 03"); // 1-lvl
            }
            if (a==2 && b==2 && c==8)
            {
                nacDengi=nacDengi+1337;
                system("color 03"); // 1-lvl
            }
            if (a==1 && b==6 && c==1)
            {
                nacDengi=nacDengi+1610;
                system("color 03"); // 1-lvl
            }
            if (a==9 && b==5 && c==9)
            {
                nacDengi=nacDengi+2950;
                system("color 03"); // 1-lvl
            }
            if (a==2 && b==2 && c==1)
            {
                nacDengi=nacDengi+2210;
                system("color 03"); // 1-lvl
            }
            if (a==4 && b==4 && c==4)
            {
                nacDengi=nacDengi+4444;
                system("color 03"); // 1-lvl
            }
            if (a==4 && b==6 && c==4)
            {
                nacDengi=nacDengi+4640;
                system("color 03"); // 1-lvl
            }
            if (a==7 && b==2 && c==7)
            {
                nacDengi=nacDengi+7270;
                system("color 02"); // 2-lvl
            }
            if (a==3 && b==2 && c==1)
            {
                nacDengi=nacDengi+3210;
                system("color 03"); // 1-lvl
            }
            if (a==8 && b==1 && c==8)
            {
                nacDengi=nacDengi+8000;
                system("color 02"); // 2-lvl
            }
            if (a==1 && b==5 && c==3)
            {
                nacDengi=nacDengi+1500;
                system("color 03"); // 1-lvl
            }
            cout << "                                      " << endl;
            cout << "       ___________________         _____________________" << endl;
            cout << "      $   !!LUCKYJACK!!   $       |Cost of 1 spin - 100$ "  << endl;
            cout << "     $                     $      |BALANCE: "<< nacDengi   << "$           "  << endl;
            cout << "    $________|"<<a<<"|"<<b<<"|"<<c<<"|________"<<"$                                               " << endl;
            cout << "    |_______________________|      -------------------------------------------------------------------------------- " << endl;
            cout << "    |                       |      7 7 7 - prize : 100 000$  ||  6 6 6 - prize : Lose )  ||  1 6 1 - prize : 1 610$ " << endl;
            cout << "    |             100$ bill |      1 5 1 - prize : 5 100$    ||  3 3 3 - prize : 3 333$  ||  9 5 9 - prize : 2 950$ " << endl;
            cout << "    |      _____     ____   |      3 6 9 - prize : 400$      ||  2 4 6 - prize : 2 460$  ||  2 2 1 - prize : 2 210$ " << endl;
            cout << "    |     |START|   |____|  |      9 6 3 - prize : 2 000$    ||  3 5 7 - prize : 3 570$  ||  4 4 4 - prize : 4 444$ " << endl;
            cout << "    |      ^^^^^            |      1 1 1 - prize : 11 111$   ||  4 6 8 - prize : 4 680$  ||  4 6 4 - prize : 4 640$ " << endl;
            cout << "    |                       |      9 9 9 - prize : 12 000$   ||  5 7 9 - prize : 5 790$  ||  7 2 7 - prize : 7 270$ " << endl;
            cout << "    |                       |      1 2 3 - prize : 3 000$    ||  5 4 4 - prize : 5 444$  ||  3 2 1 - prize : 3 210$ " << endl;
            cout << "    |                       |      2 3 4 - prize : 4 000$    ||  2 2 8 - prize : 4 200$  ||  8 1 8 - prize : 8 000$ " << endl;
            cout << "    |_______________________|      3 4 5 - prize : 5 000$    ||  3 2 2 - prize : 1 337$  ||  1 5 3 - prize : 1 500$ " << endl;
            cout << "                                                                                             " << endl;
            cout << " Want to play again ? (1-yes,2-no(loooooseeer)) \n Pay money and test your MIGHT(khm,luck)!" << endl;
            cin >> answer;
            //standartnij cvet
            system("color 06");

            if (answer==1)
            {
                if (nacDengi<-20000)
                {
                    cout << "You are bankrupt (( , see you soon!!" << endl;
                    break;
                }
                //prodolzaem igru
                system("cls");
            }
            else if (answer==2)
            {
                cout << "See you soon!" << endl;
                system("cls");
            }

        }
    }
    return 0;

}
