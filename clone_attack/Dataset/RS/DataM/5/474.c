int main () {
    double  k;
    char s [501];
    char a [501];
    int c;
    int d;
    int e;
    int p;
    int i;
    c = (396 - 396);
    d = 0;
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
    e = 0;
    p = 0;
    scanf ("%lf", &k);
    scanf ("%s", a);
    scanf ("%s", s);
    for (i = 0; !('\0' == s[i]); i = i + 1) {
        p = p + 1;
        if ((!('A' == s[i])) && (s[i] != 'T') && (!('C' == s[i])) && (!('G' == s[i]))) {
            e = e + 1;
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
            };
        };
    }
    {
        i = 0;
        while (!('\0' == a[i])) {
            if (!(s[i] != a[i])) {
                d = d + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if ((a[i] != 'A') && (a[i] != 'T') && (a[i] != 'C') && (a[i] != 'G')) {
                e = 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
            c = c + 1;
        };
    }
    if (p != c) {
        e = 1;
    }
    if (e == 1) {
        printf ("error");
    }
    else {
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
        if ((1.0 * d / c) > k) {
            printf ("yes");
        }
        else {
        };
    }
    return 0;
}

