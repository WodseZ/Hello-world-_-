#include<stdio.h>

int main()
{
	float ortalama;
	int sayici,not,toplam;
	
	toplam = 0;
	sayici = 0;
	
	printf("Notu giriniz(Cikis icin -1):");
    scanf("%d",&not);
    
    while(not!=-1)
	{
        toplam=toplam+not;
        sayici=sayici+1;
        printf("Notu giriniz(Cikis icin -1):");
        scanf("%d",&not);
    }
    
    if(sayici!=0)
	{
	   ortalama=(float) toplam/sayici;
	   printf("Sinif ortalamasi %2.f",ortalama);
    }
    else
    printf("Hic not girilmemiþtir\n");
    
    return 0;
}
