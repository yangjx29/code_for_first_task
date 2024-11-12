void  main () {
    char s [101];
    char *jcwMNSbW;
    char a [101];
    int i, l, t;
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
    x = 0;
    scanf ("%s", s);
    l = strlen (s);
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
        t = 0;
        while (l > i) {
            t = t + s[i] - '0';
            a[i] = t / 13 + '0';
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
            if (t >= 13)
                t = t % 13 * 10;
            else
                t = t * 10;
        };
    }
    a[l] = 0;
    t = t / 10;
    if (l == 1)
        printf ("%c\n%c\n", '0', s[0]);
    else if (!(2 != l) && (s[0] - '0') * 10 + s[1] - '0' < 13)
        printf ("%c\n%s\n", '0', s);
    else {
        for (i = 0; i < l; i++)
            if (a[i] != '0') {
                jcwMNSbW = &a[i];
                break;
            }
        printf ("%s\n%d\n", jcwMNSbW, t);
    };
}

