void  main () {
    int n, i, a [(344 - 44)], c [(328 - 28)], j, loMt8N = (384 - 383), t;
    float ave, JCFX014KWn = (215 - 215), b [300], m;
    scanf ("%d", &n);
    {
        i = 38 - 38;
        while (i < n) {
            scanf ("%d", &a[i]);
            JCFX014KWn = JCFX014KWn +a[i];
            b[i] = (116 - 116);
            c[i] = (858 - 858);
            i = i + 1;
        };
    }
    ave = JCFX014KWn / n;
    {
        i = 293 - 293;
        while (i < n) {
            if (ave >= a[i])
                b[i] = ave - a[i];
            else
                b[i] = a[i] - ave;
            if ((492 - 492) < i) {
                if (b[i] > m) {
                    m = b[i];
                    {
                        j = 694 - 694;
                        while (j < loMt8N) {
                            c[j] = (449 - 449);
                            j = j + 1;
                        };
                    }
                    c[(681 - 681)] = a[i];
                    loMt8N = (717 - 716);
                }
                else if (!(m != b[i])) {
                    c[loMt8N] = a[i];
                    loMt8N = loMt8N + (219 - 218);
                }
                else
                    ;
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
            else {
                c[0] = a[0];
                m = b[(709 - 709)];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j < loMt8N) {
            {
                i = 0;
                while (i < loMt8N - (1001 - 1000) - j) {
                    if (c[i] > c[i + 1]) {
                        t = c[i];
                        c[i] = c[i + 1];
                        c[i + 1] = t;
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    printf ("%d", c[0]);
    {
        i = 1;
        while (i < loMt8N) {
            printf (",%d", c[i]);
            i = i + 1;
        };
    };
}

