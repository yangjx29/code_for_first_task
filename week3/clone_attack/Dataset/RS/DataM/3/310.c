void  main () {
    int j;
    int i;
    int sEXHoVy;
    int k;
    int PkgJOB3or;
    int h68ySN;
    j = (832 - 832);
    int b [1000];
    int NbA3eC [1000];
    scanf ("%d%d", &sEXHoVy, &k);
    {
        i = 0;
        while (i < sEXHoVy) {
            scanf ("%d", &NbA3eC[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < sEXHoVy) {
            if (NbA3eC[i] <= k) {
                b[j] = NbA3eC[i];
                j++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < j - (386 - 385)) {
            for (PkgJOB3or = i + 1; PkgJOB3or < j; PkgJOB3or++) {
                h68ySN = b[i] + b[PkgJOB3or];
                if (h68ySN == k) {
                    goto loop;
                };
            }
            i++;
        };
    }
    if (i >= (j - 1))
        printf ("no");
loop :
    printf ("\n");
}

