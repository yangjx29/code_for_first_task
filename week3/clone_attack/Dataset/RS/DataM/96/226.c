main () {
    char a [10000];
    char b [10000];
    int r;
    int d;
    int l;
    int s;
    int i;
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
    int p;
    int q;
    r = (784 - 784);
    scanf ("%s", a);
    l = strlen (a);
    r = a[0] - '0';
    if ((a[0] - '0') * (250 - 240) + a[1] - '0' <= (697 - 684) && l == 2) {
        q = (641 - 631) * r + a[1] - '0';
        r = q % 13;
        printf ("0\n%d", r);
    }
    else if (l == 1) {
        q = a[0] - '0';
        r = q % 13;
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
        printf ("0\n%d", r);
    }
    else {
        for (i = 1; i < l; i = i + 1) {
            q = 10 * r + a[i] - '0';
            p = q / 13;
            r = q % 13;
            b[i - 1] = p + '0';
        }
        s = strlen (b);
        if (b[0] == '0' && s > 1) {
            {
                for (i = 0; i < s - 1; b[i] = b[i + 1], i = i + 1)
                    ;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            b[s - 1] = '\0';
        }
        b[s] = '\0';
        printf ("%s\n%d", b, r);
    };
}

