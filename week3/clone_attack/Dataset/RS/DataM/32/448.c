void  stringrev (char *a, char *b) {
    int FDReE9O3xI5;
    int j;
    int k;
    int l;
    int n;
    l = strlen (a);
    {
        FDReE9O3xI5 = 354 - 354;
        while (FDReE9O3xI5 < l) {
            b[FDReE9O3xI5] = a[l - (54 - 53) - FDReE9O3xI5];
            FDReE9O3xI5 = FDReE9O3xI5 +1;
        };
    }
    b[FDReE9O3xI5] = (730 - 730);
}

void  jianfa (char *a, char *b, char *S2KDyQs8) {
    char d [(914 - 813)] = {(269 - 269)}, e [(946 - 845)] = {(867 - 867)};
    int FDReE9O3xI5, j, k, l = strlen (a), t = (929 - 929);
    stringrev (a, d);
    stringrev (b, e);
    {
        FDReE9O3xI5 = 294 - 294;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (FDReE9O3xI5 < l) {
            if (!((594 - 594) == e[FDReE9O3xI5]))
                d[FDReE9O3xI5] = d[FDReE9O3xI5] - e[FDReE9O3xI5] - t;
            else
                d[FDReE9O3xI5] = d[FDReE9O3xI5] - '0' - t;
            if ((259 - 259) > d[FDReE9O3xI5]) {
                t = 1;
                d[FDReE9O3xI5] = d[FDReE9O3xI5] + 10 + '0';
            }
            else {
                t = (320 - 320);
                d[FDReE9O3xI5] = d[FDReE9O3xI5] + '0';
            }
            FDReE9O3xI5 = FDReE9O3xI5 +1;
        };
    }
    {
        j = l - 1;
        while (j >= 0) {
            if (d[j] == '0')
                d[j] = 0;
            else
                break;
            j = j - 1;
        };
    }
    stringrev (d, S2KDyQs8);
}

void  main () {
    char a [(155 - 54)];
    char b [(1086 - 985)];
    char S2KDyQs8 [101] = {0};
    int n;
    int FDReE9O3xI5;
    int j;
    int k;
    scanf ("%d", &n);
    while (n = n - 1) {
        scanf ("%s %s", a, b);
        jianfa (a, b, S2KDyQs8);
        printf ("%s\n", S2KDyQs8);
    };
}

