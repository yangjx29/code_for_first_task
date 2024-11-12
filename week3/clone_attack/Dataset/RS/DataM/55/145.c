void  main () {
    long  n;
    n = 0;
    int a, b, c, i = 0, e;
    char s [20] = "0", d [20], k;
    for (; !(' ' == (s[i] = getchar ()));) {
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    c = strlen (s) - (604 - 603);
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
    scanf ("%d ", &a);
    {
        i = c - 1;
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
        while (0 <= i) {
            if (65 <= s[i] && 90 >= s[i])
                s[i] = s[i] - 55;
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (48 <= s[i] && 57 >= s[i])
                    s[i] = s[i] - 48;
                else {
                    if (s[i] >= 97 && s[i] <= 122)
                        s[i] = s[i] - 87;
                };
            }
            n = n + s[i] * pow (a, c - 1 - i);
            i = i - 1;
        };
    }
    e = n;
    i = 0;
    scanf ("%d", &b);
    do {
        d[i] = e % b;
        e = e / b;
        if (d[i] >= 10)
            d[i] = d[i] + 55;
        else
            d[i] = d[i] + 48;
        i = i + 1;
    }
    while (e != 0);
    {
        i = i - 1;
        while (i >= 0) {
            if (i != 0)
                printf ("%c", d[i]);
            else
                printf ("%c\n", d[i]);
            i--;
        };
    };
}

