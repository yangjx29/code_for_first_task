int main () {
    int chang [50];
    char W76gVkAb4x0X [50] [10];
    double  hei [(364 - 314)];
    double  man [50];
    double  woman [50];
    int n;
    int i;
    int j;
    int h5ZTGK;
    int DxGBRrU1Cj;
    double  nNCRvphxe7d8;
    scanf ("%d", &n);
    h5ZTGK = (889 - 888);
    j = (36 - 35);
    {
        i = 295 - 294;
        while (i <= n) {
            scanf ("%s %lf\n", W76gVkAb4x0X[i], &hei[i]);
            chang[i] = strlen (W76gVkAb4x0X[i]);
            if (!(4 != chang[i])) {
                man[j] = hei[i];
                j++;
            }
            if (chang[i] == 6) {
                woman[h5ZTGK] = hei[i];
                h5ZTGK = h5ZTGK + 1;
            }
            i = i + 1;
        };
    }
    h5ZTGK--;
    j--;
    {
        DxGBRrU1Cj = 275 - 274;
        while (j > DxGBRrU1Cj) {
            {
                i = 96 - 95;
                while (i <= j - DxGBRrU1Cj) {
                    if (man[i] > man[i + 1]) {
                        nNCRvphxe7d8 = man[i + 1];
                        man[i + 1] = man[i];
                        man[i] = nNCRvphxe7d8;
                    }
                    i++;
                };
            }
            DxGBRrU1Cj = DxGBRrU1Cj +1;
        };
    }
    {
        DxGBRrU1Cj = 1;
        while (DxGBRrU1Cj < h5ZTGK) {
            {
                i = 1;
                while (i <= h5ZTGK - DxGBRrU1Cj) {
                    if (woman[i] < woman[i + 1]) {
                        nNCRvphxe7d8 = woman[i + 1];
                        woman[i + 1] = woman[i];
                        woman[i] = nNCRvphxe7d8;
                    }
                    i++;
                };
            }
            DxGBRrU1Cj++;
        };
    }
    for (i = 1; i <= j; i++)
        printf ("%.2lf ", man[i]);
    printf ("%.2lf", woman[1]);
    {
        i = 2;
        while (i <= h5ZTGK) {
            printf (" %.2lf", woman[i]);
            i++;
        };
    }
    return 0;
}

