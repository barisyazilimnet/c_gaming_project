 #include <stdio.h>
    #include <conio.h>
    main(){
        int o1,o2,iobak,bobak;
        printf("iki oyuncu sirayla aklinizdakini girin \n");
        printf("Birinci oyuncu: ( arkadasina gosterme :) ) \n");
        scanf("%d",&o1); // birinci oyuncudan say�m�z� ald�k
            system("CLS"); //ekran� temizdik
        printf("ikinci oyuncu: ( arkadasina gosterme :) ) \n");
        scanf("%d",&o2); //ikinci oyuncudan say�m�z� ald�k
            system("CLS"); //ekran� temizdik
        while(1){
            printf("�kinci oyuncu kac tuttu? \n");
            scanf("%d",&iobak); //ikinci oyuncunun ka� tutdu�unu sorduk
                if(iobak>o2){ //ikinci oyuncunun sayisiyla kar��la�t�rd�k
                    printf("ikinci oyuncu daha kucuk tutmus \n\n");
                }else if(iobak<o2){
                    printf("ikinci oyuncu daha buyuk tutmus \n\n");
                }else{
                    printf("Birinci oyuncu kazandi!! \a\a");
                    break;
                }
            printf("Birinci oyuncu kac tuttu? \n");
            scanf("%d",&bobak); //birinci oyuncunun ka� tutdu�unu sorduk
                if(bobak>o1){ //birinci oyuncunun sayisiyla kar��la�t�rd�k
                    printf("birinci oyuncu daha kucuk tutmus \n\n");
                }else if(bobak<o1){
                    printf("birinci oyuncu daha buyuk tutmus \n\n");
                }else{
                    printf("Ikinci oyuncu kazandi!! \a\a\n");
                    break;
                }
        }
    }
