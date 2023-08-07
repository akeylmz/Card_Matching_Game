
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int level;
	int easyMatrix[4][4];
	char easyTempMatrix[4][4];
	int easyList[16]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8};
	int easyMemory[2][2];
	int mediumMatrix[6][6];
	char mediumTempMatrix[6][6];
	int mediumList[36]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15,16,16,17,17,18,18};
	int mediumMemory[6][2];
	int hardMatrix[8][8];
	char hardTempMatrix[8][8];
	int hardList[64]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15,16,16,17,17,18,18,19,19,20,20,21,21,22,22,23,23,24,24,25,25,26,26,27,27,28,28,29,29,30,30,31,31,32,32};
	int hardMemory[16][2];
	int pointGamer=0,pointPc=0;
	int guessGamer=0,guessPc=0;
	int line_1,column_1,line_2,column_2;
	int i,j,k,l,ex,c,a=0;
	int t=0;
	
	
	
   printf("\n\t*********** CARD MATCHING GAME ***********\n\n\n");

    printf("CHOOSE DIFFICULTY LEVEL:\n1-EASY\n2-MEDIUM\n3-HARD\n\n");
    scanf("%d", &level);

    system("cls");

    if (level == 1)
    {
        printf("SELECTED MODE: EASY\n");
        printf("RULES:\n*THE GAME CONSISTS OF 16 CARDS, 8 PAIRS IN TOTAL\n*WHEN IT'S YOUR TURN, SELECT TWO CARDS THAT YOU THINK ARE THE SAME\n*IF YOU MAKE A CORRECT MATCH, YOU CAN CONTINUE YOUR TURN\n*IF YOU MAKE A WRONG MATCH, IT WILL BE THE COMPUTER'S TURN");
        printf("\n\n");
        printf("STARTING THE GAME...");

   	for(i=0;i<4;i++){           //CREATING INDICATORS
   		for(j=0;j<4;j++){
   			easyTempMatrix[i][j]='*';
		   }
	   }
	   
	    
	    for(i=0;i<4;i++){        //RESET MATRIX
            for(j=0;j<4;j++){
                easyMatrix[i][j]=0;
            }
        }
        
	    srand(time(NULL));
    
    for(i=0; i<16; i++){         //CREATING THE MATRIX
        k = rand() %4  ;
        l = rand() %4  ;
        
        if(easyMatrix[k][l]==0){
            easyMatrix[k][l]=easyList[i];
            
        }     
         else{
            i--;
        }
    }
    
    while(pointGamer < 5 && pointPc < 5 && pointGamer+pointPc < 8){    //Game Start <3
    	
    	do{
    		
    			getch();
	   	system("cls");
    		
    		printf("\t      GAME BOARD");
	   printf("\n\n\n");
	   		for(i=0;i<4;i++){   
	   printf("\t\t");          //DISPLAY
        for(j=0;j<4;j++){
        	
            printf("%c ",easyTempMatrix[i][j]);
        	}
    
	    printf("\n");
	    		}
	    printf("\n\n\n");
		
    	printf("Order of Play: Player\n\n");
    	printf("Enter the Coordinates of the First Card: ");
    	scanf("%d %d",&line_1,&column_1);
    	printf("Your Predicted Card: %d\n",easyMatrix[line_1][column_1]);
    	
    	printf("\nEnter the Coordinates of the Second Card: ");
    	scanf("%d %d",&line_2,&column_2);
    	printf("Your Predicted Card: %d\n",easyMatrix[line_2][column_2]);
    	
    	guessGamer++;
    	
    	if(easyMatrix[line_1][column_1]==easyMatrix[line_2][column_2]){
    		
    		pointGamer++;
    		
    		printf("Right Guess \n");
    		
    		
    		
    		easyTempMatrix[line_1][column_1]='-';
    		easyTempMatrix[line_2][column_2]='-';
    		
    		
	   		
	   		 

			}
			else{
				
				easyMemory[0][0]= line_1;
				easyMemory[0][1]= column_1;
				easyMemory[1][0]= line_2;
				easyMemory[1][1]= column_2;
				
			}
			
			printf("\nGamer's Point: %d\n",pointGamer);
			
		}
		while(easyMatrix[line_1][column_1]==easyMatrix[line_2][column_2]);
		
		
		
		do{
			printf("\nGame Order: Computer...");
			
			getch();
	   	system("cls");
	   	
	   	 printf("\t      GAME BOARD");
	   printf("\n\n\n");
	   		for(i=0;i<4;i++){   
	   printf("\t\t");          //DISPLAY
        for(j=0;j<4;j++){
        	
            printf("%c ",easyTempMatrix[i][j]);
        	}
    
	    printf("\n");
	    		}
	    printf("\n\n\n");
	    		
	    		printf("Order of Play: Computer\n\n"); 
			
			line_1=rand()%4;
			column_1=rand()%4;
			printf("Guess of Computer %d %d:\n",line_1,column_1);
			printf("Value of Card: %d\n",easyMatrix[line_1][column_1]);
			
				ex=0;
				i=0;
				while(ex!=1 && i<2){
			
					if((easyMatrix[line_1][column_1]) == (easyMatrix[easyMemory[i][0]][easyMemory[i][1]]))
					{
						ex=1;
						}
						else{
						
						 i=i+1;	
					}
				}
			if(ex == 1){
				
				pointPc++;
				guessPc++;
					
				
				easyMemory[i][0]=line_2;
				easyMemory[i][1]=column_2;
				
					easyTempMatrix[line_1][column_1]='-';
    				easyTempMatrix[line_2][column_2]='-';
				
				printf("\nGuess of Computer %d %d\n",line_2,column_2);
				printf("Value of Card: %d\n",easyMatrix[line_2][column_2]);
				printf("Guess Right \n\n");
				
				easyMemory[i][0]=7;
				easyMemory[i][1]=7;
				
			}
		else {
			
			a=0;
			while(a==0){
			
			line_2=rand()%4;
			column_2=rand()%4;
			if(line_1!=line_2){
				if(column_1!=column_2){
					a=1;
				}
			}
		}
			printf("\nGuess of Computer %d %d:\n",line_2,column_2);
			printf("Value of Card: %d\n",easyMatrix[line_2][column_2]);
			
			guessPc++;
				
			
			if(easyMatrix[line_2][column_2]==easyMatrix[line_1][column_1]){
				
				pointPc++;
				
					easyTempMatrix[line_1][column_1]='-';
    				easyTempMatrix[line_2][column_2]='-';
				
				}
			}
			
			
			
			printf("Point of Computer: %d \n",pointPc);
			
			
			
		}
    	while(easyMatrix[line_1][column_1]==easyMatrix[line_2][column_2]);
    	
    	printf("\nOrder of Play: Player...");
    	
	}
		system("cls");
		if(pointGamer<pointPc){
			printf("\t\***PC WIN***\n\n");
			printf("TOTAL SCORE: %d\n",pointPc);
			printf("TOTAL NUMBER OF GUESS: %d",guessPc);
		}
		else{
			printf("\t\***PLAYER WIN***\n\n");
			printf("TOTAL SCORE: %d\n",pointGamer);
			printf("TOTAL NUMBER OF GUESS: %d",guessGamer);
		}
    
    
   
    

   	
   	
   	
   	
}
   if(level==2){
   	printf("SELECTED MODE: MEDIUM\n");
   	printf("Rules: \ n*Game 18 consists of a total of 36 cards to be Es Card \ n*When it comes to the sequence of the cards you think that you say \ n*If you do the right choice again, you can choose the card again*n If you choose the wrong election");
   	printf("\n\n");
   	printf("START GAME...");
   	
   	for(i=0;i<6;i++){           //CREATING INDICATORS
   		for(j=0;j<6;j++){
   			mediumTempMatrix[i][j]='*';
		   }
	   }
	   
    
	for(i=0;i<6;i++){        //RESET MATRIX
            for(j=0;j<6;j++){
                mediumMatrix[i][j]=0;
            }
        }
        
	    srand(time(NULL));
    
    for(i=0; i<36; i++){         //CREATING THE MATRIX
        k = rand() %6  ;
        l = rand() %6  ;
        
        if(mediumMatrix[k][l]==0){
            mediumMatrix[k][l]=mediumList[i];
            
        }     
         else{
            i--;
        }
    }
    for(i=0;i<6;i++){         //RESET MEMORY
    	for(j=0;j<2;j++){
    		mediumMemory[i][j]=7;
					}
   	}
     while(pointGamer < 10 && pointPc < 10 && (pointGamer+pointPc) < 18){    //OYUN BASLIYOR <3
    	
    	do{
    		
    	getch();
	   	system("cls");
    		
    		printf("\t        GAME BOARD");
	   printf("\n\n\n");
	   		for(i=0;i<6;i++){  
	    printf("\t\t");     			 //DISPLAY
        for(j=0;j<6;j++){
            printf("%c ",mediumTempMatrix[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
		
    	printf("Order of Play: Player\n\n");
    	printf("Enter the Coordinates of the First Card: ");
    	scanf("%d %d",&line_1,&column_1);
    	printf("Your Predicted Card: %d\n",mediumMatrix[line_1][column_1]);
    	
    	printf("\nEnter the Coordinates of the Second Card ");
    	scanf("%d %d",&line_2,&column_2);
    	printf("Your Predicted Card: %d\n",mediumMatrix[line_2][column_2]);
    	
    	guessGamer++;
    	
    	if(mediumMatrix[line_1][column_1]==mediumMatrix[line_2][column_2]){
    		
    		pointGamer++;
    		
    		printf("Guess Right \n");
    		
    		
    		
    		mediumTempMatrix[line_1][column_1]='-';
    		mediumTempMatrix[line_2][column_2]='-';
    		
    		
	   		
	   		 

			}
			else{
				
				mediumMemory[t%6][0]=line_1;
				mediumMemory[t%6][1]=column_1;
				mediumMemory[(t+1)%6][0]=line_2;
				mediumMemory[(t+1)%6][1]=column_2;
				
				t++;
				t++;
				
			}
			
			printf("\nPoint of Gamer: %d\n",pointGamer);
			
			
		}
		while(mediumMatrix[line_1][column_1]==mediumMatrix[line_2][column_2]);
		
		
		
		do{
			printf("\nOrder of Play: Computer...");
			
			getch();
	   	system("cls");
	   	
	   	 printf("\t        GAME BOARD");
	   printf("\n\n\n");
	   		 		for(i=0;i<6;i++){  
	    printf("\t\t");      						//DISPLAY
        for(j=0;j<6;j++){
            printf("%c ",mediumTempMatrix[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
	    		
	    		printf("Order of Play: Computer\n\n"); 
			
			line_1=rand()%6;
			column_1=rand()%6;
			printf("Guess of Computer %d %d:\n",line_1,column_1);
			printf("Value of Card: %d\n",mediumMatrix[line_1][column_1]);
			
			
			    ex=0;
				i=0;
				while(ex!=1 && i<6){
			
					if((mediumMatrix[line_1][column_1]) == (mediumMatrix[mediumMemory[i][0]][mediumMemory[i][1]]))
						{
						ex=1;
						}
						else{
						
						 i++;
							}
				}
				
			
			if(ex==1){
				
				pointPc++;
				guessPc++;
					
				
				mediumMemory[i][0]=line_2;
				mediumMemory[i][1]=column_2;
				
					mediumTempMatrix[line_1][column_1]='-';
    				mediumTempMatrix[line_2][column_2]='-';
				
				printf("\nGuess of Computer %d %d\n",line_2,column_2);
				printf("Value of Card: %d\n",mediumMatrix[line_2][column_2]);
				printf("Guess Rightn \n\n");
				
				mediumMemory[i][0]=7;
				mediumMemory[i][1]=7;
				
			}
			else{
			
			line_2=rand()%6;
			column_2=rand()%6;
			printf("\nGuess of Computer %d %d:\n",line_2,column_2);
			printf("Value of Card: %d\n",mediumMatrix[line_2][column_2]);
			
			guessPc++;
			
			mediumMemory[t%6][0]=line_1;
				mediumMemory[t%6][1]=column_1;
				mediumMemory[(t+1)%6][0]=line_2;
				mediumMemory[(t+1)%6][1]=column_2;
				
				t++;
				t++;
			
			if(mediumMatrix[line_2][column_2]==mediumMatrix[line_1][column_1]){
				
				pointPc++;
					printf("Guess Right \n\n");
				
					mediumTempMatrix[line_1][column_1]='-';
    				mediumTempMatrix[line_2][column_2]='-';
				
				}
			}
			
			
			
			printf("Point of Computer: %d \n",pointPc);
		}
    	while(mediumMatrix[line_1][column_1]==mediumMatrix[line_2][column_2]);
    	
    	printf("\nOrder of Play: Player...");
    	
    	
	}
		system("cls");
		if(pointGamer<pointPc){
			printf("\t\***PC WIN***\n\n");
			printf("TOTAL SCORE: %d\n",pointPc);
			printf("TOTAL NUMBER OF GUESS: %d",guessPc);
		}
		else{
			printf("\t\***PLAYER WIN***");
			printf("TOTAL SCORE: %d\n",pointGamer);
			printf("TOTAL NUMBER OF GUESS: %d",guessGamer);
		}
    
    
   }
   if(level==3){
   	printf("Selected Mod : HARD\n");
printf("RULES:\n*GAME CONSISTS OF A TOTAL OF 64 CARDS, 32 of which are ES-CARDS\n*CHOOSE CARDS THAT YOU THINK ARE MATCHES\n*WHEN YOU MAKE THE RIGHT CARD, YOU CAN MAKE A REPEAT CARD* CALL WHEN YOU MAKE A REPEAT CARD. IT IS ICE ");   	printf("\n\n");
   	printf("START GAME...");
   	
   	for(i=0;i<8;i++){           //CREATING INDICATORS
   		for(j=0;j<8;j++){
   			hardTempMatrix[i][j]='*';
		   }
	   }
    
    	for(i=0;i<8;i++){        //RESET MATRIX
            for(j=0;j<8;j++){
                hardMatrix[i][j]=0;
            }
        }
        
	    srand(time(NULL));
    
    for(i=0; i<64; i++){         //CREATING THE MATRIX
        k = rand() %8  ;
        l = rand() %8  ;
        
        if(hardMatrix[k][l]==0){
            hardMatrix[k][l]=hardList[i];
            
        }     
         else{
            i--;
        }
    }
     for(i=0;i<16;i++){         //RESET MEMORY
    	for(j=0;j<2;j++){
    		hardMemory[i][j]=8;
					}
   	}
    while(pointGamer < 17 && pointPc < 17 && (pointGamer+pointPc) < 32){    //OYUN BASLIYOR <3
    	
    	do{
    		
    	getch();
	   	system("cls");
    		
    		printf("\t        GAME BOARD");
	   printf("\n\n\n");
	   		for(i=0;i<8;i++){  
	    printf("\t\t");     			 //DISPLAY
        for(j=0;j<8;j++){
            printf("%c ",hardTempMatrix[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
		
    	printf("Order of Play: Player\n\n");
    	printf("Enter the Coordinates of the First Card: ");
    	scanf("%d %d",&line_1,&column_1);
    	printf("Your Predicted Card: %d\n",hardMatrix[line_1][column_1]);
    	
    	printf("\nEnter the Coordinates of the Second Card ");
    	scanf("%d %d",&line_2,&column_2);
    	printf("Your Predicted Card: %d\n",hardMatrix[line_2][column_2]);
    	
    	guessGamer++;
    	
    	if(hardMatrix[line_1][column_1]==hardMatrix[line_2][column_2]){
    		
    		pointGamer++;
    		
    		printf("Guess Right \n");
    		
    		
    		
    		hardTempMatrix[line_1][column_1]='-';
    		hardTempMatrix[line_2][column_2]='-';
    		
    		
	   		
	   		 

			}
			else{
				
				hardMemory[t%16][0]=line_1;
				hardMemory[t%16][1]=column_1;
				hardMemory[(t+1)%16][0]=line_2;
				hardMemory[(t+1)%16][1]=column_2;
				
				t++;
				t++;
				
			}
			
			printf("\nPoint of Gamer: %d\n",pointGamer);
			
			
		}
		while(hardMatrix[line_1][column_1]==hardMatrix[line_2][column_2]);
		
		
		
		do{
			printf("\nOrder of Play: Computer...");
			
			getch();
	   	system("cls");
	   	
	   	 printf("\t        GAME BOARD");
	   printf("\n\n\n");
	   		 		for(i=0;i<8;i++){  
	    printf("\t\t");      						//DISPLAY
        for(j=0;j<8;j++){
            printf("%c ",hardTempMatrix[i][j]);
        }
        printf("\n");
    }
    
	    printf("\n\n\n");
	    		
	    		printf("Order of Play: Computer\n\n"); 
			
			line_1=rand()%8;
			column_1=rand()%8;
			printf("Guess of Computer %d %d:\n",line_1,column_1);
			printf("Value of Card: %d\n",hardMatrix[line_1][column_1]);
			
			 ex=0;
				i=0;
				while(ex!=1 && i<8){
			
					if((hardMatrix[line_1][column_1]) == (hardMatrix[hardMemory[i][0]][hardMemory[i][1]]))
					{
						ex=1;
						}
						else{
						
						 i=i+1;	
					}
				}
				if(ex==1){
				
				pointPc++;
				guessPc++;
					
				
			hardMemory[i][0]=line_2;
				hardMemory[i][1]=column_2;
				
					hardTempMatrix[line_1][column_1]='-';
    				hardTempMatrix[line_2][column_2]='-';
				
				printf("\nGuess of Computer %d %d\n",line_2,column_2);
				printf("Value of Card: %d\n",hardMatrix[line_2][column_2]);
				printf("Guess Right \n\n");
				
				hardMemory[i][0]=33;
				hardMemory[i][1]=33;
				
			}
			else{
			
			line_2=rand()%8;
			column_2=rand()%8;
			printf("\nGuess of Computer %d %d:\n",line_2,column_2);
			printf("Value of Card: %d\n",hardMatrix[line_2][column_2]);
			
			guessPc++;
			
			hardMemory[t%16][0]=line_1;
				hardMemory[t%16][1]=column_1;
				hardMemory[(t+1)%16][0]=line_2;
				hardMemory[(t+1)%16][1]=column_2;
				
				t++;
				t++;
			
			if(hardMatrix[line_2][column_2]==hardMatrix[line_1][column_1]){
				
				pointPc++;
					printf("Guess Right \n\n");
				
					hardTempMatrix[line_1][column_1]='-';
    				hardTempMatrix[line_2][column_2]='-';
				
				}
			}
			
			printf("Point of Computer: %d \n",pointPc);
			
			
		}
    	while(hardMatrix[line_1][column_1]==hardMatrix[line_2][column_2]);
    	
    	printf("\nOrder of Play: Player...");
    		
	}
		system("cls");
		if(pointGamer<pointPc){
			printf("\t\***PC WIN***\n\n");
			printf("TOTAL SCORE: %d\n",pointPc);
			printf("TOTAL NUMBER OF GUESS: %d",guessPc);
		}
		else{
			printf("\t\***PLAYER WIN***");
			printf("TOTAL SCORE: %d\n",pointGamer);
			printf("TOTAL NUMBER OF GUESS: %d",guessGamer);
		}
     
    
   }
   
    return 0;
}

