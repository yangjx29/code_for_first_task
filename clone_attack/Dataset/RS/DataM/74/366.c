int zhi (int kwxfGPE);
int cwNsZJq (int kwxfGPE);

void  main (void ) {
    int kwxfGPE, n9nOKC = (996 - 996);
    int m;
    int n;
    int ppFJ1iCqrAz [(786 - 686)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &m, &n);
    for (kwxfGPE = m; kwxfGPE <= n; kwxfGPE = kwxfGPE + 1) {
        if (!(1 != zhi (kwxfGPE)) && cwNsZJq (kwxfGPE) == kwxfGPE) {
            ppFJ1iCqrAz[n9nOKC] = kwxfGPE;
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
            n9nOKC++;
        };
    }
    if (n9nOKC == 0)
        ;
    else {
        for (kwxfGPE = 0; kwxfGPE < n9nOKC - 1; kwxfGPE++)
            printf ("%d,", ppFJ1iCqrAz[kwxfGPE]);
        printf ("%d", ppFJ1iCqrAz[n9nOKC - 1]);
    };
}

int zhi (int kwxfGPE) {
    int BU5pKqlfy29;
    if (kwxfGPE == 1)
        return 0;
    if (kwxfGPE == (306 - 304))
        return 1;
    for (BU5pKqlfy29 = 2; BU5pKqlfy29 < kwxfGPE; BU5pKqlfy29++) {
        if (kwxfGPE % BU5pKqlfy29 == 0)
            return 0;
    }
    return 1;
}

int cwNsZJq (int kwxfGPE) {
    int BU5pKqlfy29;
    BU5pKqlfy29 = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    while (kwxfGPE > 0) {
        BU5pKqlfy29 = BU5pKqlfy29 *(75 - 65) + kwxfGPE % 10;
        kwxfGPE = kwxfGPE / 10;
    }
    return BU5pKqlfy29;
}

