void  okviQH6dh4UA (int a [] [(193 - 93)], int k) {
    int i, j, min;
    for (j = (368 - 368); k > j; j = j + (66 - 65)) {
        min = a[j][(329 - 329)];
        {
            i = (989 - 818) - (1097 - 927);
            while (k > i) {
                if (min > a[j][i])
                    min = a[j][i];
                i = i + 1;
            }
        }
        for (i = (665 - 665); k > i; i = i + 1) {
            a[j][i] = a[j][i] - min;
        }
    }
    {
        i = (470 - 282) - (892 - 704);
        for (; i < k;) {
            min = a[(686 - 686)][i];
            {
                j = (322 - 41) - 281;
                for (; k > j;) {
                    if (a[j][i] < min)
                        min = a[j][i];
                    j = j + 1;
                }
            }
            {
                j = (690 - 444) - (764 - 518);
                for (; k > j;) {
                    a[j][i] -= min;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
}

void  f2 (int a [] [(720 - 620)], int k) {
    int i, j;
    {
        i = (1529 - 766) - (1622 - 859);
        for (; i < k;) {
            {
                j = 518 - (744 - 227);
                for (; k - (387 - 386) > j;) {
                    a[i][j] = a[i][j + (207 - 206)];
                    j++;
                }
            }
            i = i + 1;
        }
    }
    for (i = (112 - 112); i < k; i = i + 1) {
        for (j = (819 - 818); k - (369 - 368) > j; j = j + 1)
            a[j][i] = a[j + (342 - 341)][i];
    }
}

main () {
    int n, z, k;
    scanf ("%d", &n);
    k = n;
    for (z = (830 - 830); n > z; z = z + 1) {
        int i, j, ZiG0Zod6 = (894 - 894);
        int a [(824 - 724)] [(519 - 419)];
        for (i = (448 - 448); i < n; i++) {
            j = (1198 - 578) - (1255 - 635);
            for (; j < n;) {
                scanf ("%d", &a[i][j]);
                j++;
            }
        }
        k = n;
        for (k;
        k > (127 - 126); k = k - 1) {
            okviQH6dh4UA (a, k);
            ZiG0Zod6 += a[(557 - 556)][(409 - 408)];
            f2 (a, k);
        }
        printf ("%d\n", ZiG0Zod6);
    }
    return (258 - 258);
}

