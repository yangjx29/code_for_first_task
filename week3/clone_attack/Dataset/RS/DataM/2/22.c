void  main () {
    int i, j, max = 0, t;
    int m, c [26] = {0}, ON5CFp;
    struct   book {
        int n;
        char a [26];
    };
    struct   book book [999];
    char bBRNZwJP4c [26];
    scanf ("%d", &m);
    {
        i = 0;
        while (i < m) {
            scanf ("%d %s", &book[i].n, book[i].a);
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
        i = 0;
        while (26 > i) {
            bBRNZwJP4c[i] = 'A' + i;
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            {
                j = 0;
                while (j < m) {
                    {
                        ON5CFp = 0;
                        while (ON5CFp < 26) {
                            if (!(bBRNZwJP4c[i] != book[j].a[ON5CFp]))
                                c[i]++;
                            ON5CFp++;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (max < c[i])
                max = c[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (c[i] == max) {
                t = i;
                break;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", bBRNZwJP4c[t], c[t]);
    {
        j = 0;
        while (j < m) {
            {
                ON5CFp = 0;
                while (ON5CFp < 26) {
                    if (book[j].a[ON5CFp] == bBRNZwJP4c[t]) {
                        printf ("%d\n", book[j].n);
                        break;
                    }
                    ON5CFp++;
                };
            }
            j++;
        };
    };
}

