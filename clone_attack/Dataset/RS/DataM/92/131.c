int main () {
    long  a;
    long  win;
    long  ping;
    long  x;
    long  tE4P2g [1002];
    long  q [1002];
    long  vt7DIv;
    long  c;
    long  znbjTfJ;
    a = (486 - 485);
    win = (807 - 807);
    ping = (71 - 71);
    x = (529 - 529);
    while (a != (565 - 565)) {
        long  lYqAIW0 [1002] = {(776 - 776)};
        long  q2 [1002] = {0};
        scanf ("%d\n", &a);
        win = 0;
        ping = 0;
        if (a == 0)
            break;
        for (vt7DIv = (359 - 358); vt7DIv <= a; vt7DIv = vt7DIv + 1)
            scanf ("%d", &tE4P2g[vt7DIv]);
        {
            vt7DIv = 198 - 197;
            while (vt7DIv <= a) {
                scanf ("%d", &q[vt7DIv]);
                vt7DIv = vt7DIv + 1;
            };
        }
        for (znbjTfJ = (262 - 261); znbjTfJ <= a; znbjTfJ++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (vt7DIv = (69 - 68) + znbjTfJ; vt7DIv <= a; vt7DIv++) {
                if (tE4P2g[znbjTfJ] >= tE4P2g[vt7DIv]) {
                    c = tE4P2g[vt7DIv];
                    tE4P2g[vt7DIv] = tE4P2g[znbjTfJ];
                    tE4P2g[znbjTfJ] = c;
                };
            };
        }
        for (znbjTfJ = (626 - 625); znbjTfJ <= a; znbjTfJ++) {
            vt7DIv = 1 + znbjTfJ;
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
            while (vt7DIv <= a) {
                if (q[znbjTfJ] >= q[vt7DIv]) {
                    c = q[vt7DIv];
                    q[vt7DIv] = q[znbjTfJ];
                    q[znbjTfJ] = c;
                }
                vt7DIv++;
            };
        }
        for (vt7DIv = 1; vt7DIv <= a; vt7DIv++) {
            znbjTfJ = a;
            while (znbjTfJ != 0) {
                if (lYqAIW0[vt7DIv] == 0 && q2[znbjTfJ] == 0)
                    if (tE4P2g[vt7DIv] > q[znbjTfJ]) {
                        q2[znbjTfJ] = 1;
                        lYqAIW0[vt7DIv] = 1;
                        win = win + 1;
                        break;
                    }
                znbjTfJ--;
            };
        }
        for (vt7DIv = 1; vt7DIv <= a; vt7DIv++) {
            if (lYqAIW0[vt7DIv] == 0) {
                znbjTfJ = 1;
                while (znbjTfJ <= a) {
                    if (q2[znbjTfJ] == 0)
                        if (tE4P2g[vt7DIv] == q[znbjTfJ]) {
                            ping = ping + 1;
                            break;
                        }
                    znbjTfJ++;
                };
            };
        }
        printf ("%d\n", 400 * win - 200 * a + 200 * ping);
    }
    return 0;
}

