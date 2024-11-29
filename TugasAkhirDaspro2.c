#include<stdio.h>
void bahanMakanan(){
    int bahan;
    char lanjut;

    do{
    printf("=====================\n");
    printf("1. Garam    Rp.3000\n");
    printf("2. Gula     Rp.11000\n");
    printf("3. Telur    Rp.3000\n");
    printf("4. Sosis    Rp.2000\n");
    printf("5. Tepung   Rp.8000\n");
    printf("6. Lada     Rp.1000\n");
    printf("7. Indomie  Rp.3000\n");
    printf("8. Susu     Rp.15000\n");
    printf("=====================\n\n");

    
    
    printf("Pilih (1-8) bahan makanan yang anda inginkan: ");
    scanf("%d", &bahan);
        
        switch(bahan){
            case 1:
                printf("Anda memilih Garam.\n");
                break;
            case 2:
                printf("Anda memilih Gula.\n");
                break;
            case 3:
                printf("Anda memilih Telur.\n");
                break;
            case 4:
                printf("Anda memilih Sosis.\n");
                break;
            case 5:
                printf("Anda memilih Tepung.\n");
                break;
            case 6:
                printf("Anda memilih Lada.\n");
                break;
            case 7:
                printf("Anda memilih Indomie.\n");
                break;
            case 8:
                printf("Anda memilih Susu.\n");
                break;
            default: printf("Pilihan tidak valid.\n");
        }

    printf("Apakah anda ingin memilih lagi bahan lagi? (y/t): ");
    scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    
}

int main(){

    printf("======= Menu Belanja =======\n");
    printf("1. Bahan Makanan\n");
    printf("2. Peralatan Elektronik\n");
    printf("3. Peralatan rumah tangga\n");
    printf("4. Stationary\n");
    printf("5. Exit\n");
    printf("============================\n\n");

        int pilihan;
            printf("Masukkan pilihan (1-4): ");
            scanf("%d", &pilihan);

        if(pilihan == 1){
            bahanMakanan();
        }
        else if(pilihan == 2){
            // Peralatan Elektronik
        }
        else if(pilihan == 3){
            // Peralatan rumah tangga
        }
        else if(pilihan == 4){
            // Stationary
        }
        else if(pilihan == 5){
            printf("Terima kasih telah berbelanja di toko kami.\n");
        }


    return 0;
}