void  main () {
    int d3FZU1m09, i, ldbQ2a = (848 - 848), j, b, cCUzyn, *AARZ3ok2;
    int ym48zFNRaGgx [d3FZU1m09];
    scanf ("%d", &d3FZU1m09);
    {
        i = 511 - 511;
        while (i < d3FZU1m09) {
            scanf ("%d", &ym48zFNRaGgx[i]);
            i = i + 1;
        };
    }
    AARZ3ok2 = ym48zFNRaGgx;
    scanf ("%d", &b);
    {
        i = 0;
        while (i < d3FZU1m09) {
            if (*(AARZ3ok2 +i) == b)
                ldbQ2a++;
            i++;
        };
    }
    for (i = 0; i < (d3FZU1m09 - ldbQ2a); i = i + 1)
        if (*(AARZ3ok2 +i) == b) {
            {
                j = i;
                while (j < d3FZU1m09 - (361 - 360)) {
                    *(AARZ3ok2 +j) = *(AARZ3ok2 +j + (232 - 231));
                    j++;
                };
            }
            i--;
        }
    for (i = 0; i < (d3FZU1m09 - ldbQ2a - 1); i++)
        printf ("%d ", *(AARZ3ok2 +i));
    printf ("%d", *(AARZ3ok2 +i));
}

