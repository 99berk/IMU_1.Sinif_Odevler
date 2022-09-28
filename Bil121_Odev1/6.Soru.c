/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// Üç tamsayý alan ve bu sayýlarýn bir dik üçgenin dik üçgenin üç kenarý olup olamayacaðýna karar veren program.
	
    int a,b,c,x,y,z;
    printf("Bir dik ucgen olusturmak icin 3 kenar uzunlugu giriniz : ");
    scanf("%d %d %d",&a,&b,&c);
    
    x = (a*a)+(b*b);
    y = (a*a)+(c*c);
    z = (b*b)+(c*c);
    
    if ( x == (c*c)){
        printf("Girdiginiz degerlerden hipotenusu %d olan bir dik ucgen elde edilir.", c);
    }
    else if ( y == (b*b)){
        printf("Girdiginiz degerlerden hipotenusu %d olan bir dik ucgen elde edilir.", b);
    }
    else if ( z == (a*a)){
        printf("Girdiginiz degerlerden hipotenusu %d olan bir dik ucgen elde edilir.", a);
    }
    else{
        printf("Girilen kenar uzunluklarýndan dik ucken elde edilemez !");
    }
    
    return 0;
}
