#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {

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
  int i, j;
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

  //clear screen
  {
    system("clear");
  }

  //opening
  printf("\nSelamat datang di Ma'arif Tech Store\n");

  //input pelanggan atau bukan
  printf("\nKetik 'P' jika anda pelanggan tetap\n");
  printf("Ketik 'U' jika anda konsumen umum\n");
  printf("(P/U)");
  scanf("%c", &pelanggan);

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
  for (i = 1; i < 13 ; i++) {
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
        scanf(" %c", &input1);

        if (isdigit(input1) == 0)
          {
            printf ("Error Salah input\n");
            printf ("Mohon masukkan angka\n");
            exit(1);
          }

        {
          system("clear"); //clear screen
        }
        printf("\nAnda membeli %c Motor Servo\n", input1);
        printf("Ketik '%c' untuk konfirmasi\n", input1);
        scanf(" %d", &unit1[i]);
        total1 = unit1[i] + total1;
        break;

        case 2:
        {
          system("clear"); //clear screen
        }
        printf("\nMikrokontroller ARDUINO\n");
        printf("\nBerapa Mikrokontroller ARDUINO yang anda beli?\n");
        scanf(" %c", &input2);

        if (isdigit(input2) == 0)
          {
            printf ("Error Salah input\n");
            printf ("Mohon masukkan angka\n");
            exit(1);
          }

        {
          system("clear"); //clear screen
        }
        printf("\nAnda membeli %c Mikrokontroller ARDUINO\n", input2);
        printf("Ketik '%c' untuk konfirmasi\n", input2);
        scanf(" %d", &unit2[i]);
        total2 = unit2[i] + total2;
        break;

        case 3:
        {
          system("clear"); //clear screen
        }
        printf("\nSensor Jarak\n");
        printf("\nBerapa Sensor Jarak yang anda beli?\n");
        scanf(" %c", &input3);

        if (isdigit(input3) == 0)
          {
            printf ("Error Salah input\n");
            printf ("Mohon masukkan angka\n");
            exit(1);
          }

        {
          system("clear"); //clear screen
        }
        printf("\nAnda membeli %c Sensor Jarak\n", input3);
        printf("Ketik '%c' untuk konfirmasi\n", input3);
        scanf(" %d", &unit3[i]);
        total3 = unit3[i] + total3;
        break;

        case 4:
        {
          system("clear"); //clear screen
        }
        printf("\nSensor Suara\n");
        printf("\nBerapa Sensor Suara yang anda beli?\n");
        scanf(" %c", &input4);

        if (isdigit(input4) == 0)
          {
            printf ("Error Salah input\n");
            printf ("Mohon masukkan angka\n");
            exit(1);
          }

        {
          system("clear"); //clear screen
        }
        printf("\nAnda membeli %c Motor Servo\n", input4);
        printf("Ketik '%c' untuk konfirmasi\n", input4);
        scanf(" %d", &unit4[i]);
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
  printf("Jumlah Motor Servo            : %d\n", total1);
  printf("Harga per unit                : %d\n", harga1);
  total_harga1 = total1*harga1;
  printf("Total                         : %d\n", total_harga1);
  printf("\n");

  printf("Jumlah Mikrokontroller ARDUINO: %d\n", total2);
  printf("Harga per unit                : %d\n", harga2);
  total_harga2 = total2*harga2;
  printf("Total                         : %d\n", total_harga2);
  printf("\n");

  printf("Jumlah Sensor Jarak           : %d\n", total3);
  printf("Harga per unit                : %d\n", harga3);
  total_harga3 = total3*harga3;
  printf("Total                         : %d\n", total_harga3);
  printf("\n");

  printf("Jumlah Sensor Suara           : %d\n", total4);
  printf("Harga per unit                : %d\n", harga4);
  total_harga4 = total4*harga4;
  printf("Total                         : %d\n", total_harga4);
  printf("\n");

  printf("Terima Kasih Telah Memilih Ma'arif Tech Store\n");
  printf("Have a Good Day\n");

  return 0;
}
