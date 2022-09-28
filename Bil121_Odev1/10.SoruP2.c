/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

  //  “Tuttuðum Sayýyý Tahmin Et” oynatan programýn fonksiyon kullanýlarak yazýlmýþ hali.

int tahminsonucu(int);

int main()
{
    int x,tahmin=0;
    char b;
    
    printf(" Tutugum Sayiyi Tahmin Et' oyununa Hosgeldiniz ...\n");
    
    do{
    
        printf("\n 1 ile 1000 arasinda bir sayi tuttum.\n\n Tahmin edebilir misin?\n\n");
    
        printf(" Lutfen ilk tahmininizi giriniz : ");
        scanf("%d",&x);
        
        tahmin = tahminsonucu(x);
        
        printf("\n Tebrikler bildiniz !!!\n\n Tekrar oynamak ister misiniz ? (Evet icin 'E' harfini hayir icin 'H' harfini tuslayiniz.)\n\n ");
        scanf(" %c",&b);
            
    }while(b=='E'||b=='e');
    
    printf("\n Bye bye ...");

    return 0;
}

int tahminsonucu(int i){
    
    int a;
    
    srand(time(NULL));
    a = rand()%1000 + 1;

    while(i>a||i<a){
                if(i<a){
                    printf("\n Tahmin ettiginiz sayi tutugum sayidan KUCUK. Tekrar deneyin.\n\n");
                }
                if(i>a){
                    printf("\n Tahmin ettiginiz sayi tutugum sayidan BUYUK. Tekrar deneyin.\n\n");
                }
                printf(" Lutfen tahmininizi giriniz : ");
                scanf("%d",&i);
        }
}
