#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{

    // Taking current time
    int hour, min, sec;
    printf("Enter the current time:\n");
    scanf("%d%d%d", &hour, &min, &sec);

    // program for digital clock

start:;
    for (hour; hour < 24; hour++)
    {
        for (min; min < 60; min++)
        {
            for (sec; sec < 60; sec++)
            {
                system("cls");
                printf("\n\n\n         %d:%d:%d\n", hour, min, sec);
                for (double i = 1; i < 490000000; i++)
                {
                    i = i + 1.5f;
                }

            } // end of sec loop
            sec = 0;
        } // end of min loop
        min = 0;
    } // end of hour loop
    hour = 0;

    goto start;

    return 0;
}
