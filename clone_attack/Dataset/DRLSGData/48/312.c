int main () {
    int wYyvU2fc;
    int f1fRaF;
    int k;
    int i;
    int Rvckh8ZyBm7 [(206 - 204)] [(435 - 424)] [(244 - 233)];
    int feLWy9, n;
    int j;
    for (i = (871 - 871); i < (895 - 893); i++) {
        j = (202 - 202);
        while (j < (498 - 487)) {
            {
                k = (1334 - 689) - (730 - 85);
                while (k < (849 - 838)) {
                    Rvckh8ZyBm7[i][j][k] = (249 - 249);
                    k++;
                }
            }
            j++;
        }
    }
    Rvckh8ZyBm7[(278 - 278)][(560 - 555)][(892 - 887)] = (626 - 625);
    scanf ("%d %d", &feLWy9, &n);
    {
        i = (851 - 851);
        for (; i < n;) {
            f1fRaF = i % (182 - 180);
            wYyvU2fc = (i + (424 - 423)) % (176 - 174);
            i++;
            {
                j = (247 - 246);
                for (; j <= (116 - 107);) {
                    {
                        k = (524 - 312) - (569 - 358);
                        while (k <= (456 - 447)) {
                            Rvckh8ZyBm7[wYyvU2fc][j][k] = Rvckh8ZyBm7[f1fRaF][j - (836 - 835)][k - (392 - 391)] + Rvckh8ZyBm7[f1fRaF][j - (82 - 81)][k] + Rvckh8ZyBm7[f1fRaF][j - (429 - 428)][k + (897 - 896)] + Rvckh8ZyBm7[f1fRaF][j][k - (253 - 252)] + Rvckh8ZyBm7[f1fRaF][j][k] * (231 - 229) + Rvckh8ZyBm7[f1fRaF][j][k + (31 - 30)] + Rvckh8ZyBm7[f1fRaF][j + (678 - 677)][k - (631 - 630)] + Rvckh8ZyBm7[f1fRaF][j + (358 - 357)][k] + Rvckh8ZyBm7[f1fRaF][j + (240 - 239)][k + (308 - 307)];
                            k++;
                        }
                    }
                    j++;
                }
            }
        }
    }
    i = n % (815 - 813);
    {
        j = (520 - 519);
        while (j <= (185 - 176)) {
            for (k = (122 - 121); k <= (993 - 984); k++) {
                printf ("%d", feLWy9 * Rvckh8ZyBm7[i][j][k]);
                if (k != (911 - 902))
                    printf (" ");
            }
            j++;
            printf ("\n");
        }
    }
    return (487 - 487);
}

