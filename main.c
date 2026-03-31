#include <stdio.h>

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

int main()
{
    fungsi2();
}