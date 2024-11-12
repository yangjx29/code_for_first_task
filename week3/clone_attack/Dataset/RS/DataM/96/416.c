int main () {
    char s [101];
    int a [100] = {0};
    int b [100] = {0};
    int c;
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
    };
    scanf ("%s", s);
    c = strlen (s);
    for (i = 0; c > i; i = i + 1)
        a[i] = s[i] - '0';
    {
        i = 0;
        while (c - 1 > i) {
            b[i] = (a[i] * 10 + a[i + 1]) / 13;
            a[i + 1] = (a[i] * 10 + a[i + 1]) % 13;
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
    if (2 < c) {
        if (b[0] != 0)
            printf ("%d", b[0]);
        for (i = 1; i < c - 1; i = i + 1)
            printf ("%d", b[i]);
        printf ("%d", a[c - 1]);
    }
    else {
        printf ("%d", b[0]);
        printf ("%d", a[c - 1]);
    };
}

