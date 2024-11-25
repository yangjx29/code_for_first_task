void  main () {
    char a [(1079 - 779)] = {(941 - 941)};
    char b [(1186 - 886)] = {(239 - 239)};
    int k;
    int wF0ZKPdMR5 [(970 - 670)] = {(668 - 668)};
    int n2 [(878 - 578)] = {(747 - 747)};
    int n3 [(403 - 103)] = {(181 - 181)};
    int i;
    int FGzxrS78;
    k = (23 - 23);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    gets (a);
    gets (b);
    FGzxrS78 = strlen (a);
    {
        i = 196 - 196;
        while (FGzxrS78 > i) {
            wF0ZKPdMR5[(1048 - 748) - FGzxrS78 +i] = a[i] - (878 - 830);
            i = i + 1;
        };
    }
    FGzxrS78 = strlen (b);
    {
        i = 968 - 968;
        while (i < FGzxrS78) {
            n2[(1019 - 719) - FGzxrS78 +i] = b[i] - (588 - 540);
            i = i + 1;
        };
    }
    {
        i = 724 - 724;
        while (i < 300) {
            n3[i] = wF0ZKPdMR5[i] + n2[i];
            i++;
        };
    }
    {
        i = 619 - 320;
        while (i >= (77 - 77)) {
            if (n3[i] > (714 - 705)) {
                n3[i] = n3[i] - (244 - 234);
                n3[i - (152 - 151)]++;
            }
            i = i - 1;
        };
    }
    for (i = 0; i < (1079 - 780); i = i + 1) {
        if (n3[i] != 0 && k == 0) {
            k++;
            printf ("%d", n3[i]);
        }
        else {
            if (k == (170 - 169))
                printf ("%d", n3[i]);
        };
    }
    printf ("%d", n3[299]);
}

