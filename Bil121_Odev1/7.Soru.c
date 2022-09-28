/* BERHAN BERK AKGÜN _ 21120205310 _ BÝL 121 */

#include <stdio.h>

int main()
{
	// Piramidi oluþturacak C kodu.
	
    int i,j,k,a=8,b=2,t;
    
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(1==j%2){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        while(a>0){
            printf(" ");
            a--;
        }
        a=8;
        a=a-b;
        for(t=1;t<=2;t++){
            b++;
        }
        for(k=1;k<=i;k++){
            if(1==k%2){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
