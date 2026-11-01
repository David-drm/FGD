#include <stdio.h>

int main() {
    int baris, kolom;
    int max, min;
    float rata = 0;
    int sum = 0;
    // Input baris dan kolom
    printf("Ketik Baris: ");
    scanf("%d", &baris);
    printf("Ketik Kolom: ");
    scanf("%d", &kolom);

    // Deklarasi array setelah ukuran diketahui
    int a[baris][kolom]; 
    int b[baris][kolom]; 
    int c[baris][kolom]; 
    
    // Masukan input ke array A
    printf("Array A\n");
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Masukan input ke array B
    printf("Array B\n");
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // Penjumlahan Array C
    printf("\nHasil Penjumlahan (Array C)\n");
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("C[%d][%d] = %d\n", i, j, c[i][j]); 
        }
    }

    // Logika untuk Maks & Min
    max = c[0][0];
    min = c[0][0];

    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            if(c[i][j] > max) {
                max = c[i][j];
            }
            if(c[i][j] < min) {
                min = c[i][j];
            }
        }
    }
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            sum += a[i][j] + b[i][j];
        }
    }

    
    // Tampilkan hasil
    printf("\nNilai Maksimum = %d\n", max);
    printf("Nilai Minimum = %d\n", min);
    rata = (float)sum / (baris * kolom);
    printf("Nilai Rata-rata = %.2f\n", rata);

    return 0;
}