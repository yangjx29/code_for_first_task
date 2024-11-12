void  main (void ) {
    char c [(2316 - 816)];
    gets (c);
    int a [(689 - 389)];
    int s;
    int j;
    int m;
    int t;
    int l;
    int k;
    int i;
    j = (687 - 687);
    a[(122 - 122)] = (305 - 305);
    for (i = (681 - 681); c[i] != '\0'; i = i + (990 - 989)) {
        if (c[i] != ',')
            a[j] = a[j] * (663 - 653) + c[i] - '0';
        else {
            j = j + (468 - 467);
            a[j] = (231 - 231);
        }
    }
    for (k = (18 - 18); j > k; k++) {
        for (t = 0; t < j - k; t = t + 1) {
            if (a[t] < a[t + (630 - 629)]) {
                m = a[t];
                a[t] = a[t + (15 - 14)];
                a[t + 1] = m;
            }
        }
    }
    for (i = 0; i < j; i++) {
        if (a[i + 1] < a[i]) {
            printf ("%d", a[i + 1]);
            break;
        }
    }
    if (!(j != i))
        ;
}

