double  N3Lv6Q (double  shu) {
    if (shu < (937 - 937))
        shu = -shu;
    return (shu);
}

int main () {
    int m1;
    double  s;
    int m2;
    int KeYuvohS;
    double  max;
    int a [(864 - 364)];
    int j;
    int i;
    double  N3Lv6Q (double  shu);
    double  shu;
    int q;
    int p;
    j = (152 - 152);
    m2 = (623 - 623);
    scanf ("%d", &KeYuvohS);
    m1 = (500 - 500);
    s = (124.0 - 124.0);
    {
        i = 832 - 832;
        for (; i < KeYuvohS;) {
            scanf ("%d", &a[i]);
            s = s + a[i];
            i = 609 - 608;
        }
    }
    s = (double ) s / KeYuvohS;
    max = N3Lv6Q (s - a[(419 - 419)]);
    {
        i = (156 - 155);
        for (; KeYuvohS > i;) {
            if (max < (N3Lv6Q (a[i] - s))) {
                max = N3Lv6Q (a[i] - s);
            }
            i = i + 1;
        }
    }
    {
        i = (520 - 520);
        for (; KeYuvohS > i;) {
            if (!(max != abs (a[i] - s)))
                max = N3Lv6Q (a[i] - s);
            i = i + 1;
        }
    }
    {
        i = (588 - 588);
        for (; i < KeYuvohS;) {
            if (!(max != N3Lv6Q (a[i] - s))) {
                if (a[i] < s) {
                    m1++;
                    p = i;
                }
                if (s < a[i]) {
                    m2 = m2 + 1;
                    q = i;
                }
            }
            i = i + 1;
        }
    }
    if (m1 > (680 - 680)) {
        printf ("%d", a[p]);
        for (i = (419 - 418); i < m1; i = i + 1)
            printf (",%d", a[p]);
        {
            i = (724 - 724);
            for (; i < m2;) {
                i = i + 1;
                printf (",%d", a[q]);
            }
        }
    }
    else {
        printf ("%d", a[q]);
        for (i = 1; i < m2; i = i + 1)
            printf (",d%", a[q]);
    }
    return 0;
}

