#include <stdio.h>
#include <string.h>

// HASTANE RANDEVU SÝSTEMÝ - ÖDEV - BERHAN BERK AKGÜN / 21120205310

void hasta_bilgileri();
void muayene_bolumleri();
void randevu_ay();
void randevu_tarihi();
void randevu_saati();

char ad[20];
char soyisim[20];
int dt, *a;
long long int tc;
char *mu_bol[16];
char *bol[16];
int tarih[7][5];
int saat[2][20];
    
int main()
{
    char secim;
    int randevu_tipi;
    char *ran_ti[10];
    int gg, aa;
    float ss;
    char edit;
    
    printf("\n Hastanemize Hosgeldiniz...\n");
    printf("\n Randevu almak icin 'R'/'r' tusuna basiniz : ");
    scanf(" %c", &secim);
    
    do{
    	if(secim=='r' || secim=='R'){
        	hasta_bilgileri();
    	}
    	else{
        	printf("\n Saglikli gunler dileriz...\n");
        	break;
    	}
    	
    	printf("\n Randevu tipini seciniz : \n");
    	printf(" 1.Check Up\n 2.Muayene\n 3.Asi\n\n Seciminiz (1/2/3) : ");
    	scanf("%d", &randevu_tipi);
    
    	switch(randevu_tipi){
        	case 1:
            	ran_ti[10] = "Check Up";
            	break;
        	case 2:
            	ran_ti[10] = "Muayene";
            	muayene_bolumleri();
            	break;
        	case 3:
            	ran_ti[10] = "Asi";
            	break;
    	}
    	
		printf("\n Radevu tarihi seciniz : \n\n");
		randevu_ay();
		printf("\n Sectiginiz ay (aa) : ");
		scanf("%d", &aa);
		
		do{
			if(aa<1||aa>12){
				printf("\n Hatali secim yaptiniz ! Lutfen tekrar secin : ");
				scanf("%d", &aa);
			}
		}while(aa<1||aa>12);
		
    	printf("\n Randevu gunu seciniz : \n\n");
    	randevu_tarihi();
    	printf("\n Sectiginiz gun (gg) : ");
    	scanf("%d", &gg);
	
		do{
    		if(gg<1||gg>31){
    			printf("\n Hatali secim yaptiniz ! Lutfen tekrar secin : ");
    			scanf("%d", &gg);
			}
    	}while(31<gg||gg<1);
    
    	printf("\n Randevu saati seciniz : \n\n");
    	randevu_saati();
    	printf("\n Sectiginiz saat (ss.dd) : ");
    	scanf("%f", &ss);
    
    	do{
    		if(ss<7||ss>17){
    			printf("\n Hatali secim yaptiniz ! Lutfen tekrar secin : ");
    			scanf("%f", &ss);
			}
		}while(ss<7||ss>17);
    
    	printf("\n Randevunuz basariyla olusturulmustur...");
    	printf("\n\n --Randevu bilgileriniz--");
    	printf("\n  Isminiz : %s", ad);
		printf("\n  Soy isminiz : %s", soyisim);
    	printf("\n  Dogum tarihiniz : %d ", a);
    	printf("\n  TC kimlik numaraniz : %lld", tc);
    	printf("\n  Randevu tipiniz : %s", ran_ti[10]);
    	if(randevu_tipi==2){
			printf("\n  Sectiginiz muayene bolumu : %s", *(bol));
    	}
    	printf("\n  Randevu tarihiniz : %d.%d.2022", gg, aa);
    	printf("\n  Randevu saatiniz : %2.2f", ss);
    
    	printf("\n\n Secimlerinizde degisiklik yapmak istiyor musunuz ? ('E'/'H') : ");
    	scanf(" %c", &edit);
	}while(edit == 'e' || edit == 'E');
	
	printf("\n Iyi gunler dileriz...");
	
    return 0;
}

void hasta_bilgileri()
{
	printf("");
	gets(ad);
    printf("\n Isminiz : ");
    gets(ad);
    printf(" Soy isminiz : ");
    gets(soyisim);
    printf(" Dogum tarihiniz : ");
    //scanf("%d", &dt);
    scanf("%d", &a);
    printf(" TC kimlik numaraniz : ");
    scanf("%lld", &tc);
}

void muayene_bolumleri()
{
    int bolum;
	printf("\n Muayene olmak istediginiz bolumu seciniz : ");
    printf("\n 1.Dahiliye\n 2.Dis Poliklinigi\n 3.Endokrinoloji\n 4.Fizik Tedavi\n 5.Genel Cerrahi\n");
    printf(" 6.Goz Hastaliklari\n 7.Kardiyoloji\n 8.KBB\n 9.Noroloji\n 10.Ortopedi\n\n Seciminiz (1/2/.../10) : ");
    scanf("%d", &bolum);
    switch(bolum){
        case 1:
            mu_bol[16] = "Dahiliye";
            break;
        case 2:
            mu_bol[16] = "Dis Poliklinigi";
            break;
        case 3:
            mu_bol[16] = "Endokrinoloji";
            break;
        case 4:
            mu_bol[16] = "Fizik Tedavi";
            break;
        case 5:
            mu_bol[16] = "Genel Cerrahi";
            break;
        case 6:
            mu_bol[16] = "Goz Hastaliklari";
            break;
        case 7:
            mu_bol[16] = "Kardiyoloji";
            break;
        case 8:
            mu_bol[16] = "KBB";
            break;
        case 9:
            mu_bol[16] = "Noroloji";
            break;
        case 10:
            mu_bol[16] = "Ortopedi";
            break;    
    }
    *bol = mu_bol[16];
}

void randevu_ay()
{
	char aa[]=" 1.Ocak \n 2.Subat \n 3.Mart \n 4.Nisan \n 5.Mayis \n 6.Haziran \n 7.Temmuz \n 8.Agustos \n 9.Eylul \n 10.Ekim \n 11.Kasim \n 12.Aralik";
    puts(aa);
}

void randevu_tarihi()
{
    int i, j, t=0;
    printf("   P   S   C   P   C   C   P\n   -------------------------\n");
    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            t++;
            if(t<=31){
                tarih[i][j] = t;
                printf("%4d", tarih[i][j]);
            }
        }
        printf("\n");
    }
}

void randevu_saati()
{
    int i, j, k=7, a=0, b=30;
    for(i=0; i<20; i++){
        if(i%2==1){
            k++;
        }
        printf(" ");
        for(j=0; j<2; j++){
            if(j%2==0 && k<18){
                saat[i][j] = k;
            }
            if(j%2==1 && i%2==1){
                printf("0");
                saat[i][j] = a;
            }
            if(j%2==1 && i%2==0){
                saat[i][j] = b;
            }
            printf("%d", saat[i][j]);
            if(j%2==0){
                printf(".");
            }
        }
        printf("\n");
    }
}
