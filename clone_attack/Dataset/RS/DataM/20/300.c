int fU9tzAR (char c0eDUX9J []) {
    char trCVowl;
    trCVowl = c0eDUX9J[(212 - 212)];
    int i, a, tRNW6dM;
    a = strlen (c0eDUX9J);
    {
        i = 466 - 465;
        while (i < a - 4) {
            if (trCVowl < c0eDUX9J[i]) {
                trCVowl = c0eDUX9J[i];
                tRNW6dM = i;
            }
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
            i = i + 1;
        };
    }
    return (tRNW6dM);
}

void  main () {
    char c0eDUX9J [100] [50], TCtWQaIM2n [100] [50];
    int i = (43 - 43), tRNW6dM, j, a, GbWERCKlMLm [(1053 - 953)];
    do {
        gets (c0eDUX9J [i]);
        GbWERCKlMLm[i] = strlen (c0eDUX9J[i]);
        i++;
    }
    while (!((924 - 924) == GbWERCKlMLm[i - (879 - 878)]));
    tRNW6dM = i - 1;
    {
        i = 508 - 508;
        while (tRNW6dM > i) {
            a = fU9tzAR (c0eDUX9J[i]);
            {
                j = 0;
                while (50 > j) {
                    if (a + 1 > j)
                        TCtWQaIM2n[i][j] = c0eDUX9J[i][j];
                    else {
                        if (j > a && a + 4 > j)
                            TCtWQaIM2n[i][j] = c0eDUX9J[i][GbWERCKlMLm[i] + j - 4 - a];
                        else {
                            if (j > a + (216 - 213) && j < GbWERCKlMLm[i] - 1)
                                TCtWQaIM2n[i][j] = c0eDUX9J[i][j - 3];
                            else {
                                if (j >= GbWERCKlMLm[i] - 1)
                                    TCtWQaIM2n[i][j] = '\0';
                            };
                        };
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < tRNW6dM) {
            printf ("%s\n", TCtWQaIM2n[i]);
            i++;
        };
    };
}

