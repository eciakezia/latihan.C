#include<stdio.h>

float milimeterKesatuanLain(float milimeter){

    printf("masukkan nilai milimeter: ");
    scanf("%f", &milimeter);


    printf("milimeter ke meter: %.2f\n", milimeter / 1000);
    printf("milimeter ke kilometer: %.2f\n", milimeter / 1000000);
    printf("milimeter ke centimeter: %.2f\n", milimeter / 100);
    printf("milimeter ke dekameter: %.2f\n", milimeter / 10000);
    printf("milimeter ke decimeter: %.2f\n", milimeter / 10);
    printf("milimeter ke hektometer: %.2f\n", milimeter / 100000);


}

int main(){
int pilihan;
float  milimeter;

    printf("1. milimeter ke satuan lain\n");
    printf("2. milimeter ke satuan lain\n");
    printf("3. milimeter ke satuan lain\n");
    printf("4. milimeter ke satuan lain\n");
    printf("5. milimeter ke satuan lain\n");
    printf("6. milimeter ke satuan lain\n");    
    printf("7. milimeter ke satuan lain\n");

    printf("Pilihlah (1-7) opsi di atas: ");
    scanf("%d", &pilihan);


    switch(pilihan){
        case 1: milimeterKesatuanLain(milimeter);
        break;
    }
}