/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// Ýki tamsayý alan ve birinci tamsayýnýn ikinci tamsayýnýn tam katý olup olmadýðýný hesaplayan ve sonucu ekranda gösteren program.
	
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
