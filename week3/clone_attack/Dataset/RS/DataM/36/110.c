void  main () {
    int c1 [26], h5L92bWtsJv [26], d1 [26], d2 [26];
    int Qp3c5tjdfH, n, sYebOtEw, p = 0;
    char e;
    char c [1000], d [1000], a [1000], b [1000];
    scanf ("%s %s", &c, &d);
    sYebOtEw = strlen (d);
    n = strlen (c);
    {
        Qp3c5tjdfH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Qp3c5tjdfH) {
            a[Qp3c5tjdfH] = c[Qp3c5tjdfH];
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
            Qp3c5tjdfH = Qp3c5tjdfH +1;
        };
    }
    {
        Qp3c5tjdfH = 0;
        while (sYebOtEw > Qp3c5tjdfH) {
            b[Qp3c5tjdfH] = d[Qp3c5tjdfH];
            Qp3c5tjdfH = Qp3c5tjdfH +1;
        };
    }
    for (Qp3c5tjdfH = 0; Qp3c5tjdfH < 26; Qp3c5tjdfH = Qp3c5tjdfH +1) {
        c1[Qp3c5tjdfH] = 0;
        h5L92bWtsJv[Qp3c5tjdfH] = 0;
        d1[Qp3c5tjdfH] = 0;
        d2[Qp3c5tjdfH] = 0;
    }
    for (Qp3c5tjdfH = 0; n > Qp3c5tjdfH; Qp3c5tjdfH++) {
        if (a[Qp3c5tjdfH] >= 'a' && a[Qp3c5tjdfH] <= 'z')
            c1[a[Qp3c5tjdfH] - 'a']++;
        else if ('A' <= a[Qp3c5tjdfH] && 'Z' >= a[Qp3c5tjdfH])
            h5L92bWtsJv[a[Qp3c5tjdfH] - 'A']++;
    }
    {
        Qp3c5tjdfH = 0;
        while (Qp3c5tjdfH < sYebOtEw) {
            if ('a' <= d[Qp3c5tjdfH] && 'z' >= d[Qp3c5tjdfH])
                d1[d[Qp3c5tjdfH] - 'a']++;
            else if (d[Qp3c5tjdfH] >= 'A' && d[Qp3c5tjdfH] <= 'Z')
                d2[d[Qp3c5tjdfH] - 'A']++;
            Qp3c5tjdfH++;
        };
    }
    {
        Qp3c5tjdfH = 0;
        while (Qp3c5tjdfH < 26) {
            if (c1[Qp3c5tjdfH] == d1[Qp3c5tjdfH] && h5L92bWtsJv[Qp3c5tjdfH] == d2[Qp3c5tjdfH])
                p = p + 1;
            else
                p = p - 1;
            Qp3c5tjdfH++;
        };
    }
    if (p == 26)
        ;
    else
        ;
}

