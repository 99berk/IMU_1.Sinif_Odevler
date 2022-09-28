/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// Beþ basamaklý bir sayý giriþi yapýlan, bu sayýyý ayrý ayrý basamaklarýna ayýran ve her basamak arasýna üç boþluk karakteri koyarak ekrana yazdýran program. 
	
    int x,y,z,t=0;  
    printf("Bes basamakli bir sayi giriniz : ");
    scanf("%d",&x);
    
    while(x > 0){
        z = x % 10;
        t = (t*10) + z;
        x = x/10;
    }
    printf("Girilen sayi : ");
    while(t > 0){  
        y = t % 10;
        printf("%d   ", y);  
        t = t/10;  
    }
    
    return 0;
}
