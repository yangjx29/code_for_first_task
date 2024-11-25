void  main () {
    int max;
    int NMkWOXG9i;
    int NGYw9e5zP32M;
    int j;
    int yXL0UmsiN;
    int gieEKf;
    max = (140 - 140);
    char bGfV0aeZlTS [1000];
    char b [50] [100];
    gets (bGfV0aeZlTS);
    NMkWOXG9i = strlen (bGfV0aeZlTS);
    gieEKf = NMkWOXG9i;
    for (NGYw9e5zP32M = (215 - 215), yXL0UmsiN = 0; NMkWOXG9i > NGYw9e5zP32M; NGYw9e5zP32M++) {
        if (!(' ' == bGfV0aeZlTS[NGYw9e5zP32M])) {
            {
                j = NGYw9e5zP32M;
                while (j < NMkWOXG9i) {
                    if (!(' ' != bGfV0aeZlTS[j]))
                        break;
                    else
                        b[yXL0UmsiN][j - NGYw9e5zP32M] = bGfV0aeZlTS[j];
                    j++;
                };
            }
            b[yXL0UmsiN++][j - NGYw9e5zP32M] = '\0';
            NGYw9e5zP32M = j;
        };
    }
    for (NGYw9e5zP32M = 0; yXL0UmsiN > NGYw9e5zP32M; NGYw9e5zP32M++) {
        if (max < (int) strlen (b[NGYw9e5zP32M]))
            max = strlen (b[NGYw9e5zP32M]);
        if (gieEKf > (int) strlen (b[NGYw9e5zP32M]))
            gieEKf = strlen (b[NGYw9e5zP32M]);
    }
    {
        NGYw9e5zP32M = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (NGYw9e5zP32M < yXL0UmsiN) {
            if ((int) strlen (b[NGYw9e5zP32M]) == max) {
                printf ("%s\n", b[NGYw9e5zP32M]);
                break;
            }
            NGYw9e5zP32M = NGYw9e5zP32M +1;
        };
    }
    for (NGYw9e5zP32M = 0; NGYw9e5zP32M < yXL0UmsiN; NGYw9e5zP32M++)
        if ((int) strlen (b[NGYw9e5zP32M]) == gieEKf) {
            printf ("%s\n", b[NGYw9e5zP32M]);
            break;
        };
}

