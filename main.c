
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int seviye;
	int kolaymatris[4][4];
	char kolaygosterge[4][4];
	int kolaydizi[16]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8};
	int kolayhafiza[2][2];
	int ortamatris[6][6];
	char ortagosterge[6][6];
	int ortadizi[36]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15,16,16,17,17,18,18};
	int ortahafiza[6][2];
	int zormatris[8][8];
	char zorgosterge[8][8];
	int zordizi[64]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15,16,16,17,17,18,18,19,19,20,20,21,21,22,22,23,23,24,24,25,25,26,26,27,27,28,28,29,29,30,30,31,31,32,32};
	int zorhafiza[16][2];
	int puanoyuncu=0,puanpc=0;
	int tahminoyuncu=0,tahminpc=0;
	int satir1,sutun1,satir2,sutun2;
	int i,j,k,l,ex,c,a=0;
	int t=0;
	
	
	
   printf("\n\t*********** KART ESLEME OYUNU ***********\n\n\n");
   
   printf("ZORLUK SEVIYESINI SECINIZ:\n1-KOLAY\n2-ORTA\n3-ZOR\n\n");
   scanf("%d",&seviye);
   
   
	system("cls");
   
   if(seviye==1){
   	
   	printf("SECILEN MOD: KOLAY\n");
   	printf("KURALLAR:\n*OYUN 8'I ES KART OLMAK UZERE TOPLAM 16 KARTTAN OLUSMAKTADIR\n*SIRA SIZE GELDÝGÝNDE ES OLDUGUNU DUSUNDUGUNUZ KARTLARI SECINIZ\n*DOGRU SECIM YAPTIGINIZ DURUMDA TEKRARDAN KART SECEBILIRSINIZ\n*YANLIS SECIM YAPARSANIZ SIRA BILGISAYARA GECICEKTIR");
   	printf("\n\n");
   	printf("OYUNA BASLA...");
   	for(i=0;i<4;i++){           //GOSTERGE OLUSTURMA
   		for(j=0;j<4;j++){
   			kolaygosterge[i][j]='*';
		   }
	   }
	   
	    
	    for(i=0;i<4;i++){        //MATRIS SIFIRLAMA
            for(j=0;j<4;j++){
                kolaymatris[i][j]=0;
            }
        }
        
	    srand(time(NULL));
    
    for(i=0; i<16; i++){         //MATRIS OLUSTURMA
        k = rand() %4  ;
        l = rand() %4  ;
        
        if(kolaymatris[k][l]==0){
            kolaymatris[k][l]=kolaydizi[i];
            
        }     
         else{
            i--;
        }
    }
    
    while(puanoyuncu < 5 && puanpc < 5 && puanoyuncu+puanpc < 8){    //OYUN BASLIYOR <3
    	
    	do{
    		
    			getch();
	   	system("cls");
    		
    		printf("\t      OYUN TAHTASI");
	   printf("\n\n\n");
	   		for(i=0;i<4;i++){   
	   printf("\t\t");          //GOSTERGE YANSITMA
        for(j=0;j<4;j++){
        	
            printf("%c ",kolaygosterge[i][j]);
        	}
    
	    printf("\n");
	    		}
	    printf("\n\n\n");
		
    	printf("Oyun Sirasi: Oyuncu\n\n");
    	printf("Ilk Kartin Kordinatlarini Giriniz: ");
    	scanf("%d %d",&satir1,&sutun1);
    	printf("Tahmin Ettiginiz Kart: %d\n",kolaymatris[satir1][sutun1]);
    	
    	printf("\nIkinci Kartin Kordinatlarini Giriniz: ");
    	scanf("%d %d",&satir2,&sutun2);
    	printf("Tahmin Ettiginiz Kart: %d\n",kolaymatris[satir2][sutun2]);
    	
    	tahminoyuncu++;
    	
    	if(kolaymatris[satir1][sutun1]==kolaymatris[satir2][sutun2]){
    		
    		puanoyuncu++;
    		
    		printf("Dogru Tahmin \n");
    		
    		
    		
    		kolaygosterge[satir1][sutun1]='-';
    		kolaygosterge[satir2][sutun2]='-';
    		
    		
	   		
	   		 

			}
			else{
				
				kolayhafiza[0][0]= satir1;
				kolayhafiza[0][1]= sutun1;
				kolayhafiza[1][0]= satir2;
				kolayhafiza[1][1]= sutun2;
				
			}
			
			printf("\nOyuncunun Puani: %d\n",puanoyuncu);
			
		}
		while(kolaymatris[satir1][sutun1]==kolaymatris[satir2][sutun2]);
		
		
		
		do{
			printf("\nOyun Sirasi: Bilgisayar...");
			
			getch();
	   	system("cls");
	   	
	   	 printf("\t      OYUN TAHTASI");
	   printf("\n\n\n");
	   		for(i=0;i<4;i++){   
	   printf("\t\t");          //GOSTERGE YANSITMA
        for(j=0;j<4;j++){
        	
            printf("%c ",kolaygosterge[i][j]);
        	}
    
	    printf("\n");
	    		}
	    printf("\n\n\n");
	    		
	    		printf("Oyun Sirasi: Bilgisayar\n\n"); 
			
			satir1=rand()%4;
			sutun1=rand()%4;
			printf("Bilgisayarin Tahmini: %d %d:\n",satir1,sutun1);
			printf("Kartin Degeri: %d\n",kolaymatris[satir1][sutun1]);
			
				ex=0;
				i=0;
				while(ex!=1 && i<2){
			
					if((kolaymatris[satir1][sutun1]) == (kolaymatris[kolayhafiza[i][0]][kolayhafiza[i][1]]))
					{
						ex=1;
						}
						else{
						
						 i=i+1;	
					}
				}
			if(ex == 1){
				
				puanpc++;
				tahminpc++;
					
				
				kolayhafiza[i][0]=satir2;
				kolayhafiza[i][1]=sutun2;
				
					kolaygosterge[satir1][sutun1]='-';
    				kolaygosterge[satir2][sutun2]='-';
				
				printf("\nBilgisayarin Tahmini: %d %d\n",satir2,sutun2);
				printf("Kartin Degeri: %d\n",kolaymatris[satir2][sutun2]);
				printf("Dogru Tahmin \n\n");
				
				kolayhafiza[i][0]=7;
				kolayhafiza[i][1]=7;
				
			}
		else {
			
			a=0;
			while(a==0){
			
			satir2=rand()%4;
			sutun2=rand()%4;
			if(satir1!=satir2){
				if(sutun1!=sutun2){
					a=1;
				}
			}
		}
			printf("\nBilgisayarin Tahmini: %d %d:\n",satir2,sutun2);
			printf("Kartin Degeri: %d\n",kolaymatris[satir2][sutun2]);
			
			tahminpc++;
				
			
			if(kolaymatris[satir2][sutun2]==kolaymatris[satir1][sutun1]){
				
				puanpc++;
				
					kolaygosterge[satir1][sutun1]='-';
    				kolaygosterge[satir2][sutun2]='-';
				
				}
			}
			
			
			
			printf("Bilgisayarin Puani: %d \n",puanpc);
			
			
			
		}
    	while(kolaymatris[satir1][sutun1]==kolaymatris[satir2][sutun2]);
    	
    	printf("\nOyun Sirasi: Oyuncu...");
    	
	}
		system("cls");
		if(puanoyuncu<puanpc){
			printf("\t\***KAZANAN BILGISAYAR***\n\n");
			printf("TOPLAM PUAN: %d\n",puanpc);
			printf("TOPLAM TAHMÝN SAYISI: %d",tahminpc);
		}
		else{
			printf("\t\***KAZANAN OYUNCU***\n\n");
			printf("TOPLAM PUAN: %d\n",puanoyuncu);
			printf("TOPLAM TAHMÝN SAYISI: %d",tahminoyuncu);
		}
    
    
   
    

   	
   	
   	
   	
}
   if(seviye==2){
   	printf("SECILEN MOD: ORTA\n");
   	printf("KURALLAR:\n*OYUN 18'I ES KART OLMAK UZERE TOPLAM 36 KARTTAN OLUSMAKTADIR\n*SIRA SIZE GELDÝGÝNDE ES OLDUGUNU DUSUNDUGUNUZ KARTLARI SECINIZ\n*DOGRU SECIM YAPTIGINIZ DURUMDA TEKRARDAN KART SECEBILIRSINIZ\n*YANLIS SECIM YAPARSANIZ SIRA BILGISAYARA GECICEKTIR");
   	printf("\n\n");
   	printf("OYUNA BASLA...");
   	
   	for(i=0;i<6;i++){           //GOSTERGE OLUSTURMA
   		for(j=0;j<6;j++){
   			ortagosterge[i][j]='*';
		   }
	   }
	   
    
	for(i=0;i<6;i++){        //MATRIS SIFIRLAMA
            for(j=0;j<6;j++){
                ortamatris[i][j]=0;
            }
        }
        
	    srand(time(NULL));
    
    for(i=0; i<36; i++){         //MATRIS OLUSTURMA
        k = rand() %6  ;
        l = rand() %6  ;
        
        if(ortamatris[k][l]==0){
            ortamatris[k][l]=ortadizi[i];
            
        }     
         else{
            i--;
        }
    }
    for(i=0;i<6;i++){         //HAFIZA SIFIRLAMA
    	for(j=0;j<2;j++){
    		ortahafiza[i][j]=7;
					}
   	}
     while(puanoyuncu < 10 && puanpc < 10 && (puanoyuncu+puanpc) < 18){    //OYUN BASLIYOR <3
    	
    	do{
    		
    	getch();
	   	system("cls");
    		
    		printf("\t        OYUN TAHTASI");
	   printf("\n\n\n");
	   		for(i=0;i<6;i++){  
	    printf("\t\t");     			 //GOSTERGE YANSITMA
        for(j=0;j<6;j++){
            printf("%c ",ortagosterge[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
		
    	printf("Oyun Sirasi: Oyuncu\n\n");
    	printf("Ilk Kartin Kordinatlarini Giriniz: ");
    	scanf("%d %d",&satir1,&sutun1);
    	printf("Tahmin Ettiginiz Kart: %d\n",ortamatris[satir1][sutun1]);
    	
    	printf("\nIkinci Kartin Kordinatlarini Giriniz: ");
    	scanf("%d %d",&satir2,&sutun2);
    	printf("Tahmin Ettiginiz Kart: %d\n",ortamatris[satir2][sutun2]);
    	
    	tahminoyuncu++;
    	
    	if(ortamatris[satir1][sutun1]==ortamatris[satir2][sutun2]){
    		
    		puanoyuncu++;
    		
    		printf("Dogru Tahmin \n");
    		
    		
    		
    		ortagosterge[satir1][sutun1]='-';
    		ortagosterge[satir2][sutun2]='-';
    		
    		
	   		
	   		 

			}
			else{
				
				ortahafiza[t%6][0]=satir1;
				ortahafiza[t%6][1]=sutun1;
				ortahafiza[(t+1)%6][0]=satir2;
				ortahafiza[(t+1)%6][1]=sutun2;
				
				t++;
				t++;
				
			}
			
			printf("\nOyuncunun Puani: %d\n",puanoyuncu);
			
			
		}
		while(ortamatris[satir1][sutun1]==ortamatris[satir2][sutun2]);
		
		
		
		do{
			printf("\nOyun Sirasi: Bilgisayar...");
			
			getch();
	   	system("cls");
	   	
	   	 printf("\t        OYUN TAHTASI");
	   printf("\n\n\n");
	   		 		for(i=0;i<6;i++){  
	    printf("\t\t");      						//GOSTERGE YANSITMA
        for(j=0;j<6;j++){
            printf("%c ",ortagosterge[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
	    		
	    		printf("Oyun Sirasi: Bilgisayar\n\n"); 
			
			satir1=rand()%6;
			sutun1=rand()%6;
			printf("Bilgisayarin Tahmini: %d %d:\n",satir1,sutun1);
			printf("Kartin Degeri: %d\n",ortamatris[satir1][sutun1]);
			
			
			    ex=0;
				i=0;
				while(ex!=1 && i<6){
			
					if((ortamatris[satir1][sutun1]) == (ortamatris[ortahafiza[i][0]][ortahafiza[i][1]]))
						{
						ex=1;
						}
						else{
						
						 i++;
							}
				}
				
			
			if(ex==1){
				
				puanpc++;
				tahminpc++;
					
				
				ortahafiza[i][0]=satir2;
				ortahafiza[i][1]=sutun2;
				
					ortagosterge[satir1][sutun1]='-';
    				ortagosterge[satir2][sutun2]='-';
				
				printf("\nBilgisayarin Tahmini: %d %d\n",satir2,sutun2);
				printf("Kartin Degeri: %d\n",ortamatris[satir2][sutun2]);
				printf("Dogru Tahminn \n\n");
				
				ortahafiza[i][0]=7;
				ortahafiza[i][1]=7;
				
			}
			else{
			
			satir2=rand()%6;
			sutun2=rand()%6;
			printf("\nBilgisayarin Tahmini: %d %d:\n",satir2,sutun2);
			printf("Kartin Degeri: %d\n",ortamatris[satir2][sutun2]);
			
			tahminpc++;
			
			ortahafiza[t%6][0]=satir1;
				ortahafiza[t%6][1]=sutun1;
				ortahafiza[(t+1)%6][0]=satir2;
				ortahafiza[(t+1)%6][1]=sutun2;
				
				t++;
				t++;
			
			if(ortamatris[satir2][sutun2]==ortamatris[satir1][sutun1]){
				
				puanpc++;
					printf("Dogru Tahmin \n\n");
				
					ortagosterge[satir1][sutun1]='-';
    				ortagosterge[satir2][sutun2]='-';
				
				}
			}
			
			
			
			printf("Bilgisayarin Puani: %d \n",puanpc);
		}
    	while(ortamatris[satir1][sutun1]==ortamatris[satir2][sutun2]);
    	
    	printf("\nOyun Sirasi: Oyuncu...");
    	
    	
	}
		system("cls");
		if(puanoyuncu<puanpc){
			printf("\t\***KAZANAN BILGISAYAR***\n\n");
			printf("TOPLAM PUAN: %d\n",puanpc);
			printf("TOPLAM TAHMÝN SAYISI: %d",tahminpc);
		}
		else{
			printf("\t\***KAZANAN OYUNCU***");
			printf("TOPLAM PUAN: %d\n",puanoyuncu);
			printf("TOPLAM TAHMÝN SAYISI: %d",tahminoyuncu);
		}
    
    
   }
   if(seviye==3){
   	printf("SECILEN MOD: ZOR\n");
   	printf("KURALLAR:\n*OYUN 32'SI ES KART OLMAK UZERE TOPLAM 64 KARTTAN OLUSMAKTADIR\n*SIRA SIZE GELDÝGÝNDE ES OLDUGUNU DUSUNDUGUNUZ KARTLARI SECINIZ\n*DOGRU SECIM YAPTIGINIZ DURUMDA TEKRARDAN KART SECEBILIRSINIZ\n*YANLIS SECIM YAPARSANIZ SIRA BILGISAYARA GECICEKTIR");
   	printf("\n\n");
   	printf("OYUNA BASLA...");
   	
   	for(i=0;i<8;i++){           //GOSTERGE OLUSTURMA
   		for(j=0;j<8;j++){
   			zorgosterge[i][j]='*';
		   }
	   }
    
    	for(i=0;i<8;i++){        //MATRIS SIFIRLAMA
            for(j=0;j<8;j++){
                zormatris[i][j]=0;
            }
        }
        
	    srand(time(NULL));
    
    for(i=0; i<64; i++){         //MATRIS OLUSTURMA
        k = rand() %8  ;
        l = rand() %8  ;
        
        if(zormatris[k][l]==0){
            zormatris[k][l]=zordizi[i];
            
        }     
         else{
            i--;
        }
    }
     for(i=0;i<16;i++){         //HAFIZA SIFIRLAMA
    	for(j=0;j<2;j++){
    		zorhafiza[i][j]=8;
					}
   	}
    while(puanoyuncu < 17 && puanpc < 17 && (puanoyuncu+puanpc) < 32){    //OYUN BASLIYOR <3
    	
    	do{
    		
    	getch();
	   	system("cls");
    		
    		printf("\t        OYUN TAHTASI");
	   printf("\n\n\n");
	   		for(i=0;i<8;i++){  
	    printf("\t\t");     			 //GOSTERGE YANSITMA
        for(j=0;j<8;j++){
            printf("%c ",zorgosterge[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
		
    	printf("Oyun Sirasi: Oyuncu\n\n");
    	printf("Ilk Kartin Kordinatlarini Giriniz: ");
    	scanf("%d %d",&satir1,&sutun1);
    	printf("Tahmin Ettiginiz Kart: %d\n",zormatris[satir1][sutun1]);
    	
    	printf("\nIkinci Kartin Kordinatlarini Giriniz: ");
    	scanf("%d %d",&satir2,&sutun2);
    	printf("Tahmin Ettiginiz Kart: %d\n",zormatris[satir2][sutun2]);
    	
    	tahminoyuncu++;
    	
    	if(zormatris[satir1][sutun1]==zormatris[satir2][sutun2]){
    		
    		puanoyuncu++;
    		
    		printf("Dogru Tahmin \n");
    		
    		
    		
    		zorgosterge[satir1][sutun1]='-';
    		zorgosterge[satir2][sutun2]='-';
    		
    		
	   		
	   		 

			}
			else{
				
				zorhafiza[t%16][0]=satir1;
				zorhafiza[t%16][1]=sutun1;
				zorhafiza[(t+1)%16][0]=satir2;
				zorhafiza[(t+1)%16][1]=sutun2;
				
				t++;
				t++;
				
			}
			
			printf("\nOyuncunun Puani: %d\n",puanoyuncu);
			
			
		}
		while(zormatris[satir1][sutun1]==zormatris[satir2][sutun2]);
		
		
		
		do{
			printf("\nOyun Sirasi: Bilgisayar...");
			
			getch();
	   	system("cls");
	   	
	   	 printf("\t        OYUN TAHTASI");
	   printf("\n\n\n");
	   		 		for(i=0;i<8;i++){  
	    printf("\t\t");      						//GOSTERGE YANSITMA
        for(j=0;j<8;j++){
            printf("%c ",zorgosterge[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
	    		
	    		printf("Oyun Sirasi: Bilgisayar\n\n"); 
			
			satir1=rand()%8;
			sutun1=rand()%8;
			printf("Bilgisayarin Tahmini: %d %d:\n",satir1,sutun1);
			printf("Kartin Degeri: %d\n",zormatris[satir1][sutun1]);
			
			 ex=0;
				i=0;
				while(ex!=1 && i<8){
			
					if((zormatris[satir1][sutun1]) == (zormatris[zorhafiza[i][0]][zorhafiza[i][1]]))
					{
						ex=1;
						}
						else{
						
						 i=i+1;	
					}
				}
				if(ex==1){
				
				puanpc++;
				tahminpc++;
					
				
			zorhafiza[i][0]=satir2;
				zorhafiza[i][1]=sutun2;
				
					zorgosterge[satir1][sutun1]='-';
    				zorgosterge[satir2][sutun2]='-';
				
				printf("\nBilgisayarin Tahmini: %d %d\n",satir2,sutun2);
				printf("Kartin Degeri: %d\n",zormatris[satir2][sutun2]);
				printf("Dogru Tahmin \n\n");
				
				zorhafiza[i][0]=33;
				zorhafiza[i][1]=33;
				
			}
			else{
			
			satir2=rand()%8;
			sutun2=rand()%8;
			printf("\nBilgisayarin Tahmini: %d %d:\n",satir2,sutun2);
			printf("Kartin Degeri: %d\n",zormatris[satir2][sutun2]);
			
			tahminpc++;
			
			zorhafiza[t%16][0]=satir1;
				zorhafiza[t%16][1]=sutun1;
				zorhafiza[(t+1)%16][0]=satir2;
				zorhafiza[(t+1)%16][1]=sutun2;
				
				t++;
				t++;
			
			if(zormatris[satir2][sutun2]==zormatris[satir1][sutun1]){
				
				puanpc++;
					printf("Dogru Tahmin \n\n");
				
					zorgosterge[satir1][sutun1]='-';
    				zorgosterge[satir2][sutun2]='-';
				
				}
			}
			
			printf("Bilgisayarin Puani: %d \n",puanpc);
			
			
		}
    	while(zormatris[satir1][sutun1]==zormatris[satir2][sutun2]);
    	
    	printf("\nOyun Sirasi: Oyuncu...");
    		
	}
		system("cls");
		if(puanoyuncu<puanpc){
			printf("\t\***KAZANAN BILGISAYAR***\n\n");
			printf("TOPLAM PUAN: %d\n",puanpc);
			printf("TOPLAM TAHMÝN SAYISI: %d",tahminpc);
		}
		else{
			printf("\t\***KAZANAN OYUNCU***");
			printf("TOPLAM PUAN: %d\n",puanoyuncu);
			printf("TOPLAM TAHMÝN SAYISI: %d",tahminoyuncu);
		}
     
    
   }
   
    return 0;
}

