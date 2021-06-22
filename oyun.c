#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>
#include <locale.h>
#define HATA "          HATA!\nGeçersiz bir deðer girdiniz :(\nLütfen bekleyiniz\nOyun yeniden yükleniyor..."
char a; // global degiþken. main() ve yeniden() fonksiyonalrý için
main(){
	setlocale(LC_ALL,"Turkish"); 
	system("color e");// açýk turkuaz rengi
	
	printf("Oyun kutusuna hoþgeldiniz...\n");
	sleep(1);//1 snlik bekleme 
	system("cls");//ekran temizleme 
	printf("Lütfen bir oyun seçiniz...\n\n");
	printf("------------------------------------------\n");
	printf("|1| Sýfýr mý ? bir mi ?");// 1. oyun
	printf("\n|2| Sonuç : 2"); // 2. oyun
	printf("\n|3| Sonuç : 37"); // 3.oyun
	printf("\n|4| Mayýn Tarlasý"); // 4. oyun
	printf("\n|5| Hakkýnda");
	printf("\n|q| Çýkýþ");
	printf("\n------------------------------------------\n\n>");
	scanf("%s",&a);
	switch(a){ // girilen sayi 1 e eþitse asagidaki islemleri yap
		case ('1'):
			baslat(); // oyun baþlangýç fonksiyonu
			sifir_mi_bir_mi(); // 1. oyunu cagir
			break;
		case ('2'):
			baslat(); 
			sonuc_2();	// 2. oyunu çagýr
			break;
		case ('3'):
			baslat();
			sonuc_37(); // 3. oyunu çagýr
			break;
		case ('4'):
			baslat();
			sifir_bir_mayin(); // 4.oyunu çagýr
			break;
		case ('5'):
			system("cls");
			hakkinda();break;
		case ('q'):
			exit(0);break;
		default:
			hata(); // yanlýþ deger girildigi zaman hata veren fonksiyon
			main();break; //hata verdigi zaman tekrar baþa döndürüyor
	}
}
yeniden(){ //oyun kutusuna dönmek için, yeni oyuna baþlamak için  veya oyundan çýkýþ yapmak için yazýlmýþ fonksiyon
	char i;
		printf("Bütün oyunlarý görüntülemek için 'b'\nÞansýnýzý yeniden denemek için 'y'\nOyundan çýkýþ yapmak için 'q'\n>");
		scanf("%s",&i);
				
			if(i == 'b'){
			
				printf("Lütfen bekleyiniz...\nBütün oyunlar görüntüleniyor");
				sleep(2);
				system("cls");
				main();
			}
			else if(i == 'y'){
				
				printf("Lütfen bekleyiniz...\nOyun yeniden baþlatýlýyor");
				sleep(2);
				system("cls");
				switch(a){ // girilen sayi 1 e eþitse asagidaki islemleri yap
					case 1:
						baslat(); // oyun baþlangýç fonksiyonu
						sifir_mi_bir_mi(); // 1. oyunu cagir
						break;
					case 2:
						baslat(); 
						sonuc_2();	// 2. oyunu çagýr
						break;
					case 3:
						baslat();
						sonuc_37(); // 3. oyunu çagýr
						break;
					case 4:
						baslat();
						sifir_bir_mayin(); // 4.oyunu çagýr
						break;
					default:
						hata(); // yanlýþ deger girildigi zaman hata veren fonksiyon
					}
				}
			else if(i == 'q'){
					exit(0);
			}
}

sifir_mi_bir_mi(){ // 1. oyun fonksiyonu
	
	system("cls");
	system("color e"); // açýk mavi renk
	printf("Sýfýr mý ? bir mi? Þans oyununa hoþgeldiniz...\n\n");
	int rastgele,i,toplam,sayi;
//	srand(time(NULL));
	toplam = 0;
	
	printf("Bir sayi giriniz -> 0'dan büyük olsun\n>");
	scanf("%d",&sayi);
	if(sayi<0){
		hata();
		sifir_mi_bir_mi();		
	}
	else{
		for(i = 0; i<=sayi;i++){
		system("color a"); // açýk yeþil renk
		rastgele = rand()%2; // 0 ile 2 arasinda rastgele sayi üretir yukarýdaki srand islemi olmazsa hep ayni degeri üretir
		printf("-----\n| %d |\n-----\n",rastgele);
		system("cls");
		if(rastgele == 0){
			toplam += 1;
		}
	}
	printf("Bitti...\nSonuçlarý görmek için bir tuþa basýnýz...\n\n");
	getch(); // herhangi bir tuþa basýlasýya kadar bekler
	system("color b"); // mavi renk
	system("cls");
	if(toplam < sayi-toplam){
		
		printf("toplam 0 sayýsý: %d",toplam);
		printf("\ntoplam 1 sayýsý: %d",sayi-toplam);
		printf("\n\nSýfýr sayýsý daha az. Çok þanslýsýn :)\n\n");
		printf("Þikayet ve önerileriniz mail adresimizden gönderebilirsiniz.\nLütfen oyunu geliþtirebilmemiz için iyi veya kötü geri dönüþ yapýn :)\nTeþekkür ederiz...\n");
		printf("yazilimbase@outlook.com\n\n");
		yeniden();
		}
		else if(toplam == sayi-toplam){
			
			printf("toplam 0 sayýsý: %d",toplam);
			printf("\ntoplam 1 sayýsý: %d",sayi-toplam);
			printf("\n\nBerabere\n\n");
			printf("Þikayet ve önerileriniz mail adresimizden gönderebilirsiniz.\nLütfen oyunu geliþtirebilmemiz için iyi veya kötü geri dönüþ yapýn :)\nTeþekkür ederiz...\n");
			printf("yazilimbase@outlook.com\n\n");
			yeniden();
		}
		else{
			
			printf("toplam 0 sayýsý: %d",toplam);
			printf("\ntoplam 1 sayýsý: %d",sayi-toplam);
			printf("\n\nSýfýr sayýsý çok fazla :(");
			printf("\n\nÞikayet ve önerileriniz mail adresimizden gönderebilirsiniz.\nLütfen oyunu geliþtirebilmemiz için iyi veya kötü geri dönüþ yapýn :)\nTeþekkür ederiz...\n");
			printf("yazilimbase@outlook.com\n\n");
			yeniden();
		}
	}
}

sonuc_2(){ // 2. oyun fonksiyonu
	int sayi;
	system("cls");
	system("color 30"); // açýk kýrmýzý renk
	printf("Herhangi bir sayý düþünün...:)\n");
	printf("Birkaç iþlemden sonra sonuç hep 2 olacak :)\n");
	printf("Devam etmek için bir tuþa basýn...");
	getch(); 
	printf("\n\nsayi gir :\n>");
	scanf("%d",&sayi);
	sleep(1); 
	printf("\nGirilen sayýyý 3 ile çarpýp 6 ekleyin...\n>%d",sayi*3+6);
	sleep(2);
	printf("\nBu sayýyý 3 ile bölün\n>%d",(sayi*3+6)/3);
	sleep(2);
	printf("\nÞimdide ilk girilen sayýyý en sondaki sonuçdan çýkarýn");
	sleep(2);
	printf("\nVe sonuç...\n>%d\n\n",(sayi*3+6)/3-sayi);
	printf("Þikayet ve önerileriniz mail adresimizden gönderebilirsiniz.\nLütfen oyunu geliþtirebilmemiz için iyi veya kötü geri dönüþ yapýn :)\nTeþekkür ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	yeniden();
}

int sayi,toplam,sonuc; // global degiþkendir. f() ve sonuc_37() fonksiyonu için yazýlmýþtýr.
f(){ // sonuc_37() fonksiyonundaki ilemler çok uzun oldugu için yazýlan fonksiyon
	printf("\nÞimdi bu sayýnýn rakamlarýný toplayýn\n");
	sleep(1);
	toplam = (sayi%10)*3;
	printf(">%d\n",toplam);
	sleep(1);
	printf("Þimdide girdiginiz sayýyý çýkan sonuca bölün\n");
	sleep(1);
	sonuc = sayi/toplam;
	printf(">%d\n",sonuc);
	printf("Düþündüðünüz gibi sonuç hep 37 çýkacaktýr..:)\n\n");
	printf("Þikayet ve önerileriniz mail adresimizden gönderebilirsiniz.\nLütfen oyunu geliþtirebilmemiz için iyi veya kötü geri dönüþ yapýn :)\nTeþekkür ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	yeniden();
}
sonuc_37(){ // 3.oyun fonksiyonu
	system("color 3"); // turkuaz rengi
	system("cls");
	printf("Bütün rakamlarý ayný herhangi 3 basamaklý sayý düþünün...\n");
	printf("Ama unutmayin 3 basamaklý olacak ve rakamlarý ayný olacak..:)\n\n");
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
	system("color e"); // açýk sarý
	system("cls");
	printf("Mayýn Tarlasý oyununa hoþ geldiniz\n\n");
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
	printf("|              Mayýn Tarlasý                  |\n");
	printf("|              |0| mý |1| mi                  |\n");
	printf("|---------------------------------------------|\n\n");
	
	while(1){
		if(1){
			if(dizi[sayi] == 1){
				printf("|%d|Tebrikler...Devamm\n",dizi[sayi]);
				sayi++;
				sleep(1);
				toplam ++;
				if(toplam == 3){
					printf("------------ Fena deðil ...-------------\n");
					printf("Devaaam...\n\n");
				}
				else if (toplam == 5){
					printf("-------------- Ýyi gidiyorsun...:) -------------\n");
					printf("Devaaam...\n\n");
				}
				else if (toplam == 7){
					printf("------------- Süpersin...---------------\n");
					printf("Devaaam...\n\n");
					}
				}
				else{
					while(start){
					start++;
					printf("|%d| Patladýnnn...HAAHAHA :AW:AWAWD\n",dizi[sayi]);
					sleep(1);
					if(start == 4)
						break;
				}
				break;
			}
		}
	}
	printf("\nÞikayet ve önerileriniz mail adresimizden gönderebilirsiniz.\nLütfen oyunu geliþtirebilmemiz için iyi veya kötü geri dönüþ yapýn :)\nTeþekkür ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	yeniden();
}

hakkinda(){
	char giris;
	printf("HAKKINDA\n");
	printf("----------------------\n");
	printf("[1] Oyun hakkýnda\n");
	printf("[2] Yazýlýmcýlar hakkýnda\n");
	printf("[g] Geri gelmek için\n");
	printf("[q] Çýkýþ\n");
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
			printf("Geçersiz bir deðer girdiniz\n");
			printf("Lütfen bekliyiniz...");
			sleep(2);
			system("cls");
			hakkinda();break;	
	}	
}

oyun(){
	char giris1;
	printf("OYUN HAKKINDA\n\n");
	printf("Oyunumuz 2020 yapýmýdýr. Tüm telif haklarý bize aittir.\n\n");
	printf("----------------------\n");
	printf("[b] Bütün oyunlarý görüntüle\n");
	printf("[g] Geri gelmek için\n");
	printf("[q] Çýkýþ\n");
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
			printf("Geçersiz bir deðer girdiniz\n");
			printf("Lütfen bekliyiniz...");
			sleep(2);
			system("cls");
			oyun();break;
	}
}

yazilimci(){
	char giris2;
	printf("YAZILIMCILARI HAKKINDA\n\n");
	printf("1.YAZILIMCI\n");
	printf("BARIÞ KURT\n\n");
	printf("2.YAZILIMCI\n");
	printf("SEMÝH ACAR\n\n");
	printf("Þikayet ve önerileriniz mail adresimizden gönderebilirsiniz.\nLütfen oyunu geliþtirebilmemiz için iyi veya kötü geri dönüþ yapýn :)\nTeþekkür ederiz...\n");
	printf("yazilimbase@outlook.com\n\n");
	printf("----------------------\n");
	printf("[b] Bütün oyunlarý görüntüle\n");
	printf("[g] Geri gelmek için\n");
	printf("[q] Çýkýþ\n");
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
			printf("Geçersiz bir deðer girdiniz\n");
			printf("Lütfen bekliyiniz...");
			sleep(2);
			system("cls");
			yazilimci();break;
	}
}

baslat(){ // oyunlarý baþlatýrken yazýlar için yazýlan fonksiyon
	system("cls");
	printf("Oyun baþlatýlýyor...\n\n");
	sleep(1);
}

hata(){ // yanlýþ deger girildigi zaman hata vermeseini saglayan fonksiyon
	printf(HATA);
	sleep(1);
	system("cls");
}

