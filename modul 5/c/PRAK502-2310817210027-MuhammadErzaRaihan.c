#include <stdio.h>
#include <math.h>


int mutlak(int angka){
    if(angka < 0){
        angka = -angka;
    }
    return angka;
}

int hitung(int nilai1, int nilai2){
    int hasil = 0;
    if(nilai1 == nilai2){
        hasil = nilai1;
    }else{
        hasil = abs(nilai1 - nilai2);
    }
    return hasil;
}



int main()
{
 int a,b,c,d;

 scanf("%d %d %d %d",&a,&c,&b,&d);
 int Hasil = hitung(a,b) + hitung(c,d);
 printf("%d",mutlak(Hasil));
 return 0;
}