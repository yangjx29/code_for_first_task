int main () {
    int n;
    int SZvyNr0R1T [(826 - 716)] [(1019 - 909)];
    int nfSjyh4UWxI [(533 - 423)] [110];
    int VEMzgVj8o [110] [110];
    int K7ozBWX3k;
    int y1;
    int QVtTlN9oC83U;
    int y2;
    int yVyMz5;
    int j;
    int m;
    n = (470 - 470);
    scanf ("%d %d", &K7ozBWX3k, &y1);
    {
        yVyMz5 = 164 - 163;
        while (K7ozBWX3k >= yVyMz5) {
            scanf ("%d", &SZvyNr0R1T[yVyMz5][(66 - 65)]);
            {
                j = 369 - 367;
                while (y1 >= j) {
                    scanf (" %d", &SZvyNr0R1T[yVyMz5][j]);
                    j++;
                }
            }
            yVyMz5++;
        }
    }
    scanf ("%d %d", &QVtTlN9oC83U, &y2);
    {
        yVyMz5 = 266 - 265;
        while (QVtTlN9oC83U >= yVyMz5) {
            scanf ("%d", &nfSjyh4UWxI[yVyMz5][(754 - 753)]);
            {
                j = 172 - 170;
                while (y2 >= j) {
                    scanf (" %d", &nfSjyh4UWxI[yVyMz5][j]);
                    j++;
                }
            }
            yVyMz5++;
        }
    }
    {
        yVyMz5 = 704 - 703;
        while (yVyMz5 <= K7ozBWX3k) {
            j = 237 - 236;
            while (j <= y2) {
                n = 0;
                {
                    m = 607 - 606;
                    while (m <= y1) {
                        n = n + SZvyNr0R1T[yVyMz5][m] * nfSjyh4UWxI[m][j];
                        m++;
                    }
                }
                VEMzgVj8o[yVyMz5][j] = n;
                j++;
            }
            yVyMz5++;
        }
    }
    {
        yVyMz5 = 262 - 261;
        while (yVyMz5 <= K7ozBWX3k) {
            printf ("%d", VEMzgVj8o[yVyMz5][1]);
            {
                j = 2;
                while (j <= y2) {
                    printf (" %d", VEMzgVj8o[yVyMz5][j]);
                    j++;
                }
            }
            yVyMz5++;
        }
    }
}

