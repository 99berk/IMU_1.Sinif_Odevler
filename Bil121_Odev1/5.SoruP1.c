/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// Her basamaðý 7 ile toplamýnýn 10’luk sistemdeki eþitiyle deðiþtien ve birinci basamaðý üçüncü basamak, ikinci basamaðý da dördüncü basamak ile yer deðiþtiren þifreleme programý.
	
    int x,y,z,t=0,i=1,a,b,j=1;
    
    printf("Sifrelemek istediginiz 4 basamakli veriyi giriniz : ");
    scanf("%d",&x);
    
    while(x > 0){
        z = x % 10;
        t = (t*10) + z;
        x = x/10;
    }
    a = t;
    printf("\nSifrelenmis veriniz : ");
    while(t > 0){
        y = t % 10;
        if(i==3||i==4){
            printf("%d", y + 7);
            
        }
        t = t/10;
        i++;
    }
    while(a > 0){
        b = a % 10;
        if(j==1||j==2){
            printf("%d", b + 7);
        }
        a = a/10;
        j++;
    }
    return 0;
}
