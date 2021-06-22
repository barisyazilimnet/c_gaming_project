#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>
#include <locale.h>
#define HATA "          HATA!\nGe�ersiz bir de�er girdiniz :(\nL�tfen bekleyiniz\nOyun yeniden y�kleniyor..."
char a; // global degi�ken. main() ve yeniden() fonksiyonalr� i�in
main(){
	setlocale(LC_ALL,"Turkish"); 
	system("color e");// a��k turkuaz rengi
	
	printf("Oyun kutusuna ho�geldiniz...\n");
	sleep(1);//1 snlik bekleme 
	system("cls");//ekran temizleme 
	printf("L�tfen bir oyun se�iniz...\n\n");
	printf("------------------------------------------\n");
	printf("|1| S�f�r m� ? bir mi ?");// 1. oyun
	printf("\n|2| Sonu� : 2"); // 2. oyun
	printf("\n|3| Sonu� : 37"); // 3.oyun
	printf("\n|4| May�n Tarlas�"); // 4. oyun
	printf("\n|5| Hakk�nda");
	printf("\n|q| ��k��");
	printf("\n------------------------------------------\n\n>");
	scanf("%s",&a);
	switch(a){ // girilen sayi 1 e e�itse asagidaki islemleri yap
		case ('1'):
			baslat(); // oyun ba�lang�� fonksiyonu
			sifir_mi_bir_mi(); // 1. oyunu cagir
			break;
		case ('2'):
			baslat(); 
			sonuc_2();	// 2. oyunu �ag�r
			break;
		case ('3'):
			baslat();
			sonuc_37(); // 3. oyunu �ag�r
			break;
		case ('4'):
			baslat();
			sifir_bir_mayin(); // 4.oyunu �ag�r
			break;
		case ('5'):
			system("cls");
			hakkinda();break;
		case ('q'):
			exit(0);break;
		default:
			hata(); // yanl�� deger girildigi zaman hata veren fonksiyon
			main();break; //hata verdigi zaman tekrar ba�a d�nd�r�yor
	}
}
yeniden(){ //oyun kutusuna d�nmek i�in, yeni oyuna ba�lamak i�in  veya oyundan ��k�� yapmak i�in yaz�lm�� fonksiyon
	char i;
		printf("B�t�n oyunlar� g�r�nt�lemek i�in 'b'\n�ans�n�z� yeniden denemek i�in 'y'\nOyundan ��k�� yapmak i�in 'q'\n>");
		scanf("%s",&i);
				
			if(i == 'b'){
			
				printf("L�tfen bekleyiniz...\nB�t�n oyunlar g�r�nt�leniyor");
				sleep(2);
				system("cls");
				main();
			}
			else if(i == 'y'){
				
				printf("L�tfen bekleyiniz...\nOyun yeniden ba�lat�l�yor");
				sleep(2);
				system("cls");
				switch(a){ // girilen sayi 1 e e�itse asagidaki islemleri yap
					case 1:
						baslat(); // oyun ba�lang�� fonksiyonu
						sifir_mi_bir_mi(); // 1. oyunu cagir
						break;
					case 2:
						baslat(); 
						sonuc_2();	// 2. oyunu �ag�r
						break;
					case 3:
						baslat();
						sonuc_37(); // 3. oyunu �ag�r
						break;
					case 4:
						baslat();
						sifir_bir_mayin(); // 4.oyunu �ag�r
						break;
					default:
						hata(); // yanl�� deger girildigi zaman hata veren fonksiyon
					}
				}
			else if(i == 'q'){
					exit(0);
			}
}

sifir_mi_bir_mi(){ // 1. oyun fonksiyonu
	
	system("cls");
	system("color e"); // a��k mavi renk
	printf("S�f�r m� ? bir mi? �ans oyununa ho�geldiniz...\n\n");
	int rastgele,i,toplam,sayi;
//	srand(time(NULL));
	toplam = 0;
	
	printf("Bir sayi giriniz -> 0'dan b�y�k olsun\n>");
	scanf("%d",&sayi);
	if(sayi<0){
		hata();
		sifir_mi_bir_mi();		
	}
	else{
		for(i = 0; i<=sayi;i++){
		system("color a"); // a��k ye�il renk
		rastgele = rand()%2; // 0 ile 2 arasinda rastgele sayi �retir yukar�daki srand islemi olmazsa hep ayni degeri �retir
		printf("-----\n| %d |\n-----\n",rastgele);
		system("cls");
		if(rastgele == 0){
			toplam += 1;
		}
	}
	printf("Bitti...\nSonu�lar� g�rmek i�in bir tu�a bas�n�z...\n\n");
	getch(); // herhangi bir tu�a bas�las�ya kadar bekler
	system("color b"); // mavi renk
	system("cls");
	if(toplam < sayi-toplam){
		
		printf("toplam 0 say�s�: %d",toplam);
		printf("\ntoplam 1 say�s�: %d",sayi-toplam);
		printf("\n\nS�f�r say�s� daha az. �ok �ansl�s�n :)\n\n");
		printf("�ikayet ve �nerileriniz mail adresimizden g�nderebilirsiniz.\nL�tfen oyunu geli�tirebilmemiz i�in iyi veya k�t� geri d�n�� yap�n :)\nTe�ekk�r ederiz...\n");
		printf("yazilimbase@outlook.com\n\n");
		yeniden();
		}
		else if(toplam == sayi-toplam){
			
			printf("toplam 0 say�s�: %d",toplam);
			printf("\ntoplam 1 say�s�: %d",sayi-toplam);
			printf("\n\nBerabere\n\n");
			printf("�ikayet ve �nerileriniz mail adresimizden g�nderebilirsiniz.\nL�tfen oyunu geli�tirebilmemiz i�in iyi veya k�t� geri d�n�� yap�n :)\nTe�ekk�r ederiz...\n");
			printf("yazilimbase@outlook.com\n\n");
			yeniden();
		}
		else{
			
			printf("toplam 0 say�s�: %d",toplam);
			printf("\ntoplam 1 say�s�: %d",sayi-toplam);
			printf("\n\nS�f�r say�s� �ok fazla :(");
			printf("\n\n�ikayet ve �nerileriniz mail adresimizden g�nderebilirsiniz.\nL�tfen oyunu geli�tirebilmemiz i�in iyi veya k�t� geri d�n�� yap�n :)\nTe�ekk�r ederiz...\n");
			printf("yazilimbase@outlook.com\n\n");
			yeniden();
		}
	}
}

sonuc_2(){ // 2. oyun fonksiyonu
	int sayi;
	system("cls");
	system("color 30"); // a��k k�rm�z� renk
	printf("Herhangi bir say� d���n�n...:)\n");
	printf("Birka� i�lemden sonra sonu� hep 2 olacak :)\n");
	printf("Devam etmek i�in bir tu�a bas�n...");
	getch(); 
	printf("\n\nsayi gir :\n>");
	scanf("%d",&sayi);
	sleep(1); 
	printf("\nGirilen say�y� 3 ile �arp�p 6 ekleyin...\n>%d",sayi*3+6);
	sleep(2);
	printf("\nBu say�y� 3 ile b�l�n\n>%d",(sayi*3+6)/3);
	sleep(2);
	printf("\n�imdide ilk girilen say�y� en sondaki sonu�dan ��kar�n");
	sleep(2);
	printf("\nVe sonu�...\n>%d\n\n",(sayi*3+6)/3-sayi);
	printf("�ikayet ve �nerileriniz mail adresimizden g�nderebilirsiniz.\nL�tfen oyunu geli�tirebilmemiz i�in iyi veya k�t� geri d�n�� yap�n :)\nTe�ekk�r ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	yeniden();
}

int sayi,toplam,sonuc; // global degi�kendir. f() ve sonuc_37() fonksiyonu i�in yaz�lm��t�r.
f(){ // sonuc_37() fonksiyonundaki ilemler �ok uzun oldugu i�in yaz�lan fonksiyon
	printf("\n�imdi bu say�n�n rakamlar�n� toplay�n\n");
	sleep(1);
	toplam = (sayi%10)*3;
	printf(">%d\n",toplam);
	sleep(1);
	printf("�imdide girdiginiz say�y� ��kan sonuca b�l�n\n");
	sleep(1);
	sonuc = sayi/toplam;
	printf(">%d\n",sonuc);
	printf("D���nd���n�z gibi sonu� hep 37 ��kacakt�r..:)\n\n");
	printf("�ikayet ve �nerileriniz mail adresimizden g�nderebilirsiniz.\nL�tfen oyunu geli�tirebilmemiz i�in iyi veya k�t� geri d�n�� yap�n :)\nTe�ekk�r ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	yeniden();
}
sonuc_37(){ // 3.oyun fonksiyonu
	system("color 3"); // turkuaz rengi
	system("cls");
	printf("B�t�n rakamlar� ayn� herhangi 3 basamakl� say� d���n�n...\n");
	printf("Ama unutmayin 3 basamakl� olacak ve rakamlar� ayn� olacak..:)\n\n");
	printf("sayi gir :\n>");
	scanf("%d",&sayi);

	switch(sayi){
		case 111:
			f();
			break;
		case 222:
			f();
			break;
		case 333:
			f();
			break;
		case 444:
			f();
			break;
		case 555:
			f();
			break;
		case 666:
			f();
			break;
		case 777:
			f();
			break;
		case 888:
			f();
			break;
		case 999:
			f();
			break;
		default:
			hata();
			sonuc_37();
	}	
}

sifir_bir_mayin(){ // 4. oyun fonksiyonu
	system("color e"); // a��k sar�
	system("cls");
	printf("May�n Tarlas� oyununa ho� geldiniz\n\n");
	int dizi[10];
	int i,j;
	
	srand(time(NULL));
	for(i = 0;i<10;i++){
		dizi[i] = rand()%2;
	}
	int sayi = 0;
	int toplam = 0;
	int start = 1;
	printf("|---------------------------------------------|\n");
	printf("|              May�n Tarlas�                  |\n");
	printf("|              |0| m� |1| mi                  |\n");
	printf("|---------------------------------------------|\n\n");
	
	while(1){
		if(1){
			if(dizi[sayi] == 1){
				printf("|%d|Tebrikler...Devamm\n",dizi[sayi]);
				sayi++;
				sleep(1);
				toplam ++;
				if(toplam == 3){
					printf("------------ Fena de�il ...-------------\n");
					printf("Devaaam...\n\n");
				}
				else if (toplam == 5){
					printf("-------------- �yi gidiyorsun...:) -------------\n");
					printf("Devaaam...\n\n");
				}
				else if (toplam == 7){
					printf("------------- S�persin...---------------\n");
					printf("Devaaam...\n\n");
					}
				}
				else{
					while(start){
					start++;
					printf("|%d| Patlad�nnn...HAAHAHA :AW:AWAWD\n",dizi[sayi]);
					sleep(1);
					if(start == 4)
						break;
				}
				break;
			}
		}
	}
	printf("\n�ikayet ve �nerileriniz mail adresimizden g�nderebilirsiniz.\nL�tfen oyunu geli�tirebilmemiz i�in iyi veya k�t� geri d�n�� yap�n :)\nTe�ekk�r ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	yeniden();
}

hakkinda(){
	char giris;
	printf("HAKKINDA\n");
	printf("----------------------\n");
	printf("[1] Oyun hakk�nda\n");
	printf("[2] Yaz�l�mc�lar hakk�nda\n");
	printf("[g] Geri gelmek i�in\n");
	printf("[q] ��k��\n");
	printf("----------------------\n>");
	scanf("%s",&giris);
	switch(giris){
		case ('1'):
			system("cls");
			oyun();break;
		case ('2'):
			system("cls");
			yazilimci();break;
		case ('g'):
			system("cls");
			main();break;
		case ('q'):
			exit(0);
		default:
			printf("          HATA!\n");
			printf("Ge�ersiz bir de�er girdiniz\n");
			printf("L�tfen bekliyiniz...");
			sleep(2);
			system("cls");
			hakkinda();break;	
	}	
}

oyun(){
	char giris1;
	printf("OYUN HAKKINDA\n\n");
	printf("Oyunumuz 2020 yap�m�d�r. T�m telif haklar� bize aittir.\n\n");
	printf("----------------------\n");
	printf("[b] B�t�n oyunlar� g�r�nt�le\n");
	printf("[g] Geri gelmek i�in\n");
	printf("[q] ��k��\n");
	printf("----------------------\n>");
	scanf("%s",&giris1);
	switch(giris1){
		case ('b'):
			system("cls");
			main();break;
		case ('g'):
			system("cls");
			hakkinda();break;
		case ('q'):
			exit(0);
		default:
			printf("          HATA!\n");
			printf("Ge�ersiz bir de�er girdiniz\n");
			printf("L�tfen bekliyiniz...");
			sleep(2);
			system("cls");
			oyun();break;
	}
}

yazilimci(){
	char giris2;
	printf("YAZILIMCILARI HAKKINDA\n\n");
	printf("1.YAZILIMCI\n");
	printf("BARI� KURT\n\n");
	printf("2.YAZILIMCI\n");
	printf("SEM�H ACAR\n\n");
	printf("�ikayet ve �nerileriniz mail adresimizden g�nderebilirsiniz.\nL�tfen oyunu geli�tirebilmemiz i�in iyi veya k�t� geri d�n�� yap�n :)\nTe�ekk�r ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	printf("----------------------\n");
	printf("[b] B�t�n oyunlar� g�r�nt�le\n");
	printf("[g] Geri gelmek i�in\n");
	printf("[q] ��k��\n");
	printf("----------------------\n>");
	scanf("%s",&giris2);
	switch(giris2){
		case ('b'):
			system("cls");
			main();break;
		case ('g'):
			system("cls");
			hakkinda();break;
		case ('q'):
			exit(0);
		default:
			printf("          HATA!\n");
			printf("Ge�ersiz bir de�er girdiniz\n");
			printf("L�tfen bekliyiniz...");
			sleep(2);
			system("cls");
			yazilimci();break;
	}
}

baslat(){ // oyunlar� ba�lat�rken yaz�lar i�in yaz�lan fonksiyon
	system("cls");
	printf("Oyun ba�lat�l�yor...\n\n");
	sleep(1);
}

hata(){ // yanl�� deger girildigi zaman hata vermeseini saglayan fonksiyon
	printf(HATA);
	sleep(1);
	system("cls");
}

