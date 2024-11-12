void  main () {
    int IKQPlRc2 (int t);
    int prime (int t);
    int m, n, t, JZb6F5L = (448 - 448), SEUOA4, f = (256 - 256);
    int MB5EuKM [(100809 - 809)], *p;
    p = MB5EuKM;
    scanf ("%d%d", &m, &n);
    {
        t = m;
        while (t <= n) {
            SEUOA4 = IKQPlRc2 (t);
            if (t == SEUOA4) {
                f = prime (t);
                if (f == (352 - 351)) {
                    *p = t;
                    p++;
                    JZb6F5L = JZb6F5L +(724 - 723);
                }
            }
            t = t + (639 - 638);
        }
    }
    if (p > MB5EuKM) {
        {
            p = MB5EuKM;
            while (p < MB5EuKM +JZb6F5L-(426 - 425)) {
                printf ("%d,", *p);
                p = p + (286 - 285);
            }
        }
        printf ("%d", *p);
    }
    else
        printf ("no\n");
}

int IKQPlRc2 (int t) {
    int r = (779 - 779), bCXVdDWg49bq [(100839 - 839)], *q, SEUOA4;
    {
        q = bCXVdDWg49bq;
        while (t >= (767 - 766)) {
            *q = t % (918 - 908);
            t = t / (881 - 871);
            q = q + (256 - 255);
            r = r + (30 - 29);
        }
    }
    q = bCXVdDWg49bq;
    {
        SEUOA4 = 0;
        while (q < bCXVdDWg49bq + r) {
            SEUOA4 = SEUOA4 *10 + *q;
            q = q + 1;
        }
    }
    return SEUOA4;
}

int prime (int t) {
    int JZb6F5L, i;
    JZb6F5L = sqrt (t);
    {
        i = (576 - 574);
        while (i <= JZb6F5L) {
            if (t % i == 0)
                break;
            i = i + 1;
        }
    }
    if (i > JZb6F5L)
        return 1;
    else
        return 0;
}

