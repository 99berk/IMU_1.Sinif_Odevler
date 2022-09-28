/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// 1-100 arasýndaki romen rakamlarýnýn onluk sistemdeki eþitlerini ekrana yazdýran program.
	
    int i=1,j=1,k,x,y,t,l,f,m,z,a;
    
    printf(" 1'den 100'e kadar olan sayilarin romen rakami karsiliklari :\n\n");
    
    while(i<=100){
        if(i==100){
            printf(" %d C",i);
        }
        if(i>=90&&i<=99){
            printf(" %d XC",i);
            if(i==90){
                printf("\n");
            }
        }
        if(i>=50&&i<=89){
            printf(" %d L",i);
            if(i==50){
                printf("\n");
            }
        }
        if(i>=60&&i<=89){
            z = i/10 - 5;
            for(a=1;a<=z;a++){
                printf("X");
            }
            if(60==i||70==i||80==i){
                printf("\n");
            }            
        }
        if(i>=40&&i<=49){
            printf(" %d XL",i);
            if(i==40){
                printf("\n");
            }
        }
        if(i>=10&&i<=39){
            m = i/10;
            printf(" %d ",i);
            for(f=1;f<=m;f++){
                printf("X");
            }
            if(10==i||20==i||30==i){
                printf("\n");
            }
        }
        if(i>=1&&i<=9){
            printf(" %d ",i);
        }
        if(9==i%10){
            printf("IX\n");
        }
        if(6==i%10||7==i%10||8==i%10){
            y = i%10 - 5;
            printf("V");
            for(t=1;t<=y;t++){
                printf("I");
            }
            printf("\n");
        }
        if(5==i%10){
            printf("V\n");
        }
        if(4==i%10){
            printf("IV\n");
        }
        if(1==i%10||2==i%10||3==i%10){
            x = i%10;
            for(k=1;k<=x;k++){
                printf("I");
            }
            printf("\n");
        }
        i++;
    }
    return 0;
}
