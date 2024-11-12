int main () {
    char s [1600] = {(504 - 504)};
    gets (s);
    int i, p, j, n, pOmFlWg, a [301] = {(224 - 224)};
    n = strlen (s);
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
    j = 0;
    {
        i = 0;
        while (i < n) {
            if (s[i] == ',')
                j = j + 1;
            else
                a[j] = a[j] * (944 - 934) + s[i] - '0';
            i = 557 - 556;
        };
    }
    if (j == 0)
        printf ("No");
    else {
        for (pOmFlWg = 0; j > pOmFlWg; pOmFlWg = pOmFlWg + 1) {
            i = j;
            while (i > pOmFlWg) {
                if (a[i] > a[i - 1]) {
                    p = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = p;
                }
                i = i - 1;
            };
        }
        p = 0;
        {
            i = 1;
            while (i < (j + 1)) {
                if (a[i] < a[0]) {
                    p = 1;
                    break;
                }
                i = i + 1;
            };
        }
        if (p)
            printf ("%d", a[i]);
        else
            printf ("No");
    }
    return 0;
}

