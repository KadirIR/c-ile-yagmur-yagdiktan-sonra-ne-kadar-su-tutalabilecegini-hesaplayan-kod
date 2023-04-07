#include <stdio.h>
#include <stdlib.h>

int maksimumsukapasitesi(int yukseklik[], int d) {
    int k;
    int *maksimumsol= (int*)malloc(sizeof(int) * d);  // Sol taraftaki kapasiteyi en y�ksek tutmak i�in dizi olu�turdum.
    int *maksimumsag= (int*)malloc(sizeof(int) * d);  // Sa� taraftaki kapasiteyi en y�ksek tutmak i�in dizi olu�turdum.
    int suyunkapasitesi = 0;

    //Sol tarafin �ubuk de�erini bulmak i�in i�lem sat�r�.
    maksimumsol[0] = yukseklik[0];
    for (k = 1; k < d; k++) {
        maksimumsol[k] = maksimumsol[k-1] > yukseklik[k] ? maksimumsol[k-1] : yukseklik[k]; 
	}
    //Sa� tarafin �ubuk de�erini bulmak i�in i�lem sat�r�.
    maksimumsag[d-1] = yukseklik[d-1];
    for (k = d-2; k >= 0; k--) {
        maksimumsag[k] = maksimumsag[k+1] > yukseklik[k] ? maksimumsag[k+1] : yukseklik[k]; 
    }

    //�ki taraf�m �uubklar�n�n kapasitesi ve toplam su kapasitsi hesaplama i�lemi.
    for (k = 1; k < d-1; k++) {
        suyunkapasitesi += (maksimumsol[k] < maksimumsag[k] ? maksimumsol[k] : maksimumsag[k]) - yukseklik[k]; //�ki taraf�m �uubklar�n�n kapasitesi ve toplam su kapasitsi hesaplama i�lemi.
    }

    free(maksimumsol); // Maksimumsol dizisi i�in ayr�lan belle�i serbest b�rak�yorum.
    free(maksimumsag); // Maksimumsag dizisi i�in ayr�lan belle�i serbest b�rak�yorum.

    return suyunkapasitesi > 0 ? suyunkapasitesi : 0;  //Hesaplanan i�lem kullan�labilmesi i�in d�nd�r�l�yor.
}

int main() {
    int yukseklik[] = {4,2,1,3,2,0,1,2,1,2};
    int d = sizeof(yukseklik)/sizeof(yukseklik[0]); // Yuksekli�i hesaplama i�lemi.
    int kapasite = maksimumsukapasitesi(yukseklik, d);  
    printf("Yagmur sonrasi biriken su miktari: %d\n", kapasite);
    return 0;
}


