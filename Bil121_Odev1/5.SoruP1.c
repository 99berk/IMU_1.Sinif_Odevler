/* BERHAN BERK AKG�N _ 21120205310 _ B�L 121 */

#include <stdio.h>

int main()
{
	// Her basama�� 7 ile toplam�n�n 10�luk sistemdeki e�itiyle de�i�tien ve birinci basama�� ���nc� basamak, ikinci basama�� da d�rd�nc� basamak ile yer de�i�tiren �ifreleme program�.
	
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
