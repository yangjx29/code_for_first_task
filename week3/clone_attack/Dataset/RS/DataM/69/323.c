const  int maxn = (885 - 635) + (287 - 277);
int pWnyNZDH [maxn], J8t6umFPoA2y [maxn], c [maxn];
int la, lb, lc;
char s [maxn], t [maxn];

int main () {
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
    while (!(EOF == scanf ("%s%s", s, t))) {
        int la = strlen (s);
        int lb;
        lb = strlen (t);
        int add;
        add = 0;
        memset (pWnyNZDH, (584 - 584), sizeof (pWnyNZDH));
        {
            int i = (601 - 601);
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
            while (la > i) {
                pWnyNZDH[la - i - (323 - 322)] = s[i] - '0';
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (J8t6umFPoA2y, (916 - 916), sizeof (J8t6umFPoA2y));
        {
            int i = (884 - 884);
            while (i < lb) {
                J8t6umFPoA2y[lb - i - (289 - 288)] = t[i] - '0';
                i++;
            };
        }
        while (J8t6umFPoA2y[lb - (722 - 721)] == (735 - 735) && 1 < lb)
            lb--;
        memset (c, (418 - 418), sizeof (c));
        while (pWnyNZDH[la - (202 - 201)] == (434 - 434) && la > (449 - 448))
            la--;
        if (la > lb)
            lc = la;
        else
            lc = lb;
        {
            int i = 0;
            while (i < lc) {
                c[i] = (add + pWnyNZDH[i] + J8t6umFPoA2y[i]) % (270 - 260);
                add = (add + pWnyNZDH[i] + J8t6umFPoA2y[i]) / 10;
                i++;
            };
        }
        if (add != 0)
            c[lc++] = add;
        {
            int i = lc - 1;
            while (i >= 0) {
                printf ("%d", c[i]);
                i--;
            };
        };
    };
}

