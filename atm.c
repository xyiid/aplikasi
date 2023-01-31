// Online C compiler to run C program online
#include <stdio.h>
//#include <windows.h>

void banner(){
    printf("========================\n");
    printf("==========  ABC  =======\n");
    printf("========================\n");
}
int main() {
    int kode, pin, pilih, saldo = 100000, tarik, masuk;
    banner();

awal:
    printf("\nMasukan Kode :");
    scanf("%d", &kode);
    printf("Masukan pin :");
    scanf("%d", &pin);
    if (pin == 8888){
        goto menu;
    }else {
        printf("Pin Salah Silahkan Coba lagi");
        goto awal;
    }
    
menu:
    banner();
    
    printf("1. Tarik Saldo\n");
    printf("2. Transfer\n");
    printf("3. Deposit\n");
    printf("4. Cek Saldo\n");
    printf("0. Kembali\n");
    printf("Pilih :");
    scanf("%d", &pilih);
    switch(pilih){
        case 1 :
        banner();
        printf("Masukan Jumlah yang ingin Anda Tarik :");
        scanf("%d", &tarik);
        tarik = saldo - tarik;
        printf("Sisa Saldo Anda : %d", tarik);
        break;
        
        case 3 :
        banner();
        printf("Masukan Nominal Yang Ingin Anda Masukan");
        scanf("%d", masuk);
        masuk = saldo + masuk;
        printf("Saldo anda adalah : %d", masuk);
        break;
        
        case 4:
        banner();
        printf("Sisa Saldo Anda : %d", saldo);
        break;
        default:
        printf("Eror");
        break;
    }
 
}
