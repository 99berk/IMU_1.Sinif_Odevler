/* BERHAN BERK AKG�N _ 21120205310 _ B�L 121 */

#include <stdio.h>

int main()
{
	// �ki tamsay� alan ve birinci tamsay�n�n ikinci tamsay�n�n tam kat� olup olmad���n� hesaplayan ve sonucu ekranda g�steren program.
	
    int a,b;
    printf("Bir tam sayi giriniz : ");
    scanf("%d",&a);
    printf("\nBir tam sayi daha giriniz : ");
    scanf("%d",&b);
    if(a%b==0){
        printf("\nIlk girilen tam sayi ikinci girilen tam sayinin tam katidir.");
    }
    else{
        printf("\nIlk girilen sayi ikinci girilen sayinin tam kati degildir.");
    }

    return 0;
}
