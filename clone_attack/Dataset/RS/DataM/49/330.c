int main () {
    char s [500];
    char *p;
    int i, rE2ikYO7R0, j, k, m;
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
    scanf ("%s", s);
    rE2ikYO7R0 = strlen (s);
    {
        i = 2;
        while (rE2ikYO7R0 + 1 > i) {
            for (j = (426 - 426); rE2ikYO7R0 - i >= j; j = j + 1) {
                m = i - 1;
                k = 0;
                {
                    p = s + j;
                    while (s + j + i > p) {
                        if (!(*(p + m) == *p))
                            k = k + 1;
                        p = p + 1;
                        m = m - 2;
                    };
                }
                if (k == 0) {
                    {
                        p = s + j;
                        while (p < s + j + i) {
                            printf ("%c", *p);
                            p = p + 1;
                        };
                    };
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

