#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
  char ulang = 'Y';
  do{
  char input1;
  char input2;
  char input3;
  char input4;
  int length;
  char pelanggan;
  char z;
  int item;
  int harga1 = 35000;
  int harga2 = 50000;
  int harga3 = 30000;
  int harga4 = 45000;
  int i;
  int unit1[99];
  int total1 = 0;
  int unit2[99];
  int total2 = 0;
  int unit3[99];
  int total3 = 0;
  int unit4[99];
  int total4 = 0;
  int total_harga1;
  int total_harga2;
  int total_harga3;
  int total_harga4;
  int mod1;
  int mod2;
  int mod3;
  int mod4;
  int no1;
  int no2;
  int no3;
  int no4;
  int besar_diskon1;
  int besar_diskon2;
  int besar_diskon3;
  int besar_diskon4;
  int besar_diskon5;
  int besar_diskon6;
  int besar_diskon7;
  int besar_diskon8;
  int harga_awal1;
  int harga_awal2;
  int harga_awal3;
  int harga_awal4;
  int harga_awal5;
  int harga_awal6;
  int harga_awal7;
  int harga_awal8;
  int setelah_diskon1;
  int setelah_diskon2;
  int setelah_diskon3;
  int setelah_diskon4;
  int setelah_diskon5;
  int setelah_diskon6;
  int setelah_diskon7;
  int setelah_diskon8;
  int total_pembayaran;
  char user;
  char ulang;

  //do{

  //clear screen
  {
    system("clear");
  }

  //opening
  printf("\nSelamat datang di Ma'arif Tech Store\n");

  printf("Siapa nama anda\n");
  scanf(" %c", &user);

  //input pelanggan atau bukan
  printf("\nKetik 'P' jika anda pelanggan tetap\n");
  printf("Ketik 'U' jika anda konsumen umum\n");
  printf("(P/U)");
  scanf(" %c", &pelanggan);

  //clear screen
  {
    system("clear");
    //system("cls");
  }

  //output
  switch (pelanggan) {
    case 'P': //input P
    printf("Anda adalah Pelanggan Tetap\n");
    break;

    case 'p': //input p
    printf("Anda adalah Pelanggan Tetap\n");
    break;

    case 'U': //input U
    printf("Anda adalah Konsumen Umum\n");
    break;

    case 'u': //input u
    printf("Anda adalah Konsumen Umum\n");
    break;

    //Jika input selain P/U
    default:
    printf("Error: Salah Input\n");
    printf("Mohon Masukkan P/U\n");
    return 0;

  }

  //Pemilihan Item
  for (i = 1; i < 99 ; i++) {
      {
        system("clear"); //clear screen
      }
      printf("\nPilih item ke%d\n", i);
      printf("1. Motor Servo\n");
      printf("2. Mikrokontroller ARDUINO\n");
      printf("3. Sensor Jarak\n");
      printf("4. Sensor Suara\n");
      printf("(1-4)");
      scanf("%i", &item);
      if (!((item == 1)||(item == 2)||(item == 3)||(item == 4))) {
        printf("Error: Salah Input\n");
        printf("Mohon Masukkan 1/2/3/4\n");
        return 0;
      }

      //PILIH JENIS ITEM YANG MAU DIBELI
      switch (item) {
        case 1:
        {
          system("clear"); //clear screen
        }
        printf("\nMotor Servo\n");
        printf("\nBerapa Motor Servo yang anda beli?\n");
        scanf("%d", &unit1[i]);
        total1 = unit1[i] + total1;
        break;

        case 2:
        {
          system("clear"); //clear screen
        }
        printf("\nMikrokontroller ARDUINO\n");
        printf("\nBerapa Mikrokontroller ARDUINO yang anda beli?\n");
        scanf("%d", &unit2[i]);
        total2 = unit2[i] + total2;
        break;

        case 3:
        {
          system("clear"); //clear screen
        }
        printf("\nSensor Jarak\n");
        printf("\nBerapa Sensor Jarak yang anda beli?\n");
        scanf("%d", &unit3[i]);
        total3 = unit3[i] + total3;
        break;

        case 4:
        {
          system("clear"); //clear screen
        }
        printf("\nSensor Suara\n");
        printf("\nBerapa Sensor Suara yang anda beli?\n");
        scanf("%d", &unit4[i]);
        total4 = unit4[i] + total4;
        break;
      }

      //VERIVIKASI ADD MORE ITEM OR NOT
      {
        system("clear"); //clear screen
      }
      printf("\nTambah item yg lain?\n");
      printf("(Y/N)");
      scanf(" %c", &z);
      if (!((z == 'Y') || (z == 'y'))) {
        break;
      }
      printf("\n");
    }

  {
    system("clear"); //clear screen
  }

  printf("\n-------------------------------CHECKOUT PEMBELIAN---------------------\n");
  if ((pelanggan == 'P')||(pelanggan == 'p')) {
    //menghitung sisa
    do {
      mod1 = total1 % 5;
    } while(mod1 > 4);

    do {
      mod2 = total2 % 10;
    } while(mod2 > 9);

    do {
      mod3 = total3 % 5;
    } while(mod3 > 4);

    do {
      mod4 = total4 % 10;
    } while(mod4 > 9);

    //mencari hasil selain modulus
    no1 = total1 - mod1;
    no2 = total2 - mod2;
    no3 = total3 - mod3;
    no4 = total4 - mod4;

    printf("\nNo.1\n");
    printf("Jumlah Motor Servo            : %d\n", no1);
    printf("Harga per unit                : %d\n", harga1);
    printf("Diskon                        : 10%%\n");
    besar_diskon1 = (no1*harga1)*0.1;
    printf("Besar Diskon                  : %d\n",besar_diskon1);
    harga_awal1 = no1*harga1;
    printf("Harga Awal                    : %d\n",harga_awal1);
    setelah_diskon1 = (no1*harga1)*0.9;
    printf("Setelah Diskon                : %d\n",setelah_diskon1);
    printf("\n");

    printf("\nNo.2\n");
    printf("Jumlah Motor Servo            : %d\n", mod1);
    printf("Harga per unit                : %d\n", harga1);
    printf("Diskon                        : 0%%\n");
    besar_diskon2 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon2);
    harga_awal2 = mod1*harga1;
    printf("Harga Awal                    : %d\n",harga_awal2);
    setelah_diskon2 = harga_awal2;
    printf("Setelah Diskon                : %d\n",setelah_diskon2);
    printf("\n");

    printf("\nNo.3\n");
    printf("Jumlah Mikrokontroller ARDUINO: %d\n", no2);
    printf("Harga per unit                : %d\n", harga2);
    printf("Diskon                        : 10%%\n");
    besar_diskon3 = (no2*harga2)*0.1;
    printf("Besar Diskon                  : %d\n",besar_diskon3);
    harga_awal3 = no2*harga2;
    printf("Harga Awal                    : %d\n",harga_awal3);
    setelah_diskon3 = (no2*harga2)*0.9;
    printf("Setelah Diskon                : %d\n",setelah_diskon3);
    printf("\n");

    printf("\nNo.4\n");
    printf("Jumlah Mikrokontroller ARDUINO: %d\n", mod2);
    printf("Harga per unit                : %d\n", harga2);
    printf("Diskon                        : 0%%\n");
    besar_diskon4 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon4);
    harga_awal4 = mod2*harga2;
    printf("Harga Awal                    : %d\n",harga_awal4);
    setelah_diskon4 = harga_awal4;
    printf("Setelah Diskon                : %d\n",setelah_diskon4);
    printf("\n");

    printf("\nNo.5\n");
    printf("Jumlah Sensor Jarak           : %d\n", no3);
    printf("Harga per unit                : %d\n", harga3);
    printf("Diskon                        : 10%%\n");
    besar_diskon5 = (no3*harga3)*0.1;
    printf("Besar Diskon                  : %d\n",besar_diskon5);
    harga_awal5 = no3*harga3;
    printf("Harga Awal                    : %d\n",harga_awal5);
    setelah_diskon5 = (no3*harga3)*0.9;
    printf("Setelah Diskon                : %d\n",setelah_diskon5);
    printf("\n");

    printf("\nNo.6\n");
    printf("Jumlah Sensor Jarak           : %d\n", mod3);
    printf("Harga per unit                : %d\n", harga3);
    printf("Diskon                        : 0%%\n");
    besar_diskon6 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon6);
    harga_awal6 = mod3*harga3;
    printf("Harga Awal                    : %d\n",harga_awal6);
    setelah_diskon6 = harga_awal6;
    printf("Setelah Diskon                : %d\n",setelah_diskon6);
    printf("\n");

    printf("\nNo.7\n");
    printf("Jumlah Sensor Suara           : %d\n", no4);
    printf("Harga per unit                : %d\n", harga4);
    printf("Diskon                        : 20%%\n");
    besar_diskon7 = (no4*harga4)*0.2;
    printf("Besar Diskon                  : %d\n",besar_diskon7);
    harga_awal7 = no4*harga4;
    printf("Harga Awal                    : %d\n",harga_awal7);
    setelah_diskon7 = (no4*harga4)*0.8;
    printf("Setelah Diskon                : %d\n",setelah_diskon7);
    printf("\n");

    printf("\nNo.8\n");
    printf("Jumlah Sensor Suara           : %d\n", mod4);
    printf("Harga per unit                : %d\n", harga4);
    printf("Diskon                        : 0%%\n");
    besar_diskon8 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon8);
    harga_awal8 = mod4*harga4;
    printf("Harga Awal                    : %d\n",harga_awal8);
    setelah_diskon8 = harga_awal8;
    printf("Setelah Diskon                : %d\n",setelah_diskon8);
    printf("\n");

    total_pembayaran = setelah_diskon1+setelah_diskon2+setelah_diskon3+setelah_diskon4+
                        setelah_diskon5+setelah_diskon6+setelah_diskon7+setelah_diskon8;
    printf("Total Pembayaran              : %d\n",total_pembayaran);
  }
  else{
    //menghitung sisa
    do {
      mod1 = total1 % 5;
    } while(mod1 > 4);

    do {
      mod2 = total2 % 15;
    } while(mod2 > 14);

    do {
      mod3 = total3 % 10;
    } while(mod3 > 9);

    do {
      mod4 = total4 % 10;
    } while(mod4 > 9);

    //mencari hasil selain modulus
    no1 = total1 - mod1;
    no2 = total2 - mod2;
    no3 = total3 - mod3;
    no4 = total4 - mod4;

    printf("\nNo.1\n");
    printf("Jumlah Motor Servo            : %d\n", no1);
    printf("Harga per unit                : %d\n", harga1);
    printf("Diskon                        : 5%%\n");
    besar_diskon1 = (no1*harga1)*0.05;
    printf("Besar Diskon                  : %d\n",besar_diskon1);
    harga_awal1 = no1*harga1;
    printf("Harga Awal                    : %d\n",harga_awal1);
    setelah_diskon1 = (no1*harga1)*0.95;
    printf("Setelah Diskon                : %d\n",setelah_diskon1);
    printf("\n");

    printf("\nNo.2\n");
    printf("Jumlah Motor Servo            : %d\n", mod1);
    printf("Harga per unit                : %d\n", harga1);
    printf("Diskon                        : 0%%\n");
    besar_diskon2 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon2);
    harga_awal2 = mod1*harga1;
    printf("Harga Awal                    : %d\n",harga_awal2);
    setelah_diskon2 = harga_awal2;
    printf("Setelah Diskon                : %d\n",setelah_diskon2);
    printf("\n");

    printf("\nNo.3\n");
    printf("Jumlah Mikrokontroller ARDUINO: %d\n", no2);
    printf("Harga per unit                : %d\n", harga2);
    printf("Diskon                        : 10%%\n");
    besar_diskon3 = (no2*harga2)*0.1;
    printf("Besar Diskon                  : %d\n",besar_diskon3);
    harga_awal3 = no2*harga2;
    printf("Harga Awal                    : %d\n",harga_awal3);
    setelah_diskon3 = (no2*harga2)*0.9;
    printf("Setelah Diskon                : %d\n",setelah_diskon3);
    printf("\n");

    printf("\nNo.4\n");
    printf("Jumlah Mikrokontroller ARDUINO: %d\n", mod2);
    printf("Harga per unit                : %d\n", harga2);
    printf("Diskon                        : 0%%\n");
    besar_diskon4 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon4);
    harga_awal4 = mod2*harga2;
    printf("Harga Awal                    : %d\n",harga_awal4);
    setelah_diskon4 = harga_awal4;
    printf("Setelah Diskon                : %d\n",setelah_diskon4);
    printf("\n");

    printf("\nNo.5\n");
    printf("Jumlah Sensor Jarak           : %d\n", no3);
    printf("Harga per unit                : %d\n", harga3);
    printf("Diskon                        : 5%%\n");
    besar_diskon5 = (no3*harga3)*0.05;
    printf("Besar Diskon                  : %d\n",besar_diskon5);
    harga_awal5 = no3*harga3;
    printf("Harga Awal                    : %d\n",harga_awal5);
    setelah_diskon5 = (no3*harga3)*0.95;
    printf("Setelah Diskon                : %d\n",setelah_diskon5);
    printf("\n");

    printf("\nNo.6\n");
    printf("Jumlah Sensor Jarak           : %d\n", mod3);
    printf("Harga per unit                : %d\n", harga3);
    printf("Diskon                        : 0%%\n");
    besar_diskon6 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon6);
    harga_awal6 = mod3*harga3;
    printf("Harga Awal                    : %d\n",harga_awal6);
    setelah_diskon6 = harga_awal6;
    printf("Setelah Diskon                : %d\n",setelah_diskon6);
    printf("\n");

    printf("\nNo.7\n");
    printf("Jumlah Sensor Suara           : %d\n", no4);
    printf("Harga per unit                : %d\n", harga4);
    printf("Diskon                        : 10%%\n");
    besar_diskon7 = (no4*harga4)*0.1;
    printf("Besar Diskon                  : %d\n",besar_diskon7);
    harga_awal7 = no4*harga4;
    printf("Harga Awal                    : %d\n",harga_awal7);
    setelah_diskon7 = (no4*harga4)*0.9;
    printf("Setelah Diskon                : %d\n",setelah_diskon7);
    printf("\n");

    printf("\nNo.8\n");
    printf("Jumlah Sensor Suara           : %d\n", mod4);
    printf("Harga per unit                : %d\n", harga4);
    printf("Diskon                        : 0%%\n");
    besar_diskon8 = 0;
    printf("Besar Diskon                  : %d\n",besar_diskon8);
    harga_awal8 = mod4*harga4;
    printf("Harga Awal                    : %d\n",harga_awal8);
    setelah_diskon8 = harga_awal8;
    printf("Setelah Diskon                : %d\n",setelah_diskon8);
    printf("\n");

    total_pembayaran = setelah_diskon1+setelah_diskon2+setelah_diskon3+setelah_diskon4+
                        setelah_diskon5+setelah_diskon6+setelah_diskon7+setelah_diskon8;
    printf("Total Pembayaran              : %d\n",total_pembayaran);
  }


  printf("\nTerima Kasih Telah Memilih Ma'arif Tech Store\n");
  printf("Apapakah anda ingin menginputkan transaksi lagi?\n");
  printf("(Y/N)");
  scanf("%c\n", &ulang);
  if (ulang == 'N') {
    return 0;
    exit(0);
    break;
  }


} while((ulang == 'Y')||(ulang == 'y'));

  return 0;
}
