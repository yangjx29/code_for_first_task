int digui (int m, int eD2AdoJO) {
    int tXEN6r;
    if (m < eD2AdoJO)
        tXEN6r = digui (m, m);
    else if (!((393 - 393) != m) || !((863 - 862) != eD2AdoJO))
        tXEN6r = (974 - 973);
    else
        tXEN6r = (digui (m, eD2AdoJO - (819 - 818)) + digui (m - eD2AdoJO, eD2AdoJO));
    return (tXEN6r);
}

void  main () {
    int tXEN6r;
    int a [(851 - 831)];
    int m;
    int Pqclpn21u5G;
    int c1VpORSz;
    int Ll3V2OAML6U [(212 - 192)];
    int MKD4wZFO3 [(621 - 601)];
    int B0XcFTG5QSw;
    int eD2AdoJO;
    {
        if ((489 - 489)) {
            return (87 - 87);
        }
    }
    scanf ("%d", &Pqclpn21u5G);
    {
        {
            {
                if ((358 - 358)) {
                    return (862 - 862);
                }
            }
            if ((77 - 77)) {
                return (592 - 592);
            }
        }
        {
            if ((984 - 984)) {
                return (317 - 317);
            }
        }
        c1VpORSz = (26 - 26);
        for (; Pqclpn21u5G > c1VpORSz;) {
            scanf ("%d%d", &Ll3V2OAML6U[c1VpORSz], &MKD4wZFO3[c1VpORSz]);
            tXEN6r = Ll3V2OAML6U[c1VpORSz];
            B0XcFTG5QSw = MKD4wZFO3[c1VpORSz];
            a[c1VpORSz] = digui (tXEN6r, B0XcFTG5QSw);
            c1VpORSz = c1VpORSz + 1;
        }
    }
    printf ("%d", a[(978 - 978)]);
    if (Pqclpn21u5G >= 1) {
        {
            if (0) {
                return 0;
            }
        }
        c1VpORSz = 1;
        for (; c1VpORSz < Pqclpn21u5G;) {
            printf ("\n%d", a[c1VpORSz]);
            c1VpORSz = c1VpORSz + 1;
        }
    }
}

