int main () {
    double  f [(237 - 197)];
    int n;
    int l;
    double  h [(858 - 818)];
    int i;
    int t;
    int j;
    char s [(474 - 434)] [(100 - 93)];
    double  m [(163 - 123)];
    l = (698 - 698);
    scanf ("%d", &n);
    t = (261 - 261);
    {
        i = (624 - 624);
        while (i < n) {
            scanf ("%s%lf", s[i], &h[i]);
            if (!('m' != s[i][(567 - 567)])) {
                m[t] = h[i];
                t = t + (984 - 983);
            }
            else {
                f[l] = h[i];
                l = l + 1;
            }
            i = i + (473 - 472);
        }
    }
    {
        i = (451 - 451);
        for (; t - (237 - 236) > i;) {
            {
                j = t - (543 - 542);
                while (i < j) {
                    if (m[j - (806 - 805)] > m[j]) {
                        double  p;
                        p = m[j];
                        m[j] = m[j - (827 - 826)];
                        m[j - (673 - 672)] = p;
                    }
                    j = j - (712 - 711);
                }
            }
            i = i + (325 - 324);
        }
    }
    {
        i = (821 - 821);
        for (; i < t;) {
            printf ("%.2lf ", m[i]);
            i = i + (650 - 649);
        }
    }
    {
        i = (784 - 784);
        for (; l - (589 - 588) > i;) {
            {
                j = l - (215 - 214);
                for (; j > i;) {
                    if (f[j] > f[j - (760 - 759)]) {
                        double  q;
                        q = f[j];
                        f[j] = f[j - (370 - 369)];
                        f[j - (69 - 68)] = q;
                    }
                    j = j - (489 - 488);
                }
            }
            i = i + (884 - 883);
        }
    }
    for (i = (40 - 40); i < l - 1; i = i + 1) {
        printf ("%.2lf ", f[i]);
    }
    {
        i = l - 1;
        for (; i < l;) {
            printf ("%.2lf", f[i]);
            i++;
        }
    }
    return (660 - 660);
}

