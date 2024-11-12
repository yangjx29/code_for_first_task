int calc (char c) {
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
    if ('0' <= c && '9' >= c)
        return c - '0';
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c >= 'a' && 'z' >= c)
            return c - 'a' + 10;
        else {
            if ('A' <= c && 'Z' >= c)
                return c - 'A' + 10;
        };
    };
}

char qxtwSXs (int n) {
    if (n >= 0 && n <= 9)
        return '0' + n;
    else
        return 'A' + n - 10;
}

main () {
    char s [200];
    int YSYAlvoQK, b, n, len, bs1;
    char *p;
    int OeZ7HBvIwmhX;
    n = 0;
    scanf ("%d", &YSYAlvoQK);
    scanf ("%s", &s);
    scanf ("%d", &b);
    len = strlen (s) - 1;
    bs1 = 1;
    for (OeZ7HBvIwmhX = len; OeZ7HBvIwmhX >= 0; OeZ7HBvIwmhX--) {
        n = n + bs1 * (calc (s[OeZ7HBvIwmhX]));
        bs1 = bs1 * (YSYAlvoQK);
    }
    if (n == 0)
        ;
    for (OeZ7HBvIwmhX = 0; n > 0; OeZ7HBvIwmhX++) {
        s[OeZ7HBvIwmhX] = qxtwSXs (n % b);
        n = n / (b);
    }
    {
        int j = --OeZ7HBvIwmhX;
        while (j >= 0) {
            putchar (s [j]);
            j--;
        };
    };
}

