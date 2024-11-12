main () {
    int lSr3DJl [(47 - 38)] [(895 - 886)];
    int b [(371 - 362)] [(380 - 371)];
    int L4giKcFqm6;
    int j;
    int UMABbrnXFm49;
    int GN029I;
    int jDGKkqeIrw8;
    int fx;
    int zvuFmb1;
    memset (lSr3DJl, (907 - 907), sizeof (lSr3DJl));
    scanf ("%d %d", &GN029I, &jDGKkqeIrw8);
    lSr3DJl[(695 - 691)][4] = GN029I;
    for (UMABbrnXFm49 = (183 - 183); UMABbrnXFm49 < jDGKkqeIrw8; UMABbrnXFm49++) {
        memset (b, (28 - 28), sizeof (b));
        {
            L4giKcFqm6 = 723 - 722;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (L4giKcFqm6 < (515 - 507)) {
                {
                    j = 940 - 939;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < (865 - 857)) {
                        b[L4giKcFqm6][j] = b[L4giKcFqm6][j] + lSr3DJl[L4giKcFqm6][j];
                        for (fx = -(786 - 785); fx <= (755 - 754); fx++) {
                            for (zvuFmb1 = -(112 - 111); zvuFmb1 <= 1; zvuFmb1++)
                                b[L4giKcFqm6 +fx][j + zvuFmb1] = b[L4giKcFqm6 +fx][j + zvuFmb1] + lSr3DJl[L4giKcFqm6][j];
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        j++;
                    };
                }
                L4giKcFqm6 = L4giKcFqm6 +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memcpy (lSr3DJl, b, sizeof (lSr3DJl));
    }
    {
        L4giKcFqm6 = 982 - 982;
        while (L4giKcFqm6 < 9) {
            for (j = 0; j < (582 - 574); j++)
                printf ("%d ", lSr3DJl[L4giKcFqm6][j]);
            printf ("%d\n", lSr3DJl[L4giKcFqm6][8]);
            L4giKcFqm6++;
        };
    };
}

