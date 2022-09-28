/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// Þifrelenmiþ sayýlarý alan ve eski haline getiren program.
	
    int x,y,z,i=1,t,j=1,a;
    
    printf("Cozmek istediginiz sifreli veriyi giriniz : ");
    scanf("%d",&x);

    printf("\nSirasiz 4 haneli veri : ");
    while(x>0){
        if(0==x%10){
            printf("3");
            x = x/100;
        }
        if(7<=x%10){
            printf("%d", x%10 - 7);
            x = x/10;
        }
        if(7>x%10 && 0!=x%10){
            printf("%d", x%10 + 10 - 7);
            x = x/100;
        }
    }
    
    printf("\n\nSifreyi cozmek icin 4 haneli sirasiz veriyi giriniz : ");
    scanf("%d",&y);
    t = y;
    printf("\nSifre cozuldu! 4 haneli sifresiz veriniz : ");
    while(y>0){
        z = y%10;
        if(i==3||i==4){
            printf("%d",z);
        }
        y = y/10;
        i++;
    }
    while(t>0){
        a = t%10;
        if(j==1||j==2){
            printf("%d",a);
        }
        t = t/10;
        j++;
    }
    return 0;
}
