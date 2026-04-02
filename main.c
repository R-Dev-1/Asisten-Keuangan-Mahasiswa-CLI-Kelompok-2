#include <stdio.h>
void fungsi4()
{
    float uangSaku, totalPengeluaran, sisa;

    printf("\n==== KALKULATOR SISA UANG JAJAN HARIAN ====\n");

    printf("Masukkan uang saku hari ini: Rp.");
    scanf("%f", &uangSaku);

    do {
        printf("Masukkan total estimasi pengeluaran: Rp.");
        scanf("%f", &totalPengeluaran);

        if (totalPengeluaran < 0) {
            printf("Pengeluaran tidak boleh negatif!\n");
        }
    } while (totalPengeluaran < 0);

    sisa = uangSaku - totalPengeluaran;

    printf("\n==== HASIL PERHITUNGAN ====\n");
    printf("Uang saku        : Rp.%.2f\n", uangSaku);
    printf("Total pengeluaran: Rp.%.2f\n", totalPengeluaran);
    printf("Sisa uang        : Rp.%.2f\n", sisa);

    if (sisa < 0) {
        printf("Kamu melebihi budget hari ini!\n");
    } else {
        printf("Keuangan masih aman\n");
    }
}
void fungsi2()
{
    int jumlahOrang;
    float totalTagihan, nominalPerOrang;
    
    printf("\n==== KALKULATOR SPLIT BILL ====\n");
    printf("Masukkan total tagihan makanan Anda: Rp.");
    scanf("%f", &totalTagihan);

    do {
    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlahOrang);
    }
    while (jumlahOrang <= 0);
    

    nominalPerOrang = totalTagihan / jumlahOrang;
    printf("\n==== HASIL PERHITUNGAN ====\n");
    printf("Tagihan sebesar : Rp.%.2f\nJumlah orang : %d orang\nNominal yang harus dibayar per orang sebesar: Rp.%.2f", totalTagihan, jumlahOrang, nominalPerOrang);
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
            
            break;
        case 2:
            fungsi2();
            break;

        case 3:
            
            break;

        case 4:
            fungsi4();
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