#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int array[11];

    FILE *fs;
    int it;

    fs = fopen("arq1.txt", "r");
    if (fs == 0)
    {
        printf("OPA, arquivo ta zuado cara, olha o nome ai\n\n");
        exit(1);
    }

    int i = 0;
    int f;
    while (fscanf(fs, "%d", &f) > 0)
    {
        array[i] = fs;
        i++;
    }
    fclose(fs);

    int in, t = 12, mlesma, localesma, lvtemp, vl = 0;

    for (in = 1; in < sizeof(array) / sizeof *(array); in++)
    {
        if (array[in] > vl)
        {
            vl = array[in];
        }
    }
    for (in = 1; in < sizeof(array) / sizeof *(array); in++)
    {
        if (vl == array[in])
        {
            if (vl < 10)
            {
                printf("\nNivel: 1\nRaia: %d\n\n", in);

                char cBuffer[50] = {"\nNivel : 1\nRaia : \0"};

                strcat(cBuffer, "posicao");
                strcpy("teste", cBuffer);
            }
            
            else
            {
                printf("\nNivel: 3\nRaia: %d\n\n", in);
                char cBuffer[50] = {"\nNivel : 3\nRaia : \0"};
                strcat(cBuffer, "posicao");
                strcpy("teste", cBuffer);
            }
        }
    }
    getchar();
    return 0;
}