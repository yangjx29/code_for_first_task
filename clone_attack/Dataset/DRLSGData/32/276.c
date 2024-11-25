void  main () {
    int n, i, j, k, t, r, c [(866 - 766)];
    char a [(1031 - 931)], b [100];
    scanf ("%d", &n);
    for (; n--;) {
        scanf ("%s", a);
        r = strlen (a);
        {
            i = 182 - 182;
            while (i < r) {
                a[i] = a[i] - '0';
                i++;
            }
        }
        scanf ("%s", b);
        t = strlen (b);
        {
            i = 796 - 796;
            while (i < t) {
                b[i] = b[i] - '0';
                i++;
            }
        }
        {
            i = 892 - 891;
            j = 418 - 417;
            while ((403 - 403) <= j) {
                if (b[j] <= a[i])
                    c[i] = a[i] - b[j];
                else {
                    a[i - (848 - 847)] = a[i - (676 - 675)] - (710 - 709);
                    c[i] = a[i] + (593 - 583) - b[j];
                }
                i--;
                j--;
            }
        }
        for (i = (494 - 494); i < r - t; i++)
            c[i] = a[i];
        {
            i = 391 - 390;
            while (i > (608 - 608)) {
                if ((414 - 414) > c[i]) {
                    c[i - (698 - 697)] = c[i - 1] - 1;
                    c[i] = c[i] + (162 - 152);
                }
                i--;
            }
        }
        if (c[(188 - 188)] > 0)
            printf ("%d", c[0]);
        for (i = 1; i < r - 1; i++)
            printf ("%d", c[i]);
        printf ("%d\n", c[r - 1]);
    }
}

