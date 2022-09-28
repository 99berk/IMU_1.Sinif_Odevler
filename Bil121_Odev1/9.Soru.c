/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// Kullanýcýdan 1994 ile 1999 arasýnda bir yýl girdisi yaptýran ve for döngüleri kullanýlarak ilgili yýlýn takvimini ekrana yazdýran program.
	
    int y,i,a=1;
    printf("1994-1999 araligindan bir yil giriniz : ");
    scanf("%d",&y);
    printf("\n %d yilina ait takvim :\n\n",y);
    
    for(i=1;i<=12;i++){
        if (i==1){
            printf(" ---OCAK---\n");
        }
        if (i==2){
            printf(" ---SUBAT---\n");
        }
        if (i==3){
            printf(" ---MART---\n");
        }
        if (i==4){
            printf(" ---NISAN---\n");
        }
        if (i==5){
            printf(" ---MAYIS---\n");
        }
        if (i==6){
            printf(" ---HAZIRAN---\n");
        }
        if (i==7){
            printf(" ---TEMMUZ---\n");
        }
        if (i==8){
            printf(" ---AGUSTOS---\n");
        }
        if (i==9){
            printf(" ---EYLUL---\n");
        }
        if (i==10){
            printf(" ---EKIM---\n");
        }
        if (i==11){
            printf(" ---KASIM---\n");
        }
        if (i==12){
            printf(" ---ARALIK---\n");
        }
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            do{
                printf(" %d",a);
                if(a==7){
                    printf("\n");
                }
                if(a==14){
                    printf("\n");
                }
                if(a==21){
                    printf("\n");
                }
                if(a==28){
                    printf("\n");
                }
                if(a==31){
                    printf("\n\n");
                }
                a++;
            }while(a <= 31);
            a=a-31;
        }
        if(y==1996){
            if(i==2){
                do{
                    printf(" %d",a);
                    if(a==7){
                            printf("\n");
                    }
                    if(a==14){
                            printf("\n");
                    }
                    if(a==21){
                            printf("\n");
                    }
                    if(a==28){
                            printf("\n");
                    }
                    if(a==29){
                            printf("\n\n");
                    }
                    a++;
                }while(a <= 29);
                a=a-29;
            } 
        }
        else{
            if(i==2){
                do{
                    printf(" %d",a);
                    if(a==7){
                            printf("\n");
                    }
                    if(a==14){
                            printf("\n");
                    }
                    if(a==21){
                            printf("\n");
                    }
                    if(a==28){
                            printf("\n\n");
                    }
                    a++;
                }while(a <= 28);
                a=a-28;
            }   
        }
        if(i==4||i==6||i==9||i==11){
            do{
                printf(" %d",a);
                if(a==7){
                    printf("\n");
                }   
                if(a==14){
                    printf("\n");
                }
                if(a==21){
                    printf("\n");
                }
                if(a==28){
                    printf("\n");
                }
                if(a==30){
                    printf("\n\n");
                }
                a++;
            }while(a <= 30);
            a=a-30;
        }
    }
    return 0;
}
