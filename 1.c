 #include <stdio.h>
    #include <conio.h>
    main(){
        int bas,eksilt,say,sonuc;
        printf("Baslangic sayisini ve eksilecek sayi miktarini girin!: ");
        scanf("%d %d",&bas,&eksilt); //deðerleri aldýk
        oyun: //dönüþ etiketi
            printf("%d-%d=? \n",bas,eksilt); //sorumuzu sorduk
            bas-=eksilt; //sorunun sonucunu eksilterek bulduk
            scanf("%d",&sonuc); //kullanýcýnýn cevabýný aldýk
            if(sonuc==bas){ //eðer sonuc doðruysa etikete giderek tekrar azalttýk
                goto oyun;
            }else{ //eðer sonuc doðru deðilse yanlýþ sayýsýný bir artýrýp sayiyi tekrar eski haline getirdik
                bas+=eksilt;
                say++;
                printf("%d.yanlisin! \n",say); //yanlýþ sayýsýný söyledil
                if(say==3){
                    printf("3 yanlis yaptin oyun bitti!!"); //yanlýþ 3 se oyunu bitirdik deðilse oyun etiketine geri döndük
                }else{
                    goto oyun;
                }
            }
    }
