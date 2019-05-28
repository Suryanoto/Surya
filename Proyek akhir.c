#include <stdio.h>
#include <windows.h>

int total_harga=0;
int pesanan_anda;
char list_pesanan;
void printd(char* x, int y);

int main (){
int makanan(), minuman (), bantuan (), bangku (), keluar ();
char nanya ;
    printf("========================================================================================================================");
    printd("||\t\t\t\t\t\t  KEDAI KOPI SIANTO\t\t\t\t\t\t     ||\n",30);
    printf("========================================================================================================================\n\n");
    printf("\t___________________________________________________________\n");
    printf("\t||Silahkan pilih yang anda inginkan!\t\t\t ||\n");
    printf("\t||1. Menu Makanan\t\t\t\t\t ||\n");
    printf("\t||2. Menu Minuman\t\t\t\t\t ||\n");
    printf("\t||3. Tempat duduk\t\t\t\t\t ||\n");
    printf("\t||4. Bantuan\t\t\t\t\t\t ||\n");
    printf("\t||5. Exit\t\t\t\t\t\t ||\n");
    printf("\t___________________________________________________________\n");
    printf("Pilihan anda (1/2/3/4/5): ");

    switch (getch()){
            case '1':

				system("cls");
                makanan();
				break;

			case '2':

				system("cls");
                minuman();
				break;

            case '3':

				system("cls");
                bangku();
				break;

			case '4':

				system("cls");
                bantuan();
				break;

			case '5':
                system ("cls");
				keluar();
				return 0;
				break;

			default:

				printf("\n\nInput anda salah!\nSilakan masukan kembali pilihan Anda!\n");
				system("pause");
				system("cls");
				main();

				break;
    }
   nanya:

	printf("\nApakah Anda ingin menggunakan program ini kembali? [ketik y atau n]\n");

		switch(getch())

		{

		case 'y':

			system("cls");
			main();

		case 'n':

			system("cls");
			keluar ();
			return 0;

		default:

			printf("\nInput anda salah!\nSilakan masukan kembali pilihan Anda!\n");
			system("pause");
			goto nanya;
		}
 }

int makanan(){
int i=0, x;
char *list[6]={"Roti Lmen", "Roti super", "Kentang tes", "Kentang loyo", "Donat manis", "Kue uenak"};
int price[6]={10000,6000,5000,4000,7000,8000};
int number[6]={1,2,3,4,5,6};
for(i=0;i<6;++i){
printf("\n%d.%s\t : \t\tRp%d", number[i], list[i], price[i]);
}

    printf("\n\nPilihan anda (1/2/3/4/5/6): ");
    switch (getch()){
    case '1' :

        system("cls");
        printf("Anda mau berapa banyak Roti Lmen? ");
        scanf("%d", &x);
        printf("\n\n1 Roti Lmen seharga Rp10000, sebanyak %d buah!\n", x);
        total_harga=total_harga+10000*x;



				break;
    case '2':

        system("cls");
        printf("Anda mau berapa banyak Roti Super? ");
        scanf("%d", &x);
        printf("\n\n1 Roti Super seharga Rp6000, sebanyak %d buah!\n", x);
        total_harga=total_harga+6000*x;

				break;

    case '3':

        system("cls");
        printf("Anda mau berapa banyak Roti Kentang tes? ");
        scanf("%d", &x);
        printf("\n\n1 Roti Kentang tes seharga Rp5000, sebanyak %d buah!\n", x);
        total_harga=total_harga+5000*x;

				break;
    case '4':

        system("cls");
        printf("Anda mau berapa banyak Roti loyo? ");
        scanf("%d", &x);
        printf("\n\n1 Roti loyo seharga Rp4000, sebanyak %d buah!\n", x);
        total_harga=total_harga+4000*x;

				break;

    case '5':

        system("cls");
 		printf("Anda mau berapa banyak Donat manis? ");
        scanf("%d", &x);
        printf("\n\n1 Donat manis seharga Rp7000, sebanyak %d buah!\n", x);
        total_harga=total_harga+7000*x;

				break;

    case '6':

        system("cls");
 		printf("Anda mau berapa banyak Kue uenak? ");
        scanf("%d", &x);
        printf("\n\n1 Kue uenak seharga Rp8000, sebanyak %d buah!\n", x);
        total_harga=total_harga+8000*x;

				break;
    default:

				printf("\n\nInput anda salah!\nSilakan masukan kembali pilihan Anda!\n");
				system("pause");
				system("cls");
				makanan();

				break;

    }


    printf("\nApakah ada yang ingin ditambah? (ketik y/n) ");
        switch (getch()){
            case 'y':
                system("cls");
                makanan ();
                break;
            case 'n':
                system("cls");
                printf("Total harga pesanan anda Rp%d ", total_harga);
                printf("\n\n\n\n");
                return 0;
            default:

				printf("\n\nInput anda salah!\nSilakan masukan kembali pilihan Anda!\n");
				system("pause");
				system("cls");
				makanan();

				break;
        }
    }

int minuman(){
int i=0, x;
char *list[6]={"Kopi tera", "Kopi las", "Kopi malam", "Kopi siang", "Kopi manis", "Kopi begadang"};
int price[6]={10000,6000,5000,4000,7000,8000};
int number[6]={1,2,3,4,5,6};
for(i=0;i<6;++i){
printf("\n%d.%s\t : \t\tRp%d", number[i], list[i], price[i]);
}

    printf("\n\nPilihan anda (1/2/3/4/5/6): ");
    switch (getch()){
    case '1' :

        system("cls");
        printf("Anda mau berapa banyak Kopi tera? ");
        scanf("%d", &x);
        printf("\n\n1 Kopi tera seharga Rp10000, sebanyak %d buah!\n", x);
        total_harga=total_harga+10000*x;

				break;
    case '2':

        system("cls");
 		printf("Anda mau berapa banyak Kopi las? ");
        scanf("%d", &x);
        printf("\n\n1 Kopi las seharga Rp6000, sebanyak %d buah!\n", x);
        total_harga=total_harga+6000*x;

				break;

    case '3':

        system("cls");
		printf("Anda mau berapa banyak Kopi malam tes? ");
        scanf("%d", &x);
        printf("\n\n1 Kopi malam tes seharga Rp5000, sebanyak %d buah!\n", x);
        total_harga=total_harga+5000*x;

				break;
    case '4':

        system("cls");
		printf("Anda mau berapa banyak Kopi siang? ");
        scanf("%d", &x);
        printf("\n\n1 Kopi siang seharga Rp4000, sebanyak %d buah!\n", x);
        total_harga=total_harga+4000*x;

				break;

    case '5':

        system("cls");
		printf("Anda mau berapa banyak Kopi manis? ");
        scanf("%d", &x);
        printf("\n\n1 Kopi manis seharga Rp7000, sebanyak %d buah!\n", x);
        total_harga=total_harga+7000*x;

				break;

    case '6':

        system("cls");
		printf("Anda mau berapa banyak Kopi begadang? ");
        scanf("%d", &x);
        printf("\n\n1 Kopi begadang seharga Rp8000, sebanyak %d buah!\n", x);
        total_harga=total_harga+8000*x;

				break;
    default:

				printf("\n\nInput anda salah!\nSilakan masukan kembali pilihan Anda!\n");
				system("pause");
				system("cls");
				minuman();

				break;

    }


    printf("\nApakah ada yang ingin ditambah? (ketik y/n) ");
        switch (getch()){
            case 'y':
                system("cls");
                minuman ();
                break;
            case 'n':
                system("cls");
                printf("Total harga pesanan anda Rp%d", total_harga);
                printf("\n\n\n\n");
                return 0;
            default:

				printf("\n\nInput anda salah!\nSilakan masukan kembali pilihan Anda!\n");
				system("pause");
				system("cls");
				minuman();

				break;
        }
}

int bantuan(){
    printf("Langkah-langkah menggunakan program ini:\n");
    printf("1. Pilih salah satu daftar yang tersedia\n");
    printf("2. Pilih menu yang diinginkan\n");
    printf("3. Masukkan jumlah menu yang diinginkan\n");
    printf("4. Pilih tempat duduk yang diinginkan\n");
}

    int keluar (){
    printf("\n\n\t\t\t\t\t\tTerima kasih telah berkunjung!\n");
				printf("\t\t\t\t\t\t        Sampai jumpa");
				return 0;
				}

    int bangku(){
	int i=1,b=1,j=0,arr[20],k;
	char x;

		for(j=0;j<20;j++){
		arr[j]=0;}
		duduk:
	printf("\n\n");
		for(i=1;i<=17;i++){
		printf(" ");}
	printf("SILAHKAN PILIH TEMPAT DUDUK ANDA\n");

printf("\t__________________________________________________\n");
printf("\t||______________________________________________||\n");
printf("\t||\t\t\t\t\t\t||\n");
printf("\t||\t  1     2        3      4      5 \t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t  6     7        8      9      10\t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[5],arr[6],arr[7],arr[8],arr[9]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t  11    12       13     14     15\t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[10],arr[11],arr[12],arr[13],arr[14]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t  16    17       18     19     20 \t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[15],arr[16],arr[17],arr[18],arr[19]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t\t\t\t\t\t||\n");
printf("\t||______________________________________________||\n");
printf("\t__________________________________________________\n");
	printf("\n");
    printf("         Masukan nomor tempat duduk:");
    scanf("%d",&b);
    printf("\n");
    if(b<1||b>20){
		printf("       maaf input salah\n");
		system("cls");
		goto duduk;}
	else{
		k=arr[b-1];
		if(k==1){
		printf("-----------------------------------------------Maaf bangku sudah ditempati----------------------------------------------\n");
		system ("pause");
        system("cls");
		goto duduk;
		}
		else{
			arr[b-1]=1;
			printf("\n\n");
		for(i=1;i<=17;i++){
		printf(" ");}
	printf("SILAHKAN PILIH TEMPAT DUDUK ANDA\n");

printf("\t__________________________________________________\n");
printf("\t||______________________________________________||\n");
printf("\t||\t\t\t\t\t\t||\n");
printf("\t||\t  1     2        3      4      5 \t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t  6     7        8      9      10\t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[5],arr[6],arr[7],arr[8],arr[9]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t  11    12       13     14     15\t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[10],arr[11],arr[12],arr[13],arr[14]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t  16    17       18     19     20 \t||\n");
printf("\t||\t ___   ___      ___    ___    ___\t||\n");
printf("\t||\t[ %d ] [ %d ]    [ %d ]  [ %d ]  [ %d ]\t||\n",arr[15],arr[16],arr[17],arr[18],arr[19]);
printf("\t||\t ---   ---      ---    ---    ---\t||\n");
printf("\t||\t\t\t\t\t\t||\n");
printf("\t||______________________________________________||\n");
printf("\t__________________________________________________\n");
	printf("\n");
	printf("         Tersedia\n");
	printf("         Bangku anda di %d\n",b);
	tambah:
	printf("         Apakah anda ingin menambah  bangku? y(untuk ya) / n(tidak) )\n");
	printf("         pilihan:");

	switch(getch()){
		case 'y':
			system("cls");
			goto duduk;
		case'n':
		printf("%c\n",x);
		printd("-----------------------------------------------Mohon tunggu pesanan anda-----------------------------------------------",30);
		break;
		default:
		printf("         Input anda salah");
		goto tambah;

	}


		}

	}
}

    void printd(char* x, int y)

    {

	int i;

	for(i=0;i<strlen(x);i++)

	{

		printf("%c",x[i]);

		Sleep(y);

	}

}


