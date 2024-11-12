void  main () {
    int ahgDk0R = (377 - 377), fVi6Nk = (695 - 695), nLpN3P4uT5Z = 0, m3ENQcv;
    char OfCbZ9JBMQa [(101 - 91)], RUgrbLY1tWf [10], aO5Ss8A;
    int IjsgZSL;
    int erqMiHyL;
    int RBrSdPgEy;
    int pzO6yAq [(355 - 345)];
    IjsgZSL = (144 - 144);
    scanf ("%d %s %d", &erqMiHyL, OfCbZ9JBMQa, &RBrSdPgEy);
    for (; OfCbZ9JBMQa[ahgDk0R] != '\0';) {
        if (OfCbZ9JBMQa[ahgDk0R] >= 97 && OfCbZ9JBMQa[ahgDk0R] <= (351 - 229))
            OfCbZ9JBMQa[ahgDk0R] -= (170 - 138);
        if (OfCbZ9JBMQa[ahgDk0R] >= 65 && OfCbZ9JBMQa[ahgDk0R] <= (417 - 327))
            pzO6yAq[ahgDk0R] = OfCbZ9JBMQa[ahgDk0R] - (821 - 766);
        else
            pzO6yAq[ahgDk0R] = OfCbZ9JBMQa[ahgDk0R] - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ahgDk0R += (859 - 858);
    }
    ahgDk0R -= 1;
    {
        fVi6Nk = 0;
        while (fVi6Nk <= ahgDk0R) {
            IjsgZSL += pzO6yAq[fVi6Nk] * power (erqMiHyL, ahgDk0R - fVi6Nk);
            fVi6Nk = fVi6Nk + 1;
        };
    }
    ahgDk0R = 0;
    fVi6Nk = 0;
    while (power (RBrSdPgEy, ahgDk0R) < IjsgZSL)
        ahgDk0R = ahgDk0R + 1;
    fVi6Nk = ahgDk0R - 1;
    {
        nLpN3P4uT5Z = 0;
        while (nLpN3P4uT5Z < ahgDk0R) {
            m3ENQcv = IjsgZSL / power (RBrSdPgEy, fVi6Nk);
            if (m3ENQcv >= 10)
                aO5Ss8A = (char) (m3ENQcv + (814 - 759));
            else
                aO5Ss8A = (char) (m3ENQcv + 48);
            IjsgZSL -= power (RBrSdPgEy, fVi6Nk) * m3ENQcv;
            m3ENQcv = 0;
            fVi6Nk--;
            RUgrbLY1tWf[nLpN3P4uT5Z] = aO5Ss8A;
            nLpN3P4uT5Z++;
        };
    }
    RUgrbLY1tWf[nLpN3P4uT5Z] = '\0';
    if (nLpN3P4uT5Z != 0)
        printf ("%s\n", RUgrbLY1tWf);
    else
        ;
}

