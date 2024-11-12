int f (char a [], char X4XRZxtLE [], char *p) {
    int m, qOr2u45PHS, Fsy6mwhZrjXz = 0;
    m = strlen (a);
    qOr2u45PHS = strlen (X4XRZxtLE);
    {
        int EdgFMNoIyBVA = 0;
        for (; m > EdgFMNoIyBVA;) {
            if (10 > a[m - 1 - EdgFMNoIyBVA] + X4XRZxtLE[qOr2u45PHS - 1 - EdgFMNoIyBVA] - '0' - '0')
                p[qOr2u45PHS - 1 - EdgFMNoIyBVA] = a[m - 1 - EdgFMNoIyBVA] + X4XRZxtLE[qOr2u45PHS - 1 - EdgFMNoIyBVA] - '0';
            else {
                p[qOr2u45PHS - 1 - EdgFMNoIyBVA] = a[m - 1 - EdgFMNoIyBVA] + X4XRZxtLE[qOr2u45PHS - 1 - EdgFMNoIyBVA] - '0' - 10;
                if (qOr2u45PHS - 2 - EdgFMNoIyBVA >= qOr2u45PHS - m)
                    X4XRZxtLE[qOr2u45PHS - 2 - EdgFMNoIyBVA]++;
                else
                    Fsy6mwhZrjXz = 1;
            }
            EdgFMNoIyBVA++;
        }
    }
    if (!(0 != Fsy6mwhZrjXz)) {
        {
            int EdgFMNoIyBVA = 0;
            for (; EdgFMNoIyBVA < qOr2u45PHS - m;) {
                p[EdgFMNoIyBVA] = X4XRZxtLE[EdgFMNoIyBVA];
                EdgFMNoIyBVA++;
            }
        }
        p[qOr2u45PHS] = 0;
    }
    else {
        if (!(qOr2u45PHS != m)) {
            {
                int EdgFMNoIyBVA = 0;
                for (; EdgFMNoIyBVA < qOr2u45PHS;) {
                    p[qOr2u45PHS - EdgFMNoIyBVA] = p[qOr2u45PHS - 1 - EdgFMNoIyBVA];
                    EdgFMNoIyBVA++;
                }
            }
            p[0] = '1';
            p[qOr2u45PHS + 1] = 0;
        }
        else {
            {
                int EdgFMNoIyBVA = 0;
                for (; qOr2u45PHS - m > EdgFMNoIyBVA;) {
                    if (X4XRZxtLE[qOr2u45PHS - m - 1 - EdgFMNoIyBVA] < '9') {
                        X4XRZxtLE[qOr2u45PHS - m - 1 - EdgFMNoIyBVA]++;
                        break;
                    }
                    else {
                        Fsy6mwhZrjXz = 2;
                        X4XRZxtLE[qOr2u45PHS - m - 1 - EdgFMNoIyBVA] = '0';
                    }
                    EdgFMNoIyBVA++;
                }
            }
            if (!(1 != Fsy6mwhZrjXz)) {
                {
                    int EdgFMNoIyBVA = 0;
                    for (; EdgFMNoIyBVA < qOr2u45PHS - m;) {
                        p[EdgFMNoIyBVA] = X4XRZxtLE[EdgFMNoIyBVA];
                        EdgFMNoIyBVA++;
                    }
                }
                p[qOr2u45PHS] = 0;
            }
            else {
                p[0] = '1';
                {
                    int EdgFMNoIyBVA = 0;
                    for (; EdgFMNoIyBVA < m;) {
                        p[qOr2u45PHS - EdgFMNoIyBVA] = p[qOr2u45PHS - 1 - EdgFMNoIyBVA];
                        EdgFMNoIyBVA++;
                    }
                }
                {
                    int EdgFMNoIyBVA = 0;
                    for (; EdgFMNoIyBVA < qOr2u45PHS - m;) {
                        p[EdgFMNoIyBVA +1] = X4XRZxtLE[EdgFMNoIyBVA];
                        EdgFMNoIyBVA++;
                    }
                }
                p[qOr2u45PHS + 1] = 0;
            }
        }
    }
}

int main () {
    char a [260];
    int m, qOr2u45PHS, EdgFMNoIyBVA;
    char pGYLvd2sKF5r [260];
    char X4XRZxtLE [260];
    gets (a);
    gets (X4XRZxtLE);
    m = strlen (a);
    for (; !('0' != a[0]) && a[1] != 0;) {
        {
            int j = 0;
            for (; j < m;) {
                a[j] = a[j + 1];
                j++;
            }
        }
        m--;
        a[m] = 0;
    }
    qOr2u45PHS = strlen (X4XRZxtLE);
    for (; X4XRZxtLE[0] == '0' && X4XRZxtLE[1] != 0;) {
        {
            int j = 0;
            for (; j < qOr2u45PHS;) {
                X4XRZxtLE[j] = X4XRZxtLE[j + 1];
                j++;
            }
        }
        qOr2u45PHS--;
        X4XRZxtLE[qOr2u45PHS] = 0;
    }
    if (m > qOr2u45PHS)
        f (X4XRZxtLE, a, pGYLvd2sKF5r);
    else
        f (a, X4XRZxtLE, pGYLvd2sKF5r);
    printf ("%s\n", pGYLvd2sKF5r);
}

