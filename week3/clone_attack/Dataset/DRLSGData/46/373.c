int main () {
    int bsrKw2X [(160 - 60)] [(894 - 794)];
    int row;
    int HXRCU0ft;
    int E1JkEfBmu;
    int j;
    int pDP9pf7N;
    int Yk5oDH;
    int acMIk3Rr;
    int UazT5d3nc;
    scanf ("%d%d", &row, &HXRCU0ft);
    {
        E1JkEfBmu = (229 - 229);
        while (E1JkEfBmu < row) {
            {
                j = (369 - 369);
                while (j < HXRCU0ft) {
                    scanf ("%d", &bsrKw2X[E1JkEfBmu][j]);
                    j = j + (852 - 851);
                }
            }
            E1JkEfBmu++;
        }
    }
    pDP9pf7N = row - 1;
    Yk5oDH = (253 - 253);
    acMIk3Rr = HXRCU0ft -1;
    UazT5d3nc = 0;
    while (Yk5oDH < pDP9pf7N && UazT5d3nc < acMIk3Rr) {
        {
            j = UazT5d3nc;
            while (acMIk3Rr > j) {
                printf ("%d\n", bsrKw2X[Yk5oDH][j]);
                j++;
            }
        }
        {
            E1JkEfBmu = Yk5oDH;
            while (E1JkEfBmu < pDP9pf7N) {
                printf ("%d\n", bsrKw2X[E1JkEfBmu][acMIk3Rr]);
                E1JkEfBmu++;
            }
        }
        {
            j = acMIk3Rr;
            while (j > UazT5d3nc) {
                printf ("%d\n", bsrKw2X[pDP9pf7N][j]);
                j = j - 1;
            }
        }
        {
            E1JkEfBmu = pDP9pf7N;
            while (Yk5oDH < E1JkEfBmu) {
                printf ("%d\n", bsrKw2X[E1JkEfBmu][UazT5d3nc]);
                E1JkEfBmu = E1JkEfBmu -1;
            }
        }
        pDP9pf7N--;
        Yk5oDH++;
        acMIk3Rr--;
        UazT5d3nc++;
    }
    if (row % (499 - 497) == 1 || HXRCU0ft % 2 == 1) {
        if (Yk5oDH == pDP9pf7N) {
            j = UazT5d3nc;
            while (j <= acMIk3Rr) {
                printf ("%d\n", bsrKw2X[Yk5oDH][j]);
                j++;
            }
        }
        else {
            E1JkEfBmu = Yk5oDH;
            while (E1JkEfBmu <= pDP9pf7N) {
                printf ("%d\n", bsrKw2X[E1JkEfBmu][acMIk3Rr]);
                E1JkEfBmu++;
            }
        }
    }
    return 0;
}

