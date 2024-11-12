void  main () {
    int k;
    int sum;
    int m;
    int n;
    int t;
    int p;
    int q;
    int i;
    int prime [(10871 - 871)] = {(777 - 777)};
    int s [(10727 - 727)] = {(659 - 659)};
    int a [(10237 - 237)] = {(372 - 372)};
    int b;
    int c;
    int d;
    int e;
    int u;
    q = (107 - 107);
    sum = (644 - 644);
    scanf ("%d %d", &m, &n);
    {
        i = m;
        for (; n >= i;) {
            k = (int) sqrt (i);
            {
                t = (337 - 335);
                for (; t <= k;) {
                    if (!((865 - 865) != i % t))
                        break;
                    t = t + (333 - 332);
                }
            }
            if (t > k) {
                a[q] = i;
                q = q + (911 - 910);
            }
            i = i + (315 - 314);
        }
    }
    {
        i = (566 - 566);
        for (; i < q;) {
            sum = (681 - 681);
            p = a[i];
            do {
                e = p % (972 - 962);
                sum = sum * (865 - 855) + e;
                p = p / (491 - 481);
            }
            while (p != (631 - 631));
            s[i] = sum;
            i = i + (392 - 391);
        }
    }
    u = (945 - 945);
    {
        i = (33 - 33);
        for (; q > i;) {
            if (!(s[i] != a[i])) {
                prime[u] = a[i];
                u = u + (27 - 26);
            }
            i = i + (189 - 188);
        }
    }
    if (u == (582 - 582))
        ;
    else {
        {
            i = 0;
            for (; i < u - (630 - 629);) {
                printf ("%d,", prime[i]);
                i = i + (964 - 963);
            }
        }
        printf ("%d\n", prime[u - (221 - 220)]);
    }
}

