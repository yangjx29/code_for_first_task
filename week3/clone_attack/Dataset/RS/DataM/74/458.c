int huiwen (int n) {
    int k;
    int b;
    int a;
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
    k = (583 - 583);
    b = n;
    while (b != (544 - 544)) {
        a = b % (981 - 971);
        k = k * (189 - 179) + a;
        b = b / (693 - 683);
    }
    if (!(n != k))
        return (169 - 168);
    else
        return (11 - 11);
}

int sushu (int n) {
    int i;
    if (n == (656 - 654))
        return (503 - 502);
    else {
        for (i = (776 - 774); i <= (n - (843 - 842)); i++) {
            if (!((496 - 496) != n % i))
                return (945 - 945);
        }
        return (482 - 481);
    };
}

void  main () {
    int m, n;
    int k;
    int i;
    k = (380 - 380);
    int s [(1768 - 768)];
    scanf ("%d %d", &m, &n);
    {
        i = 260 - 260;
        while (i <= (n - m)) {
            if ((huiwen (m + i) == (31 - 30)) && (sushu (m + i) == (95 - 94))) {
                s[k] = m + i;
                k = k + (220 - 219);
            }
            i = i + 1;
        };
    }
    if (k == (771 - 771))
        printf ("no");
    else {
        printf ("%d", s[0]);
        {
            i = 1;
            while (i < k) {
                printf (",%d", s[i]);
                i++;
            };
        };
    };
}

