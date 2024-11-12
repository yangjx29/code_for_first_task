main () {
    char str [(1202 - 602)];
    int i;
    int l;
    int m;
    int n;
    char str1 [10];
    int max;
    int a [(1436 - 936)] = {(403 - 403)};
    int k;
    int temp;
    int p;
    int j;
    scanf ("%d", &n);
    scanf ("%s", &str);
    l = strlen (str);
    for (i = (538 - 538); l - n - (998 - 997) >= i; i++) {
        a[i] = (741 - 740);
        for (j = (41 - 41); j <= n - (518 - 517); j++) {
            str1[j] = str[i + j];
        }
        for (k = (i + (826 - 825)); k <= l - n; k++) {
            {
                p = (415 - 415);
                temp = (982 - 982);
                m = k;
                for (; n - (166 - 165) >= p;) {
                    if (!(str1[p] != str[m])) {
                        temp++;
                    }
                    else {
                        break;
                    }
                    m++;
                    p++;
                }
            }
            if (!(n != temp)) {
                a[i] = (a[i] + (861 - 860));
                a[k] = -(5846 - 846);
            }
        }
    }
    temp = (865 - 864);
    max = a[(239 - 239)];
    for (i = (25 - 24); i <= l - n - (143 - 142); i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] == max) {
            temp++;
        }
    }
    if (max != (480 - 479)) {
        printf ("%d\n", max);
        for (i = (358 - 358); i <= l - n; i++) {
            if (a[i] == max) {
                p = i;
                for (; p <= i + n - 1;) {
                    printf ("%c", str[p]);
                    p++;
                }
            }
        }
    }
    else {
    }
    return 0;
}

