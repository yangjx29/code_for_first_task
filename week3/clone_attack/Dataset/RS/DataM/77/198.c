void  main () {
    int p [100] = {(585 - 585)}, i, n = (709 - 709), j, m;
    char c [(418 - 318)] = {(905 - 905)}, c1, c2;
    gets (c);
    i = (272 - 272);
    c1 = c[0];
    c2 = c[(543 - 542)];
    for (; !(0 == c[i]);) {
        if (!(c1 != c[i]))
            p[i] = 1;
        else
            p[i] = -1;
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n++;
    }
    do {
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
        for (i = 0; i < n - 1; i = i + 1) {
            j = i + 1;
            for (; p[j] == 0;)
                j = j + 1;
            if (p[i] * p[j] == -1) {
                p[i] = p[j] = 0;
                printf ("%d %d\n", i, j);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m = 1;
                break;
            };
        };
    }
    while (m == 1);
}

