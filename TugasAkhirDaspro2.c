#include<stdio.h>
//menu 1
void bahanMakanan(int *totalHarga, int *totalBarang){
    int bahan, jumlah, harga = 0;
    char lanjut;

    do {

        printf("======================\n");
        printf("1. Garam    Rp.3.000\n");
        printf("2. Gula     Rp.11.000\n");
        printf("3. Telur    Rp.3.000\n");
        printf("4. Sosis    Rp.2.000\n");
        printf("5. Tepung   Rp.8.000\n");
        printf("6. Lada     Rp.1.000\n");
        printf("7. Indomie  Rp.3.000\n");
        printf("8. Susu     Rp.15.000\n");
        printf("======================\n\n");

    
    
    printf("Pilih (1-8) bahan makanan yang anda inginkan: ");
    scanf("%d", &bahan);
        
        switch(bahan){
            case 1: harga = 3000; break;
            case 2: harga = 11000; break;
            case 3: harga = 3000; break;
            case 4: harga = 2000; break;
            case 5: harga = 8000; break;
            case 6: harga = 1000; break;
            case 7: harga = 3000; break;
            case 8: harga = 15000; break;
            default: printf("Pilihan tidak valid.\n");
        }

        printf("Masukkan jumlah barang : ");
        scanf("%d", &jumlah);

        *totalHarga += harga * jumlah;
        *totalBarang += jumlah;

        printf("Anda membeli %d barang dengan total %d\n\n", jumlah, harga * jumlah);

    printf("Apakah anda ingin memilih lagi bahan lagi? (y/t): ");
    scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    
}

//menu 3
void peralatanRumahTangga(int *totalHarga, int *totalBarang){
    int peralatan, jumlah, harga = 0;
    char lanjut;

    do{

        printf("==========================\n");
        printf("1.  Meja      Rp.75.000\n");
        printf("2.  Kursi     Rp.25.000\n");
        printf("3.  Lemari    Rp.400.000\n");
        printf("4.  Rak       Rp.50.000\n");
        printf("5.  Kasur     Rp.500.000\n");
        printf("6.  Tas       Rp.40.000\n");
        printf("7.  Sendok    Rp.5.000\n");
        printf("8.  Garpu     Rp.5.000\n");
        printf("9.  Cermin    Rp.30.000\n");
        printf("10. Sofa      Rp.300.000\n");
        printf("==========================\n\n");


    printf("Pilih (1-10) Peralatan rumah tangga yang anda inginkan: ");
    scanf("%d", &peralatan);


        switch(peralatan){
            case 1: harga = 75000; break;
            case 2: harga = 25000; break;
            case 3: harga = 400000; break;
            case 4: harga = 50000; break;
            case 5: harga = 500000; break;
            case 6: harga = 40000; break;
            case 7: harga = 5000; break;
            case 8: harga = 5000; break;
            case 9: harga = 30000; break;
            case 10: harga = 300000; break;
            default: printf("Pilihan tidak valid.\n");
    }

        printf("Masukkan jumlah barang : ");
        scanf("%d", &jumlah);

        *totalHarga += harga * jumlah;
        *totalBarang += jumlah;

        printf("Anda membeli %d barang dengan total %d\n\n", jumlah, harga * jumlah);

    printf("Apakah anda ingin memilih lagi peralatan rumah tangga? (y/t): ");
    scanf(" %c", &lanjut);

    }while (lanjut == 'y' || lanjut == 'Y');

}

int main(){
    
    int pilihan;
    int totalHarga = 0;
    int totalBarang = 0;
    char lanjutMenu;

    do{

    printf("======= Menu Belanja =======\n");
    printf("1. Bahan Makanan\n");
    printf("2. Peralatan Elektronik\n");
    printf("3. Peralatan rumah tangga\n");
    printf("4. Stationary\n");
    printf("5. Exit\n");
    printf("============================\n\n");

        
            printf("Masukkan pilihan (1-5): ");
            scanf("%d", &pilihan);

        switch(pilihan){
            case 1: bahanMakanan(&totalHarga, &totalBarang);
            break;
            case 2:
            break;
            case 3: peralatanRumahTangga(&totalHarga, &totalBarang);
            break;
            case 4:
            break;
            case 5:
                printf("Exited..");
                return 0; 
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

            printf("\nKembali ke menu utama? (y/t) ");
            scanf(" %c", &lanjutMenu);

    }while(lanjutMenu == 'y' || lanjutMenu == 'Y');

    printf("\n========== STRUK BELANJA ==========\n");
    printf("Total jumlah barang: %d\n", totalBarang);
    printf("Total harga belanja: Rp.%d\n", totalHarga);
    printf("===================================\n");


    return 0;
}