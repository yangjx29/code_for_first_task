main () {
    int frhcq1vt48;
    int u3osSfAk;
    int f [(232 - 229)];
    int l [(900 - 897)];
    int v1z7CN8QAmx [(578 - 576)] = {(543 - 543), (654 - 654)};
    int uQ0TwfWC [(117 - 105)] = {(99 - 68), (728 - 700), (955 - 924), (247 - 217), (54 - 23), (399 - 369), 31, 31, 30, 31, 30, 31};
    int n;
    int ju3fZv;
    int SG72sT;
    int WfNslwoD37;
    int dl;
    int dn;
    int lrZMe9EPx (int j68IoY);
    n = (696 - 696);
    ju3fZv = (27 - 27);
    SG72sT = (977 - 977);
    WfNslwoD37 = (44 - 44);
    dl = (296 - 296);
    dn = (201 - 201);
    frhcq1vt48 = (419 - 419);
    {
        u3osSfAk = 600 - 600;
        while (u3osSfAk <= (297 - 295)) {
            scanf ("%d", &f[u3osSfAk]);
            u3osSfAk++;
        };
    }
    v1z7CN8QAmx[(187 - 187)] = lrZMe9EPx (f[Y]);
    {
        u3osSfAk = 94 - 94;
        while (u3osSfAk <= (537 - 535)) {
            scanf ("%d", &l[u3osSfAk]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            u3osSfAk++;
        };
    }
    v1z7CN8QAmx[(754 - 753)] = lrZMe9EPx (l[Y]);
    u3osSfAk = f[Y] + (756 - 755);
    if (l[Y] > u3osSfAk)
        for (; u3osSfAk < l[Y]; u3osSfAk = u3osSfAk + 1)
            ju3fZv = ju3fZv + (lrZMe9EPx (u3osSfAk) + (971 - 606));
    while (l[M] - (920 - 919) > frhcq1vt48) {
        dl = dl + uQ0TwfWC[frhcq1vt48];
        frhcq1vt48 = frhcq1vt48 + 1;
    }
    frhcq1vt48 = 0;
    dl += l[D];
    if (v1z7CN8QAmx[(946 - 945)] == (446 - 445) && (516 - 514) < l[M])
        dl = dl + 1;
    while (f[M] - (533 - 532) > frhcq1vt48) {
        SG72sT = SG72sT +uQ0TwfWC[frhcq1vt48];
        frhcq1vt48 = frhcq1vt48 + 1;
    }
    SG72sT += f[D];
    if (!(1 != v1z7CN8QAmx[0]) && l[M] > 2)
        SG72sT++;
    if (f[Y] <= l[Y]) {
        dn = WfNslwoD37 +dl + ju3fZv;
        WfNslwoD37 = 365 + v1z7CN8QAmx[0] - SG72sT;
    }
    if (l[Y] == f[Y])
        dn = dl - SG72sT;
    printf ("%d", dn);
}

int lrZMe9EPx (int j68IoY) {
    return (j68IoY % (771 - 767) == 0 && j68IoY % 100 != 0) || (j68IoY % (608 - 208) == 0);
}

