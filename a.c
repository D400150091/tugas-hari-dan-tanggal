#include <stdio.h>
#include <time.h>


    void tampilkan_kalender ()
{

    time_t rawtime ;
    struct tm *info;
    char buffer[80];
    char HARI[10];

    time(&rawtime);

    info = localtime(&rawtime);

    strftime(HARI,10,"%A",info);
    if(strcmp(HARI,"Monday") == 0)
    {
        printf("\nHari Senin\n");

    }else if(strcmp(HARI,"Tuesday") == 0)
    {
        printf("\nHari Selasa\n");

    }else if(strcmp(HARI,"Wednesday") == 0)
    {
        printf("\nHari Rabu\n");

    }else if(strcmp(HARI,"Thursday") == 0)
    {
        printf("\nHari Kamis\n");

    }else if(strcmp(HARI,"Friday") == 0)
    {
        printf("\nHari Jum'at\n");

    }else if(strcmp(HARI,"Saturday") == 0)
    {
        printf("\nHari Sabtu\n");

    }else if(strcmp(HARI,"Sunday") == 0)
    {
        printf("\nHari Minggu\n");

    }
strftime( buffer, 80, " %d %B %Y pukul :%H : %M : %S wib",info);
    printf("Tanggal & Jam : %s \n", buffer);
}

int main()
{
    time_t AWAL=0, AKHIR=0;

        time(&AWAL);
        while(1)
        {
            time(&AKHIR);
            if(AKHIR-AWAL > 0)
            {
                tampilkan_kalender ();
                AWAL = AKHIR;
            }
        }
        return 0;
}
