#include <stdio.h>
void hitung_total(int harga[], int jumlah[], int n, float* total, float* diskon) {
    *total = 0;
    *diskon = 0;
    
    for (int i = 0; i < n; i++) {
        *total += harga[i] * jumlah[i]; 
    }
    
    
    if (*total > 100000) {
        *diskon = 0.1 * (*total);
    }
    
    *total -= *diskon; 
}


void tampilkan_struk(char nama_barang[][50], int harga[], int jumlah[], int n, float total, float diskon) {
    printf("\n===== Struk Pembelian =====\n");
    printf("%-20s %-10s %-10s\n", "Nama Barang", "Harga", "Jumlah");
    
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-10d\n", nama_barang[i], harga[i], jumlah[i]);
    }
    
    printf("\nTotal Harga: %.2f\n", total + diskon);  
    printf("Diskon: %.2f\n", diskon);
    printf("Total Pembayaran: %.2f\n\n", total);
    printf("\nMinum pepsi di atas gaja-\n");
    printf("\t\t\t\t===================================================================\n");
    printf("\t\t\t\t||               TERIMA KASIH TELAH BERBELANJA                   ||\n");
    printf("\t\t\t\t||                    DI TOKO KANG DANIEL                        ||\n");
    printf("\t\t\t\t||                      SEE YOU AGAIN!!                          ||\n");
    printf("\t\t\t\t===================================================================\n");
}


int main() {
    int n;
    printf("\t\t\t\t===================================================================\n");
    printf("\t\t\t\t||            SELAMAT DATANG DI TOKO KANG DANIEL                 ||\n");
    printf("\t\t\t\t||                     TOKO SERBA ADA!!                          ||\n");
    printf("\t\t\t\t===================================================================\n");

    
    printf("Masukkan jumlah item yang dibeli: ");
    scanf("%d", &n);
    
    char nama_barang[n][50];
    int harga[n], jumlah[n];
    
    
    for (int i = 0; i < n; i++) {
        printf("\nMasukkan nama barang %d: ", i + 1);
        scanf("%s", nama_barang[i]);
        printf("Masukkan harga barang %d: ", i + 1);
        scanf("%d", &harga[i]);
        printf("Masukkan jumlah barang %d: ", i + 1);
        scanf("%d", &jumlah[i]);
    }
    
    float total, diskon;
    

    hitung_total(harga, jumlah, n, &total, &diskon);
    
    
    tampilkan_struk(nama_barang, harga, jumlah, n, total, diskon);
    
    return 0;
}