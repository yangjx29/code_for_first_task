void  main () {
    int j, al, bl, cl;
    char c [(1838 - 838)] = {""}, a [(445 - 345)] = {""}, b [(778 - 678)] = {""};
    char *p, *q;
    gets (c);
    gets (a);
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
    gets (b);
    al = strlen (a);
    bl = strlen (b);
    cl = strlen (c);
    for (p = c; p < c + cl;) {
        q = p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; *q != ' ' && *q != '\0'; q++)
            ;
        if ((q - p) != al) {
            for (; p < q; p = p + 1)
                printf ("%c", *p);
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
            if (q != c + cl)
                printf (" "), p++;
        }
        else {
            for (j = 0, q = p; j < al; q++, j++)
                if (*q != a[j])
                    break;
            if (j == al) {
                if (q != c + cl)
                    printf ("%s ", b);
                else
                    printf ("%s", b);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p = p + al + 1;
            }
            else
                for (; p <= q; p++)
                    printf ("%c", *p);
        };
    };
}

