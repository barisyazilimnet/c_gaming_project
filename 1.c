 #include <stdio.h>
    #include <conio.h>
    main(){
        int bas,eksilt,say,sonuc;
        printf("Baslangic sayisini ve eksilecek sayi miktarini girin!: ");
        scanf("%d %d",&bas,&eksilt); //de�erleri ald�k
        oyun: //d�n�� etiketi
            printf("%d-%d=? \n",bas,eksilt); //sorumuzu sorduk
            bas-=eksilt; //sorunun sonucunu eksilterek bulduk
            scanf("%d",&sonuc); //kullan�c�n�n cevab�n� ald�k
            if(sonuc==bas){ //e�er sonuc do�ruysa etikete giderek tekrar azaltt�k
                goto oyun;
            }else{ //e�er sonuc do�ru de�ilse yanl�� say�s�n� bir art�r�p sayiyi tekrar eski haline getirdik
                bas+=eksilt;
                say++;
                printf("%d.yanlisin! \n",say); //yanl�� say�s�n� s�yledil
                if(say==3){
                    printf("3 yanlis yaptin oyun bitti!!"); //yanl�� 3 se oyunu bitirdik de�ilse oyun etiketine geri d�nd�k
                }else{
                    goto oyun;
                }
            }
    }
