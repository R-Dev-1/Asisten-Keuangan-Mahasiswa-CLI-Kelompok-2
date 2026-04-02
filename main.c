#include <stdio.h>

// Fungsi Kalkulator Diskon Belanja
void kalkulatorDiskon() {
    float hargaAwal, persenDiskon, hargaAkhir;

    printf("\n=== Kalkulator Diskon Belanja ===\n");

    printf("Masukkan harga awal barang: ");
    scanf("%f", &hargaAwal);

    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persenDiskon);

    hargaAkhir = hargaAwal - (hargaAwal * persenDiskon / 100);

    printf("Harga yang harus dibayar: Rp %.2f\n", hargaAkhir);
    printf("\n\ntekan enter untuk lanjut...");
    getchar();
    getchar();
}

// Fungsi Kalkulator Split Bill / Patungan
void kalkulatorSplitBill()
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
    printf("\n\ntekan enter untuk lanjut...");
    getchar();
    getchar();
}

// fungsi kalkulator bunga
void kalkulatorBunga() 
{
    float saldo_awal, bunga_persen;
    int bulan;
    
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("           KALCULATOR BUNGA TABUNGAN\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    // Input data
    printf("\n Saldo awal tabungan (Rp): Rp ");
    scanf("%f", &saldo_awal);
    
    printf("📅 Periode bunga (bulan): ");
    scanf("%d", &bulan);
    
    printf("📈 Tingkat bunga bulanan (, contoh: 0.5): ");
    scanf("%f", &bunga_persen);
    
    float bunga_total = saldo_awal * (bunga_persen / 100.0) * bulan;
    float saldo_akhir = saldo_awal + bunga_total;
    
    printf("\n ~~~~~~~~~~~~~~~~~~~~~ HASIL  ~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Saldo Awal     : Rp %,.0f\n", saldo_awal);
    printf("Bunga/Bulan    : %,.1f%%\n", bunga_persen);
    printf("Periode        : %d bulan\n", bulan);
    printf("────────────────────────────────────────────────────\n");
    printf(" Bunga Total  : Rp %,.0f\n", bunga_total);
    printf(" Saldo Akhir  : Rp %,.0f\n", saldo_akhir);
    printf(" Keuntungan   : +Rp %,.0f (%.1f%%)\n", 
           bunga_total, (bunga_total/saldo_awal)*100);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("\n Tekan Enter untuk kembali ke menu utama...");
    getchar(); 
    getchar(); 
}


// Fungsi Kalkulator Sisa Uang Jajan harian
void kalkulatorSisaUangJajanHarian()
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
    printf("\ntekan enter untuk lanjut...");
    getchar();
    getchar();
}


int main () {
    int input;
    do {
        printf("\n\n\n=========================================\n");
        printf("|                MENU                   |\n");
        printf("=========================================\n");
        printf("| 1) Kalkulator Diskon Belanja          |\n");
        printf("| 2) Kalkulator Split Bill              |\n");
        printf("| 3) Kalkulator Bunga Tabungan          |\n");
        printf("| 4) Kalkulator Sisa Uang Jajan harian  |\n");
        printf("| 0) Exit                               |\n");
        printf("=========================================\n");
        printf("Masukkan input anda (0-4): ");
        scanf("%d", &input);
        switch (input) {
        case 1:
            kalkulatorDiskon();
            break;
        case 2:
            kalkulatorSplitBill();
            break;

        case 3:
            
            break;

        case 4:
            kalkulatorSisaUangJajanHarian();
            break;

        case 0:
            printf("\nProgram selesai\n");
            return 0;
        
        default:
            printf("\nInput harus 0-4\n");
            break;
        }

    } while (1);
}