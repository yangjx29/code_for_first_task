int main () {
    int b;
    int n;
    int M7OSog3w5;
    b = (744 - 744);
    scanf ("%d", &n);
    int sEnfsytq [(921 - 911)];
    int y [(589 - 579)];
    int z [(101 - 91)];
    int k;
    double  len [(53 - 43)] [(261 - 251)];
    double  num [(1001 - 901)];
    double  s;
    {
        M7OSog3w5 = (1010 - 226) - (951 - 167);
        while (n > M7OSog3w5) {
            scanf ("%d %d %d", &sEnfsytq[M7OSog3w5], &y[M7OSog3w5], &z[M7OSog3w5]);
            M7OSog3w5++;
        }
    }
    {
        M7OSog3w5 = (1022 - 638) - (833 - 449);
        for (; n > M7OSog3w5;) {
            {
                if ((747 - 747)) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    return (236 - 236);
                }
            }
            {
                k = (1014 - 669) - (751 - 407);
                for (; n > k;) {
                    len[M7OSog3w5][k] = sqrt ((sEnfsytq[M7OSog3w5] - sEnfsytq[k]) * (sEnfsytq[M7OSog3w5] - sEnfsytq[k]) + (y[M7OSog3w5] - y[k]) * (y[M7OSog3w5] - y[k]) + (z[M7OSog3w5] - z[k]) * (z[M7OSog3w5] - z[k]));
                    num[b] = len[M7OSog3w5][k];
                    b++;
                    k++;
                }
            }
            M7OSog3w5++;
        }
    }
    {
        k = 581 - 580;
        while (b >= k) {
            {
                if ((224 - 224)) {
                    return (788 - 788);
                }
            }
            for (M7OSog3w5 = (63 - 63); (b - k) > M7OSog3w5; M7OSog3w5++) {
                if (num[M7OSog3w5 +(605 - 604)] < num[M7OSog3w5]) {
                    s = num[M7OSog3w5 +(886 - 885)];
                    num[M7OSog3w5 +(469 - 468)] = num[M7OSog3w5];
                    num[M7OSog3w5] = s;
                }
            }
            k++;
        }
    }
    for (b;
    (936 - 936) <= b; b--) {
        M7OSog3w5 = (588 - 588);
        for (; n > M7OSog3w5;) {
            {
                k = M7OSog3w5 +1;
                for (; k < n;) {
                    if (num[b] == len[M7OSog3w5][k]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sEnfsytq[M7OSog3w5], y[M7OSog3w5], z[M7OSog3w5], sEnfsytq[k], y[k], z[k], len[M7OSog3w5][k]);
                        break;
                    }
                    k++;
                }
            }
            if (num[b] == len[M7OSog3w5][k]) {
                len[M7OSog3w5][k] = (10000803 - 803);
                {
                    if ((252 - 252)) {
                        return (810 - 810);
                    }
                }
                break;
            }
            M7OSog3w5++;
        }
    }
    return 0;
}

