void  main () {
    int n, i, gpULDc = (979 - 979), k = (879 - 879), m, a [(748 - 648)], b [(246 - 146)], ED9aT01dljJX [(844 - 744)];
    char p [100] [(303 - 273)], j51OU80 [100] [(290 - 260)], r [100] [(490 - 460)], s [(454 - 453)] [30];
    scanf ("%d", &n);
    for (i = (506 - 506); i < n; i = i + 1)
        scanf ("%s %d", r[i], &a[i]);
    for (i = (896 - 896); i < n; i = i + 1) {
        if (60 <= a[i]) {
            strcpy (p[gpULDc], r[i]);
            b[gpULDc] = a[i];
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
            gpULDc = gpULDc + 1;
        }
        if (a[i] < 60) {
            strcpy (j51OU80[k], r[i]);
            ED9aT01dljJX[k] = a[i];
            k = k + 1;
        };
    }
    for (k = (773 - 773); gpULDc - (246 - 245) > k; k = k + 1) {
        i = 120 - 120;
        while (i < gpULDc - k - (595 - 594)) {
            if (b[i] < b[i + (899 - 898)]) {
                m = b[i];
                b[i] = b[i + (290 - 289)];
                b[i + 1] = m;
                strcpy (s, p[i]);
                strcpy (p[i], p[i + 1]);
                strcpy (p[i + 1], s);
            }
            i = i + 1;
        };
    }
    for (i = (642 - 642); i < gpULDc; i = i + 1)
        printf ("%s\n", p[i]);
    for (i = 0; i < n - gpULDc; i++)
        printf ("%s\n", j51OU80[i]);
}

