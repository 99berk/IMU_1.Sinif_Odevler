//Berhan Berk Akgün / 21120205310 / BÝL 121

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ortalam_derece(int dereceler[]);
int ortalama_siralama(float ort[]);
int dosya_olustur(float ort[]);

float T1=0,T2=0,T3=0,T4=0,T5=0,T6=0,T7=0,T8=0,T9=0,T10=0,T11=0,T12=0;
char sehirler[11][10];

int main(){
	FILE *dosya;
	dosya = fopen("Kaynak.txt", "r");
    if(dosya == NULL){
    	printf("Dosya yok");
    	exit(1);
	}
	
	int i,dereceler[60];
	
	for(i=0;i<60;i=i+5){
		fscanf(dosya,"%s %d %d %d %d %d",&sehirler[i],&dereceler[i],&dereceler[i+1],&dereceler[i+2],&dereceler[i+3],&dereceler[i+4]);
		printf("%s %d %d %d %d %d \n",sehirler[i],dereceler[i],dereceler[i+1],dereceler[i+2],dereceler[i+3],dereceler[i+4]);
	}
	
	ortalama_derece(dereceler);
	float ort[12]={T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12};
    
    ortalama_siralama(ort);
    
    dosya_olustur(ort);
    
	fclose(dosya);
}

int ortalama_derece(int dereceler[]){
	int j;
	while(j<60){
		if(j<5){
			T1 = T1+dereceler[j];
		}
		if(4<j && j<10){
			T2 = T2+dereceler[j];
		}
		if(9<j && j<15){
			T3 = T3+dereceler[j];
		}
		if(14<j && j<20){
			T4 = T4+dereceler[j];
		}
		if(19<j && j<25){
			T5 = T5+dereceler[j];
		}
		if(24<j && j<30){
			T6 = T6+dereceler[j];
		}
		if(29<j && j<35){
			T7 = T7+dereceler[j];
		}
		if(34<j && j<40){
			T8 = T8+dereceler[j];
		}
		if(39<j && j<45){
			T9 = T9+dereceler[j];
		}
		if(44<j && j<50){
			T10 = T10+dereceler[j];
		}
		if(49<j && j<55){
			T11 = T11+dereceler[j];
		}
		if(54<j && j<60){
			T12 = T12+dereceler[j];
		}
		j++;
	}
	T1=T1/5; T2=T2/5; T3=T3/5; T4=T4/5; T5=T5/5; T6=T6/5; T7=T7/5; T8=T8/5; T9=T9/5; T10=T10/5; T11=T11/5; T12=T12/5;
}

int ortalama_siralama(float ort[]){
	int i,j,w,k=0,t=0;
	char p[10];
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(ort[j]<=ort[i]){
				w=ort[i];
				ort[i]=ort[j];
				ort[j]=w;
			}
		}
	}
}

int dosya_olustur(float ort[]){
	FILE *yenidosya;
	yenidosya = fopen("Hedef.txt","w");
	int x,y=0;
	for(x=0;x<12;x++){
		fprintf(yenidosya,"%.1f ",ort[x]);
		if(x==0){
			y=30;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==1){
			y=40;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==2){
			y=25;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==3){
			y=50;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==4){
			y=5;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==5){
			y=55;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==6){
			y=20;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==7){
			y=35;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==8){
			y=10;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==9){
			y=15;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==10){
			y=45;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
		if(x==11){
			y=0;
			fprintf(yenidosya,"%s \n",sehirler[y]);
		}
	}
	fclose(yenidosya);
}
