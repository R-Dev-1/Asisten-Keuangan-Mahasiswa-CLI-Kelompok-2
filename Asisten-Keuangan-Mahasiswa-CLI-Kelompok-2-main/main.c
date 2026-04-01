#include <stdio.h>

// Fungsi 1: Kalkulator Diskon
void kalkulatorDiskon() {
    float hargaAwal, persenDiskon, hargaAkhir;

    printf("\n=== Kalkulator Diskon Belanja ===\n");

    printf("Masukkan harga awal barang: ");
    scanf("%f", &hargaAwal);

    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persenDiskon);

    hargaAkhir = hargaAwal - (hargaAwal * persenDiskon / 100);

    printf("Harga yang harus dibayar: Rp %.2f\n", hargaAkhir);
}
void fungsi2()
{
    int jumlahOrang; // totalTagihan, nominalPerOrang;
    float totalTagihan, nominalPerOrang;
    
    printf("Masukkan total tagihan makanan Anda: Rp.");
    scanf("%f", &totalTagihan);

    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlahOrang);

    nominalPerOrang = totalTagihan / jumlahOrang;
    printf("Dengan tagihan sebesar Rp.%.2f dan jumlah orangnya sebanyak %d orang, maka nominal yang harus dibayar per orang adalah sebesar: Rp.%.2f", totalTagihan, jumlahOrang, nominalPerOrang);
}

int main () {
    fungsi2();

    int input;
    do {
        printf("=========================================\n");
        printf("|                MENU                   |\n");
        printf("=========================================\n");
        printf("| 1) Kalkulator Diskon Belanja          |\n");
        printf("| 2) Kalkulator Split Bill              |\n");
        printf("| 3) Kalkulator Bunga Tabungan          |\n");
        printf("| 4) Kalkulator Sisa Uang Jajan harian  |\n");
        printf("| 0) Exit                               |\n");
        printf("=========================================\n");
        input = inputInt("Masukkan input anda (1-4): ");
        switch (input) {
        case 1:
            kalkulatorDiskon();
            break;
        case 2:
            fungsi2();
            break;

        case 3:
            
            break;

        case 4:
            
            break;

        case 0:
            printf("\nProgram selesai");
            return 0;
        
        default:
            printf("\nInput harus 1-7\n");
            pause();
            break;
        }

    } while (1);
}