#include<stdio.h>
//menu 1
void bahanMakanan(int *totalHarga, int *totalBarang){
    int bahan, jumlah, harga = 0;
    char lanjut;

    do {
        int pilihanValid = 0;
        do{

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
            case 1: harga = 3000; pilihanValid = 1; break;
            case 2: harga = 11000; pilihanValid = 1; break;
            case 3: harga = 3000; pilihanValid = 1; break;
            case 4: harga = 2000; pilihanValid = 1; break;
            case 5: harga = 8000; pilihanValid = 1; break;
            case 6: harga = 1000; pilihanValid = 1; break;
            case 7: harga = 3000; pilihanValid = 1; break;
            case 8: harga = 15000; pilihanValid = 1; break;
            default: printf("Pilihan tidak valid.\n");
                     break;
        }
        if(!pilihanValid){
            printf("Apakah ingin memilih kembali? (y/t): ");
            scanf(" %c", &lanjut);
            if(lanjut == 't' || lanjut == 'T'){
                return;
            }
        }
}       while (!pilihanValid);

        printf("Masukkan jumlah barang : ");
        scanf("%d", &jumlah);

        *totalHarga += harga * jumlah;
        *totalBarang += jumlah;

        printf("Anda membeli %d barang dengan total %d\n\n", jumlah, harga * jumlah);

    printf("Apakah anda ingin memilih lagi bahan lagi? (y/t): ");
    scanf(" %c", &lanjut);

    }       while (lanjut == 'y' || lanjut == 'Y');

}


//menu 2
void peralatanElektronik(int *totalHarga, int *totalBarang) {
    int bahan, jumlah, harga = 0;
    char lanjut;

    do {
        int pilihanValid = 0;
        do{

        printf("===============================\n");
        printf("1. Kipas Angin   Rp.150.000\n");
        printf("2. Rice Cooker   Rp.250.000\n");
        printf("3. Blender       Rp.300.000\n");
        printf("4. Setrika       Rp.200.000\n");
        printf("5. Lampu Lpj     Rp.50.000\n");
        printf("6. mesin cuci    Rp.3.000.000\n");
        printf("7. speaker       Rp.800.000\n");
        printf("8. TV            Rp.3.000.000\n");
        printf("===============================\n\n");

        printf("Pilih (1-8) peralatan elektronik yang anda inginkan: ");
        scanf("%d", &bahan);

        switch (bahan) {
            case 1: harga = 150000; pilihanValid = 1; break;
            case 2: harga = 250000; pilihanValid = 1; break;
            case 3: harga = 300000; pilihanValid = 1; break;
            case 4: harga = 200000; pilihanValid = 1; break;
            case 5: harga = 50000; pilihanValid = 1; break;
            case 6: harga = 3000000; pilihanValid = 1; break;
            case 7: harga = 800000; pilihanValid = 1; break;
            case 8: harga = 3000000; pilihanValid = 1; break;
            default: printf("Pilihan tidak valid.\n");
                     break;
        }
        if(!pilihanValid){
            printf("Apakah ingin memilih kembali? (y/t): ");
            scanf(" %c", &lanjut);
            if(lanjut == 't' || lanjut == 'T'){
                return;
            }
        }
}       while (!pilihanValid);

        printf("Masukkan jumlah barang : ");
        scanf("%d", &jumlah);

        *totalHarga += harga * jumlah;
        *totalBarang += jumlah;

        printf("Anda membeli %d barang dengan total %d\n\n", jumlah, harga * jumlah);

        printf("Apakah anda ingin memilih lagi peralatan elektronik? (y/t): ");
        scanf(" %c", &lanjut);

    }       while (lanjut == 'y' || lanjut == 'Y');

}


//menu 3
void peralatanRumahTangga(int *totalHarga, int *totalBarang) {
    int bahan, jumlah, harga = 0;
    char lanjut;

    do {
        int pilihanValid = 0;
        do{

        printf("==============================\n");
        printf("1. Sapu ijuk.      Rp.25.000\n");
        printf("2. Obat nyamuk.    Rp.10.000\n");
        printf("3. Alat pel        Rp.32.000\n");
        printf("4. Piring 1 lusin  Rp.24.000\n");
        printf("5. Sendok 1 lusin  Rp.20.000\n");
        printf("6. Gelas frozen.   Rp.28.000\n");
        printf("7. Stela lemong    Rp.6.000\n");
        printf("8. korek api       Rp.5.000\n");
        printf("==============================\n\n");

        printf("Pilih (1-8) peralatan rumah tangga yang anda inginkan: ");
        scanf("%d", &bahan);

        switch (bahan) {
            case 1: harga = 25000; pilihanValid = 1; break;
            case 2: harga = 10000; pilihanValid = 1; break;
            case 3: harga = 32000; pilihanValid = 1; break;
            case 4: harga = 24000; pilihanValid = 1; break;
            case 5: harga = 20000; pilihanValid = 1; break;
            case 6: harga = 28000; pilihanValid = 1; break;
            case 7: harga = 6000; pilihanValid = 1; break;
            case 8: harga = 5000; pilihanValid = 1; break;
            default: printf("Pilihan tidak valid.\n");        
                     break;
        }
        if(!pilihanValid){
            printf("Apakah ingin memilih kembali? (y/t): ");
            scanf(" %c", &lanjut);
            if(lanjut == 't' || lanjut == 'T'){
                return;
            }
        }
}       while (!pilihanValid);

    printf("Masukkan jumlah barang : ");
        scanf("%d", &jumlah);

        *totalHarga += harga * jumlah;
        *totalBarang += jumlah;

    printf("Anda membeli %d barang dengan total %d\n\n", jumlah, harga * jumlah);

    printf("Apakah anda ingin memilih lagi peralatan rumah tangga? (y/t): ");
        scanf(" %c", &lanjut);

     }      while (lanjut == 'y' || lanjut == 'Y');

}


//menu 4
 void stationary(int *totalHarga, int *totalBarang) {
      int bahan, jumlah, harga = 0;
      char lanjut;
    do {
        int pilihanValid = 0;
        do{

        printf("==============================\n");
        printf("1. Buku 1 lusin    Rp.30.000\n");
        printf("2. Pulpen 1 pack   Rp.21.000\n");
        printf("3. pensil 1 pack   Rp.17.000\n");
        printf("4. HVS A4 1 rim    Rp.55.000\n");
        printf("5. Penggaris       Rp.14.000\n");
        printf("6. Tip ex roll.    Rp.10.000\n");
        printf("7. Pensil warna    Rp.38.000\n");
        printf("8. spidol          Rp.9.000\n");
        printf("==============================\n\n");

        printf("Pilih (1-8) peralatan stationary yang anda inginkan: ");
        scanf("%d", &bahan);

    switch (bahan) {
            case 1: harga = 30000; pilihanValid = 1; break;
            case 2: harga = 21000; pilihanValid = 1; break;
            case 3: harga = 17000; pilihanValid = 1; break;
            case 4: harga = 55000; pilihanValid = 1; break;
            case 5: harga = 14000; pilihanValid = 1; break;
            case 6: harga = 10000; pilihanValid = 1; break;
            case 7: harga = 38000; pilihanValid = 1; break;
            case 8: harga = 9000 ; pilihanValid = 1; break;
            default: printf("Pilihan tidak valid.\n");       
                     break;
        }
        if(!pilihanValid){
            printf("Apakah ingin memilih kembali? (y/t): ");
            scanf(" %c", &lanjut);
            if(lanjut == 't' || lanjut == 'T'){
                return;
            }
        }
}       while (!pilihanValid);

        printf("Masukkan jumlah barang : ");
        scanf("%d", &jumlah);

        *totalHarga += harga * jumlah;
        *totalBarang += jumlah;

        printf("Anda membeli %d barang dengan total %d\n\n", jumlah, harga * jumlah);

        printf("Apakah anda ingin memilih lagi peralatan stationary? (y/t): ");
        scanf(" %c", &lanjut);

    }       while (lanjut == 'y' || lanjut == 'Y');

}


int main(){
    
    int pilihan;
    int totalHarga = 0;
    int totalBarang = 0;
    int nominal, kembalian;
    char lanjutMenu;

    printf("\t\t\t\t===================================================================\n");
    printf("\t\t\t\t||            SELAMAT DATANG DI TOKO KANG DANIEL                 ||\n");
    printf("\t\t\t\t===================================================================\n");

    do{

    printf("\n\n======= Menu Belanja =======\n");
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
            case 2: peralatanElektronik(&totalHarga, &totalBarang);
            break;
            case 3: peralatanRumahTangga(&totalHarga, &totalBarang);
            break;
            case 4: stationary(&totalHarga, &totalBarang);
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

    printf("\n============================== STRUK BELANJA ===============================\n");

    do{

    printf("Total jumlah barang: %d\n", totalBarang);
    printf("Total harga belanja: Rp.%d\n", totalHarga);
    printf("Masukkan jumlah uang untuk pembayaran: ");
        scanf("%d", &nominal);

        if(nominal >= totalHarga){
            kembalian = nominal - totalHarga;
            printf("Kembalian: Rp.%d\n", kembalian);
            break;
        } else{
            printf("\nUang anda tidak cukup, perlu menambah sebanyak = Rp.%d\n\n", totalHarga - nominal); 
        }

       
    }       while (1);


    printf("\t\t\t\t===================================================================\n");
    printf("\t\t\t\t||               TERIMA KASIH TELAH BERBELANJA                   ||\n");
    printf("\t\t\t\t||                    DI TOKO KANG DANIEL                        ||\n");
    printf("\t\t\t\t||                      SEE YOU AGAIN!!                          ||\n");
    printf("\t\t\t\t===================================================================\n");


    return 0;
}