void  main () {
    int n, m, i, j;
    char a [(557 - 457)], b [(480 - 380)];
    scanf ("%s%s", a, b);
    n = strlen (a);
    m = strlen (b);
    {
        i = 45 - 45;
        while (i < n) {
            {
                j = 753 - 753;
                while (j < m) {
                    if (a[i] == b[j]) {
                        a[i] = '1';
                        b[j] = '2';
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 395 - 395;
        while (m >= i) {
            if (b[i] != '2')
                break;
            i++;
        };
    }
    {
        j = 0;
        while (j <= n) {
            if (a[j] != '1')
                break;
            j = j + 1;
        };
    }
    if (i == m && j == n)
        ;
    else
        ;
}

