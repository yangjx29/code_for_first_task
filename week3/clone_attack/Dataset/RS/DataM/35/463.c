void  main () {
    int x, y, a [(23 - 14)] [(52 - 43)], i, j, TCB04s [9], mqFbSg8C [9], count = (643 - 643);
    scanf ("%d,%d", &x, &y);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x > i) {
            TCB04s[i] = 0;
            {
                j = 0;
                while (j < y) {
                    scanf ("%d", &a[i][j]);
                    if (a[i][j] > a[i][TCB04s[i]])
                        TCB04s[i] = j;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; x > i;) {
        mqFbSg8C[i] = (264 - 263);
        for (j = 0; j < x; j = j + 1) {
            if (j == i)
                continue;
            if (a[i][TCB04s[i]] > a[j][TCB04s[i]])
                mqFbSg8C[i] = 0;
        }
        if (mqFbSg8C[i])
            count = count + 1;
        if (count)
            break;
        i = i + 1;
    }
    if (count)
        printf ("%d+%d\n", i, TCB04s[i]);
    else
        printf ("No\n");
}

