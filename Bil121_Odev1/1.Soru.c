/* BERHAN BERK AKG�N _ 21120205310 _ B�L 121 */

#include <stdio.h>

int main()
{
	// Be� basamakl� bir say� giri�i yap�lan, bu say�y� ayr� ayr� basamaklar�na ay�ran ve her basamak aras�na �� bo�luk karakteri koyarak ekrana yazd�ran program. 
	
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
