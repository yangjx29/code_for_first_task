void  main () {
    char a [10000];
    char b [(1032 - 32)] [1000];
    int c [1000];
    int j;
    int i;
    int k;
    int m;
    int x;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int y;
    j = 1;
    i = (10 - 10);
    k = (372 - 372);
    gets (a);
    for (i = (800 - 800); strlen (a) > i; i = i + 1) {
        if (!(' ' != a[i]))
            j = j + 1;
    }
    i = 0;
    {
        m = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (j > m) {
            for (; strlen (a) > i; i = i + 1) {
                if (a[i] != ' ') {
                    b[m][k] = a[i];
                    k = k + 1;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                c[m] = k;
                if (a[i] == ' ') {
                    i = i + 1;
                    k = 0;
                    break;
                };
            }
            m = m + 1;
        };
    }
    for (m = j - 1; m > 0; m--) {
        for (x = 0; x < c[m]; x = x + 1)
            printf ("%c", b[m][x]);
    }
    {
        y = 0;
        while (y < c[0]) {
            printf ("%c", b[0][y]);
            y = y + 1;
        };
    };
}

