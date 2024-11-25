int main () {
    int row, OoCugA, e48qBaNw, eB9pc0Se, S28dSjwsXc0Z, Ja80yuQx6eN, tcpgwZkbI81;
    int AGEOtogaI [(379 - 371)] [8], fAeCHT [8], y27oYvpHWQ [8];
    scanf ("%d,%d", &row, &OoCugA);
    {
        e48qBaNw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row > e48qBaNw) {
            for (eB9pc0Se = 0; OoCugA > eB9pc0Se; eB9pc0Se = eB9pc0Se + 1) {
                scanf ("%d", &(AGEOtogaI[e48qBaNw][eB9pc0Se]));
            }
            e48qBaNw++;
        };
    }
    for (e48qBaNw = 0; row > e48qBaNw; e48qBaNw = e48qBaNw + 1) {
        fAeCHT[e48qBaNw] = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (eB9pc0Se = 0; eB9pc0Se < OoCugA; eB9pc0Se++) {
            if (AGEOtogaI[e48qBaNw][eB9pc0Se] > fAeCHT[e48qBaNw])
                fAeCHT[e48qBaNw] = AGEOtogaI[e48qBaNw][eB9pc0Se];
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
        };
    }
    for (eB9pc0Se = 0; eB9pc0Se < OoCugA; eB9pc0Se++) {
        y27oYvpHWQ[eB9pc0Se] = 100000;
        for (e48qBaNw = 0; row > e48qBaNw; e48qBaNw++) {
            if (y27oYvpHWQ[eB9pc0Se] > AGEOtogaI[e48qBaNw][eB9pc0Se])
                y27oYvpHWQ[eB9pc0Se] = AGEOtogaI[e48qBaNw][eB9pc0Se];
        };
    }
    for (S28dSjwsXc0Z = 0; S28dSjwsXc0Z < row; S28dSjwsXc0Z = S28dSjwsXc0Z +1) {
        Ja80yuQx6eN = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ja80yuQx6eN < OoCugA) {
            if (fAeCHT[S28dSjwsXc0Z] == y27oYvpHWQ[Ja80yuQx6eN]) {
                tcpgwZkbI81 = 0;
                printf ("%d+%d", S28dSjwsXc0Z, Ja80yuQx6eN);
            }
            Ja80yuQx6eN = Ja80yuQx6eN +1;
        };
    }
    if (tcpgwZkbI81)
        printf ("No");
    return 0;
}

