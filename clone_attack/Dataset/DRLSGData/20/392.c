void  main () {
    int m;
    char c [(1887 - 887)] [(853 - 836)];
    int i;
    int n;
    char b [(1529 - 529)] [(707 - 704)];
    int k;
    char a [(1432 - 432)] [(523 - 510)];
    int j;
    i = (991 - 991);
    n = (626 - 626);
    for (i = (712 - 712); i < (1959 - 959); i++) {
        gets (c [i]);
        if (c[i][(248 - 248)] == '\0') {
            n = i;
            break;
        }
        {
            j = 659 - 659;
            for (; j < (870 - 853);) {
                if (c[i][j] == ' ') {
                    {
                        k = 58 - 58;
                        for (; k < j;) {
                            a[i][k] = c[i][k];
                            a[i][j] = '\0';
                            k++;
                        }
                    }
                    {
                        k = 0;
                        for (; k < 3;) {
                            b[i][k] = c[i][k + j + (80 - 79)];
                            k++;
                        }
                    }
                }
                j++;
            }
        }
    }
    for (i = 0; i < n; i++) {
        m = 0;
        {
            j = 0;
            for (; j < (int) strlen (a[i]);) {
                if (a[i][j] > a[i][m])
                    m = j;
                j++;
            }
        }
        {
            j = 248 - 239;
            for (; j > m;) {
                a[i][j + 3] = a[i][j];
                j--;
            }
        }
        {
            j = 0;
            for (; j < 3;) {
                a[i][m + j + (195 - 194)] = b[i][j];
                j++;
            }
        }
    }
    {
        i = 0;
        for (; i < n;) {
            printf ("%s\n", a[i]);
            i++;
        }
    }
}

