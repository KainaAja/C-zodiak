#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clrscr() {
    system("cls");
}

int main()

{
	int tgl,bln,thn,umr;
	char i;
	do
{
	string a;
	string b="zodiac123";
	gotoxy(24,25);cout<<"PASSWORD :";
	cin>>a;
	if(a!=b){
	gotoxy(15,26);cout<<"-----------------------------------";
	gotoxy(25,27);cout<<"PASSWORD SALAH!";
	
	cout<<endl;
	gotoxy(24,28);cout<<"ULANGI(Y/T):";
	cin>>i;
	}
	else if(a==b){
		clrscr();
		gotoxy(25,15);cout<<"-ZODIAC-";
		cout<<endl;
		gotoxy(10,16);cout<<"--------------------------------------";
		cout<<endl;
		gotoxy(15,17);cout<<"Input TGL. Lahir :";
		cin>>tgl;
		gotoxy(15,18);cout<<"Input BULAN Lahir:";
		cin>>bln;
		gotoxy(15,19);cout<<"Input TAHUN Lahir:";
		cin>>thn;
		gotoxy(10,20);cout<<"--------------------------------------";
		cout<<endl;
		umr=2022-thn;
		gotoxy(15,21);cout<<"UMUR :"<<umr<<endl;
		if (bln ==12){

         

        if (tgl < 22){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Sagittarius";
        
        }
        else {

        gotoxy(15,23);cout<<"NAMA ZODIAC : capricorn";
        }
    }

         

    else if (bln==1){

        if (tgl < 20){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Capricorn";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : aquarius";
        }
    }

         

    else if (bln == 2){

        if (tgl < 19){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Aquarius";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : pisces";
        }
        }

         

    else if(bln == 3){

        if (tgl < 21){ 

        gotoxy(15,23);cout<<"NAMA ZODIAC : Pisces";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : aries";
        }
    }

    else if (bln == 4){

        if (tgl < 20){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Aries";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : taurus";
        }
    }

         

    else if (bln == 5){

        if (tgl < 21){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Taurus";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : gemini";

        }
    }
         

    else if( bln == 6){

        if (tgl < 21){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Gemini";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : cancer";
        }
    }
    else if (bln == 7){

        if (tgl < 23){

        gotoxy(15,24);cout<<"NAMA ZODIAC : Cancer";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : leo";
        }
    }

         

    else if( bln == 8){

        if (tgl < 23) {

        gotoxy(15,23);cout<<"NAMA ZODIAC : Leo";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : virgo";
        }
    }

         

    else if (bln == 9){

        if (tgl < 23){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Virgo";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : libra";
        }
    }

         

    else if (bln == 10){

        if (tgl < 23){

        gotoxy(15,23);cout<<"NAMA ZODIAC : Libra";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : scorpio";
        }
    }

         

    else if (bln == 11){

        if (tgl < 22){

       gotoxy(15,23); cout<<"NAMA ZODIAC : scorpio";
        }
        else{

        gotoxy(15,23);cout<<"NAMA ZODIAC : sagittarius";
        }
    }

	
}	
}
	while(i=='y');
	getch();
	
}
