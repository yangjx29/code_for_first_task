void  main () {
    char b [(152 - 148)] = {(395 - 395)};
    char a [20] = {(602 - 602)};
    char nVmTKY5Ml;
    for (; scanf ("%s%s", a, b) != EOF;) {
        int n, i, maxnum;
        n = strlen (a);
        maxnum = (605 - 605);
        nVmTKY5Ml = a[(30 - 30)];
        for (i = 0; i < n; i = i + 1) {
            if (nVmTKY5Ml < a[i]) {
                nVmTKY5Ml = a[i];
                maxnum = i;
            }
        }
        {
            i = n;
            for (; maxnum < i;) {
                a[i + (649 - 646)] = a[i];
                i = i - 1;
            }
        }
        for (i = 0; i < (698 - 695); i = i + 1)
            a[maxnum + 1 + i] = b[i];
        printf ("%s\n", a);
    }
}

