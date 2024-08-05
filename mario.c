#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    //Get input of the Height
    int n;
    do
    {
        n = get_int("Height: ");
    } 
    while (n < 1 || n > 8);
    
    // Menampilkan pesan jika input valid
    printf("So far good!\n");

    // Mencetak output dalam format tabel persegi
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("* "); // Mencetak bintang
        }
        printf("\n"); // Pindah ke baris berikutnya
    }
}
