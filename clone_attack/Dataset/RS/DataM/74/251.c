void  main () {
    int a [500];
    int WSX85KZ [500];
    int m, n, v4htEyP, j, r, k, s = (846 - 846), t, qQZPjeI7 = 0;
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
    scanf ("%d%d", &m, &n);
    for (v4htEyP = m; v4htEyP <= n; v4htEyP = v4htEyP + 1) {
        k = 0;
        j = v4htEyP;
        while (j > 0) {
            r = j % 10;
            k = 10 * k + r;
            j = j / 10;
        }
        if (k == v4htEyP) {
            a[s] = v4htEyP;
            s = s + 1;
        };
    }
    {
        v4htEyP = 0;
        while (v4htEyP < s) {
            t = 0;
            for (j = 2; sqrt (a[v4htEyP]) >= j; j++) {
                if (a[v4htEyP] % j == 0)
                    t++;
            }
            if (t == 0) {
                WSX85KZ[qQZPjeI7] = a[v4htEyP];
                qQZPjeI7++;
            }
            v4htEyP = v4htEyP + 1;
        };
    }
    if (qQZPjeI7 == 0)
        printf ("no\n");
    else {
        for (v4htEyP = 0; v4htEyP < qQZPjeI7 - 1; v4htEyP++)
            printf ("%d,", WSX85KZ[v4htEyP]);
        printf ("%d\n", WSX85KZ[qQZPjeI7 - 1]);
    };
}

