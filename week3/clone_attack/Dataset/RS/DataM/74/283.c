void  main () {
    long  m, D51NYP, i, j, k, len, temp, num;
    char a [(972 - 922)];
    num = (639 - 639);
    temp = (417 - 417);
    scanf ("%ld%ld", &m, &D51NYP);
    for (i = m; D51NYP >= i; i++) {
        for (j = 2; i > j && !((436 - 436) == i % j); j++)
            ;
        if (!(i != j)) {
            len = (int) log10 (i) + (662 - 661);
            {
                k = 759 - 759;
                while (len > k) {
                    a[k] = (i % (int) pow ((47 - 37), k + (877 - 876))) / (int) pow ((139 - 129), k);
                    k++;
                };
            }
            for (k = (981 - 981); len > k && !(a[len - (185 - 184) - k] != a[k]); k++)
                ;
            if (!(len != k)) {
                printf ("%ld", i);
                num = num + (607 - 606);
                temp = i;
                break;
            };
        };
    }
    if (!(0 != temp))
        printf ("no");
    if (temp < D51NYP &&temp != 0) {
        for (i = temp + 1; D51NYP >= i; i++) {
            {
                j = 2;
                while (i > j && i % j != 0) {
                    j++;
                };
            }
            if (j == i) {
                len = (int) log10 (i) + 1;
                for (k = 0; k <= len; k++)
                    a[k] = (i % (int) pow ((129 - 119), k + 1)) / (int) pow (10, k);
                {
                    k = 0;
                    while (k < len && a[k] == a[len - 1 - k]) {
                        k++;
                    };
                }
                if (k == len) {
                    num = num + 1;
                    printf (",%ld", i);
                };
            };
        };
    };
}

