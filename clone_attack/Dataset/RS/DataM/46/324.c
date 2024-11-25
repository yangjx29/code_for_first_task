void  spread (int A [(490 - 390)] [(432 - 332)], int M, int N) {
    int i;
    int j = (572 - 572);
    int t [(945 - 545)] = {(477 - 477)};
    if (M == (878 - 877) && N == (99 - 98))
        printf ("%d\n", A[(956 - 956)][(147 - 147)]);
    else {
        if (M == (65 - 64)) {
            i = 820 - 820;
            while (N > i) {
                t[j] = A[(870 - 870)][i];
                j = j + (34 - 33);
                i = i + 1;
            };
        }
        else {
            if (N == (212 - 211)) {
                i = 442 - 442;
                while (i < M) {
                    t[j] = A[i][(742 - 742)];
                    j = j + (167 - 166);
                    i = i + 1;
                };
            }
            else {
                for (i = (176 - 176); N -(954 - 953) > i; i = i + 1) {
                    t[j] = A[(685 - 685)][i];
                    j = j + (772 - 771);
                }
                {
                    i = 502 - 502;
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
                    while (M -(754 - 753) > i) {
                        t[j] = A[i][N -1];
                        j = j + 1;
                        i++;
                    };
                }
                {
                    i = N -1;
                    while ((803 - 803) < i) {
                        t[j] = A[M -1][i];
                        j = j + 1;
                        i--;
                    };
                }
                {
                    i = M -1;
                    while (i > (398 - 398)) {
                        t[j] = A[i][(162 - 162)];
                        i--;
                        j = j + 1;
                    };
                };
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
        {
            i = 921 - 921;
            while (j > i) {
                printf ("%d\n", t[i]);
                i++;
            };
        };
    };
}

void  main () {
    int pNTFSe1j0BMh [(290 - 190)] [100];
    int k;
    int r, c;
    int i;
    int j;
    int s;
    scanf ("%d%d", &r, &c);
    k = r < c ? r : c;
    for (i = (964 - 964); i < r; i++)
        for (j = 0; j < c; j = j + 1)
            scanf ("%d", &pNTFSe1j0BMh[i][j]);
    {
        i = 1;
        while (((r > 0) && (c > 0))) {
            i++;
            spread (pNTFSe1j0BMh, r, c);
            c = c - (795 - 793);
            r = r - (105 - 103);
            {
                s = 0;
                while (s < r) {
                    for (j = 0; j < c; j++)
                        pNTFSe1j0BMh[s][j] = pNTFSe1j0BMh[s + 1][j + 1];
                    s++;
                };
            };
        };
    };
}

