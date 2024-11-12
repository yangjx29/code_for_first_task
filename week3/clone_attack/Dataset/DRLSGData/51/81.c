int ALM045 = 1, n, MA71kNE [1000] = {0}, TsHyOPpWgm7 [1000] = {0}, MZe1AU = 0;
char ii06krT3o [1000];

int work (int i, int j) {
    int k;
    k = 0;
    for (; !(ii06krT3o[j + k] != ii06krT3o[i + k]);) {
        if (n - 1 > k)
            k++;
        else
            return 1;
    }
    return 0;
}

int main () {
    int j;
    int i;
    scanf ("%d%s", &n, ii06krT3o);
    for (i = 0; strlen (ii06krT3o) - n >= i; i++) {
        ALM045 = 1;
        for (j = i + 1; strlen (ii06krT3o) - n >= j; j++) {
            if (work (i, j) == 1 && MA71kNE[j] != 1) {
                ALM045 += 1;
                MA71kNE[j] = 1;
            }
        }
        if (MZe1AU < ALM045) {
            MZe1AU = ALM045;
        }
    }
    if (MZe1AU > 1)
        printf ("%d\n", MZe1AU);
    for (i = 0; strlen (ii06krT3o) - n >= i; i++) {
        ALM045 = 1;
        for (j = i + 1; j <= strlen (ii06krT3o) - n; j++) {
            if (work (i, j) == 1 && TsHyOPpWgm7[j] != 1) {
                ALM045 += 1;
                TsHyOPpWgm7[j] = 1;
            }
        }
        if (ALM045 == MZe1AU) {
            if (ALM045 > 1) {
                for (int k = 0;
                k < n; k++) {
                    printf ("%c", ii06krT3o[i + k]);
                }
            }
        }
    }
    if (MZe1AU == 1)
        ;
    return 0;
}

