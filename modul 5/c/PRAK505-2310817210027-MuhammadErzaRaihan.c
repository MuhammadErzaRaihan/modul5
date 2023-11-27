#include <stdio.h>

void Biodata(int tahunLahir, char *namaku, char *asal){
    int tahun_sekarang = 2023;
    int umur = tahun_sekarang - tahunLahir;

    printf("Perkenalkan Nama Saya: %s\n", namaku);
    printf("Umur Saya: %d \n", umur);
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal Saya dari: %s\n", asal);
    
    
    
}

int main() {
    int tahunLahir;
    char namaku[20], asal[15];
    
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&namaku);
    scanf(" %[^\n]%*c",&asal);

    Biodata(tahunLahir, namaku, asal);
    return 0;
}