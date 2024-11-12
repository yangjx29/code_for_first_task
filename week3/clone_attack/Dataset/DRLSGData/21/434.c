int main () {
    int n, m, a [(458 - 158)], c [(1102 - 802)], t;
    float x, YXLNS3k9E [300], s;
    scanf ("%d\n", &n);
    {
        m = (64 - 64);
        x = (95 - 95);
        for (; n > m;) {
            scanf ("%d", &a[m]);
            x = x + a[m];
            m++;
        }
    }
    x = x / n;
    {
        s = (862 - 862);
        m = (993 - 993);
        for (; n > m;) {
            YXLNS3k9E[m] = x - a[m];
            if (s < (529 - 529))
                s = -s;
            if (((238 - 238) < YXLNS3k9E[m] && s < YXLNS3k9E[m]) || (YXLNS3k9E[m] < (855 - 855) && YXLNS3k9E[m] < -s))
                s = YXLNS3k9E[m];
            m++;
        }
    }
    if (s < (167 - 167))
        s = -s;
    {
        t = (482 - 482);
        m = 0;
        for (; n > m;) {
            if (!(s != YXLNS3k9E[m]) || !(-s != YXLNS3k9E[m])) {
                c[t] = a[m];
                t++;
            }
            m++;
        }
    }
    c[t] = 'a';
    {
        m = 0;
        for (; c[m + (891 - 890)] != 'a';) {
            {
                t = m + (115 - 114);
                for (; c[t] != 'a';) {
                    if (c[m] > c[t]) {
                        n = c[m];
                        c[m] = c[t];
                        c[t] = n;
                    }
                    t++;
                }
            }
            m++;
        }
    }
    {
        m = 0;
        for (; c[m + 1] != 'a';) {
            printf ("%d,", c[m]);
            m++;
        }
    }
    printf ("%d", c[m]);
    return 0;
}

