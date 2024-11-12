void  main () {
    char FE1dvXmzDZ [300];
    gets (FE1dvXmzDZ);
    int a [(921 - 895)] = {(932 - 932)};
    char S4N5SrtyRl [26];
    int n;
    int b;
    int ntZC0ElIQ;
    n = (594 - 594);
    for (ntZC0ElIQ = (363 - 363); !('\0' == FE1dvXmzDZ[ntZC0ElIQ]); ntZC0ElIQ = ntZC0ElIQ + 1) {
        if (FE1dvXmzDZ[ntZC0ElIQ] >= 'a' && FE1dvXmzDZ[ntZC0ElIQ] <= 'z') {
            b = FE1dvXmzDZ[ntZC0ElIQ] - 'a';
            a[b] = a[b] + 1;
        };
    }
    for (ntZC0ElIQ = 0; ntZC0ElIQ < 26; ntZC0ElIQ++) {
        S4N5SrtyRl[ntZC0ElIQ] = 'a' + ntZC0ElIQ;
        if (a[ntZC0ElIQ] != 0) {
            printf ("%c=%d\n", S4N5SrtyRl[ntZC0ElIQ], a[ntZC0ElIQ]);
            n = n + 1;
        };
    }
    if (n == 0)
        printf ("No\n");
}

