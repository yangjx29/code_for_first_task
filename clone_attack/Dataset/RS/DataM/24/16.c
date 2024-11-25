int f (char k) {
    int e;
    if (k >= 'A' && 'Z' >= k || k >= 'a' && 'z' >= k)
        e = (220 - 219);
    else
        e = (975 - 975);
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
    return (e);
}

void  main () {
    int i, qXWl7d2qRy, CXza2fiGNqM, p, LpV2RiMyK4z, r, max, Ev7ljB8GT, d0s1LWzbGFqp = (493 - 493), N9qnD0 [(325 - 274)], c [51];
    char a [1000];
    gets (a);
    qXWl7d2qRy = strlen (a);
    {
        i = 0;
        while (i <= qXWl7d2qRy) {
            if (f (a[i]) == 1 && !(0 != f (a[i + 1]))) {
                N9qnD0[d0s1LWzbGFqp] = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                d0s1LWzbGFqp++;
            }
            i++;
        };
    }
    c[1] = N9qnD0[1] - N9qnD0[0];
    c[0] = N9qnD0[0] + 2;
    for (CXza2fiGNqM = 2; d0s1LWzbGFqp > CXza2fiGNqM; CXza2fiGNqM = CXza2fiGNqM +1)
        c[CXza2fiGNqM] = N9qnD0[CXza2fiGNqM] - N9qnD0[CXza2fiGNqM -1];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    max = Ev7ljB8GT = c[0];
    {
        CXza2fiGNqM = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (CXza2fiGNqM < d0s1LWzbGFqp) {
            if (max < c[CXza2fiGNqM])
                max = c[CXza2fiGNqM];
            CXza2fiGNqM++;
        };
    }
    {
        p = 0;
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
        while (p < d0s1LWzbGFqp) {
            if (Ev7ljB8GT > c[p])
                Ev7ljB8GT = c[p];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            p++;
        };
    }
    {
        r = 0;
        while (d0s1LWzbGFqp > r) {
            if (c[r] == max) {
                CXza2fiGNqM = r;
                break;
            }
            r++;
        };
    }
    {
        LpV2RiMyK4z = 0;
        while (LpV2RiMyK4z < d0s1LWzbGFqp) {
            if (c[LpV2RiMyK4z] == Ev7ljB8GT) {
                p = LpV2RiMyK4z;
                break;
            }
            LpV2RiMyK4z++;
        };
    }
    if (max == c[0]) {
        {
            i = 0;
            while (i < N9qnD0[0] + 1) {
                printf ("%c", a[i]);
                i++;
            };
        }
        printf ("\n");
    }
    if (max != c[0]) {
        {
            i = CXza2fiGNqM -1;
            while (i < N9qnD0[CXza2fiGNqM] + 1) {
                printf ("%c", a[i]);
                i++;
            };
        };
    }
    if (Ev7ljB8GT == c[0]) {
        i = 0;
        while (i < N9qnD0[0] + 1) {
            printf ("%c", a[i]);
            i++;
        };
    }
    if (Ev7ljB8GT != c[0]) {
        i = p - 1;
        while (i < N9qnD0[p] + 1) {
            printf ("%c", a[i]);
            i++;
        };
    };
}

