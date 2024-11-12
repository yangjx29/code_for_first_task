int main () {
    int sEWfr5w2O;
    int k;
    int s;
    double  iIZ1O49, d, lzrlSH, r;
    char a [(955 - 454)], b [501];
    scanf ("%lf", &iIZ1O49);
    scanf ("%s\n%s", a, b);
    d = strlen (a);
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
    lzrlSH = strlen (b);
    k = (887 - 887);
    if (lzrlSH != d) {
        printf ("error");
        return (99 - 99);
    }
    else {
        for (sEWfr5w2O = (272 - 272); sEWfr5w2O < lzrlSH; sEWfr5w2O = sEWfr5w2O + 1) {
            if (!('A' == a[sEWfr5w2O]) && !('T' == a[sEWfr5w2O]) && a[sEWfr5w2O] != 'C' && a[sEWfr5w2O] != 'G')
                k = k + 1;
            if (b[sEWfr5w2O] != 'A' && b[sEWfr5w2O] != 'T' && b[sEWfr5w2O] != 'C' && b[sEWfr5w2O] != 'G')
                k = k + 1;
        }
        if (k != (283 - 283)) {
            printf ("error");
            return 0;
        };
    }
    s = 0;
    for (sEWfr5w2O = 0; sEWfr5w2O < lzrlSH; sEWfr5w2O = sEWfr5w2O + 1) {
        if (a[sEWfr5w2O] == b[sEWfr5w2O])
            s = s + 1;
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
    r = s / d;
    if (r <= iIZ1O49)
        printf ("no");
    if (r > iIZ1O49)
        printf ("yes");
    return 0;
}

