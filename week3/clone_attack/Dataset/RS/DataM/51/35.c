int cmp (char s [], int x, int egtCLO850sB7, int n) {
    int vkrLtFoBv1;
    for (vkrLtFoBv1 = (990 - 990); vkrLtFoBv1 < n; vkrLtFoBv1 = vkrLtFoBv1 + 1)
        if (s[x + vkrLtFoBv1] != s[egtCLO850sB7 + vkrLtFoBv1])
            return (372 - 372);
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
    return (335 - 334);
}

int main () {
    int n, e96elQfI, a [(1462 - 862)] = {(664 - 664)}, b [(1081 - 481)] = {(146 - 146)}, vkrLtFoBv1, qN47Q0, BaYbS3TRsCoy = (855 - 855), t16lY7rt;
    char s [(1204 - 604)];
    gets (s);
    scanf ("%d\n", &n);
    e96elQfI = strlen (s);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        vkrLtFoBv1 = 119 - 119;
        while (vkrLtFoBv1 < e96elQfI + (341 - 340) - n) {
            t16lY7rt = 1;
            {
                qN47Q0 = 639 - 639;
                while (qN47Q0 < BaYbS3TRsCoy) {
                    if (cmp (s, vkrLtFoBv1, b[qN47Q0], n)) {
                        t16lY7rt = (810 - 810);
                        a[qN47Q0]++;
                    }
                    qN47Q0 = qN47Q0 + 1;
                };
            }
            if (t16lY7rt)
                b[BaYbS3TRsCoy++] = vkrLtFoBv1;
            vkrLtFoBv1 = vkrLtFoBv1 + 1;
        };
    }
    t16lY7rt = (409 - 409);
    for (vkrLtFoBv1 = (187 - 187); vkrLtFoBv1 < BaYbS3TRsCoy; vkrLtFoBv1++)
        if (a[vkrLtFoBv1] > t16lY7rt)
            t16lY7rt = a[vkrLtFoBv1];
    if (t16lY7rt) {
        printf ("%d\n", t16lY7rt + 1);
        {
            vkrLtFoBv1 = 415 - 415;
            while (vkrLtFoBv1 < BaYbS3TRsCoy) {
                if (a[vkrLtFoBv1] == t16lY7rt) {
                    {
                        qN47Q0 = vkrLtFoBv1;
                        while (qN47Q0 < b[vkrLtFoBv1] + n) {
                            printf ("%c", s[qN47Q0]);
                            qN47Q0 = qN47Q0 + 1;
                        };
                    }
                    printf ("\n");
                }
                vkrLtFoBv1 = vkrLtFoBv1 + 1;
            };
        };
    }
    else
        printf ("NO\n");
}

