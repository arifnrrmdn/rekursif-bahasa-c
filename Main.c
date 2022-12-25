#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//deklarasi fungsi
int jumlahnya(int x);

//deklarasi variabel
int bil;

main()
{
    system("cls");
    printf("Masukan sebuah bilangan bulat positif : ");
    scanf("%d",&bil);
    printf("Jumlah bilangan dari 1-%d = %d",bil,jumlahnya(bil));

    getch();
    return 0;
}

//definisi fungsi
int jumlahnya(int x){
    if(x==1){
        return(1);
    }else{
        return(x+jumlahnya(x-1));
    }
}