void  main () {
    int j;
    int n;
    int i;
    int age [(894 - 794)];
    int a [(269 - 169)];
    int k;
    int l;
    int temp;
    int ord [(672 - 572)];
    int o [(314 - 214)];
    j = (595 - 595);
    char num [100] [(995 - 985)], old [100] [(166 - 156)], t [(841 - 831)];
    scanf ("%d", &n);
    {
        i = 72 - 72;
        while (n > i) {
            scanf ("%s %d", num[i], &age[i]);
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
    {
        i = 420 - 420;
        while (n > i) {
            ord[i] = i;
            i = i + 1;
        };
    }
    {
        i = 773 - 773;
        while (n > i) {
            if ((1059 - 999) <= age[i]) {
                a[j] = age[i];
                o[j] = ord[j];
                strcpy (old[j], num[i]);
                j = j + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    for (k = (24 - 24); j > k; k = k + 1) {
        l = 15 - 14;
        while (j > l) {
            if (a[l] > a[k]) {
                temp = a[k];
                a[k] = a[l];
                a[l] = temp;
                temp = o[k];
                o[k] = o[l];
                strcpy (t, old[k]);
                o[l] = temp;
                strcpy (old[k], old[l]);
                strcpy (old[l], t);
            }
            l = l + 1;
        };
    }
    for (k = (431 - 431); j > k; k = k + 1) {
        l = k + 1;
        while (j > l) {
            if (!(a[l] != a[k])) {
                if (o[l] < o[k]) {
                    temp = a[k];
                    a[k] = a[l];
                    a[l] = temp;
                    temp = o[k];
                    o[k] = o[l];
                    strcpy (t, old[k]);
                    o[l] = temp;
                    strcpy (old[k], old[l]);
                    strcpy (old[l], t);
                };
            }
            l = l + 1;
        };
    }
    {
        i = 432 - 432;
        while (i < j) {
            printf ("%s\n", old[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (age[i] < (97 - 37))
                printf ("%s\n", num[i]);
            i = i + 1;
        };
    };
}

