/* BERHAN BERK AKG�N _ 21120205310 _ B�L 121 */

#include <stdio.h>

int main()
{
	// 0�dan 10�a kadar olan say�lar�n karelerini ve k�plerini hesaplay�p, sonu�lar� ekrana yazd�ran program.
	
    int i, a, b;
    printf(" Sayi        Karesi          Kupu\n\n");
    for(i=0; i<=10; i++){
       a = i*i;
       b = i*i*i;
       printf("  %d            %d               %d\n\n", i, a, b);
    }

    return 0;
}
