#include<stdio.h>

int main()
{   
   int sayici,not,toplam,ortalama;
   
   toplam = 0;
   sayici= 1;
   
   
   while(sayici<=10)
   {
   	 printf("Notu giriniz:");
   	 scanf("%d",&not);
   	 toplam = toplam+not;
   	 sayici = sayici+1;
   	 
   }
   ortalama = toplam / 10;
   printf("Sinif ortalamasý %d dir.\n",ortalama);
    return 0;   
}
