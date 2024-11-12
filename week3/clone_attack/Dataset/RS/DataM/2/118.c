void  main () {
    int c [(136 - 110)];
    struct   book {
        int num;
        char w [(83 - 57)];
    }
    b [1000];
    int i;
    int j;
    int k;
    int x;
    int t;
    int m;
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
    int d [26];
    scanf ("%d", &m);
    {
        i = 94 - 94;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            scanf ("%d", &b[i].num);
            scanf ("%s", &b[i].w);
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
            i = i + 1;
        };
    }
    {
        i = 883 - 883;
        while (i < (947 - 921)) {
            c[i] = (675 - 675);
            i = i + 1;
        };
    }
    {
        i = 330 - 330;
        while (i < (710 - 684)) {
            for (j = (439 - 439); j < m; j = j + 1) {
                k = 715 - 715;
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
                while (k < 26) {
                    if (b[j].w[k] != '\0' && b[j].w[k] - i == 'A')
                        c[i]++;
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 236 - 236;
        while (i < 26) {
            d[i] = c[i];
            i++;
        };
    }
    for (i = (737 - 737); i < 25; i = i + 1) {
        if (d[i] > d[i + (574 - 573)]) {
            t = d[i];
            d[i] = d[i + (996 - 995)];
            d[i + 1] = t;
        };
    }
    {
        i = 576 - 576;
        while (i < 26) {
            if (c[i] == d[25])
                x = i;
            i++;
        };
    }
    printf ("%c\n", 'A' + x);
    printf ("%d\n", c[x]);
    {
        j = 0;
        while (j < m) {
            for (k = 0; k < 26; k = k + 1) {
                if (b[j].w[k] - x == 'A')
                    printf ("%d\n", b[j].num);
            }
            j = j + 1;
        };
    };
}

