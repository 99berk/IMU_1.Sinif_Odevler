/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
	//  “Tuttuðum Sayýyý Tahmin Et” oynatan program.
	
    int a,x;
    char b;
    
    printf(" Tutugum Sayiyi Tahmin Et' oyununa Hosgeldiniz ...\n");
    
    do{
    
        srand(time(NULL));
        a = rand()%1000 + 1;
    
        printf("\n 1 ile 1000 arasinda bir sayi tuttum.\n\n Tahmin edebilir misin?\n\n");
    
        printf(" Lutfen ilk tahmininizi giriniz : ");
        scanf("%d",&x);
    
        while(x>a||x<a){
                if(x<a){
                    printf("\n Tahmin ettiginiz sayi tutugum sayidan KUCUK. Tekrar deneyin.\n\n");
                }
                if(x>a){
                    printf("\n Tahmin ettiginiz sayi tutugum sayidan BUYUK. Tekrar deneyin.\n\n");
                }
                printf(" Lutfen tahmininizi giriniz : ");
                scanf("%d",&x);
        }
        
        printf("\n Tebrikler bildiniz !!!\n\n Tekrar oynamak ister misiniz ? (Evet icin 'E' harfini hayir icin 'H' harfini tuslayiniz.)\n\n ");
        scanf(" %c",&b);
            
    }while(b=='E'||b=='e');
    
    printf("\n Bye bye ...");
    
    return 0;
}
