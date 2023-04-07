#include <stdio.h>
#include <stdlib.h>

int maksimumsukapasitesi(int yukseklik[], int d) {
    int k;
    int *maksimumsol= (int*)malloc(sizeof(int) * d);  // Sol taraftaki kapasiteyi en yüksek tutmak için dizi oluþturdum.
    int *maksimumsag= (int*)malloc(sizeof(int) * d);  // Sað taraftaki kapasiteyi en yüksek tutmak için dizi oluþturdum.
    int suyunkapasitesi = 0;

    //Sol tarafin çubuk deðerini bulmak için iþlem satýrý.
    maksimumsol[0] = yukseklik[0];
    for (k = 1; k < d; k++) {
        maksimumsol[k] = maksimumsol[k-1] > yukseklik[k] ? maksimumsol[k-1] : yukseklik[k]; 
	}
    //Sað tarafin çubuk deðerini bulmak için iþlem satýrý.
    maksimumsag[d-1] = yukseklik[d-1];
    for (k = d-2; k >= 0; k--) {
        maksimumsag[k] = maksimumsag[k+1] > yukseklik[k] ? maksimumsag[k+1] : yukseklik[k]; 
    }

    //Ýki tarafým çuubklarýnýn kapasitesi ve toplam su kapasitsi hesaplama iþlemi.
    for (k = 1; k < d-1; k++) {
        suyunkapasitesi += (maksimumsol[k] < maksimumsag[k] ? maksimumsol[k] : maksimumsag[k]) - yukseklik[k]; //Ýki tarafým çuubklarýnýn kapasitesi ve toplam su kapasitsi hesaplama iþlemi.
    }

    free(maksimumsol); // Maksimumsol dizisi için ayrýlan belleði serbest býrakýyorum.
    free(maksimumsag); // Maksimumsag dizisi için ayrýlan belleði serbest býrakýyorum.

    return suyunkapasitesi > 0 ? suyunkapasitesi : 0;  //Hesaplanan iþlem kullanýlabilmesi için döndürülüyor.
}

int main() {
    int yukseklik[] = {4,2,1,3,2,0,1,2,1,2};
    int d = sizeof(yukseklik)/sizeof(yukseklik[0]); // Yuksekliði hesaplama iþlemi.
    int kapasite = maksimumsukapasitesi(yukseklik, d);  
    printf("Yagmur sonrasi biriken su miktari: %d\n", kapasite);
    return 0;
}


