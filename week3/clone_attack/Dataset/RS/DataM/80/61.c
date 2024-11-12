int main () {
    int n59cz2Ds [13] = {(765 - 765), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int pMx21l = (892 - 892), dXptuZYM;
    int jYc1jN8;
    int jNEvXm8b;
    int XpGHr8;
    int DZVedQ5iF1;
    int qSWNFi8k4VyH;
    int XK3Su8w;
    int b [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> jYc1jN8 >> XpGHr8 >> qSWNFi8k4VyH;
    cin >> jNEvXm8b >> DZVedQ5iF1 >> XK3Su8w;
    if ((jNEvXm8b - jYc1jN8) == 0) {
        if (!(DZVedQ5iF1 != XpGHr8))
            pMx21l = XK3Su8w -qSWNFi8k4VyH;
        else {
            if ((jYc1jN8 % 4 == 0 && !(0 == jYc1jN8 % 100)) || (jYc1jN8 % 400 == 0)) {
                {
                    dXptuZYM = XpGHr8 +1;
                    while (DZVedQ5iF1 -1 >= dXptuZYM) {
                        pMx21l = pMx21l + b[dXptuZYM];
                        dXptuZYM = dXptuZYM + 1;
                    };
                }
                pMx21l = pMx21l + b[XpGHr8] - qSWNFi8k4VyH + XK3Su8w;
            }
            else {
                for (dXptuZYM = XpGHr8 +1; dXptuZYM <= DZVedQ5iF1 -1; dXptuZYM = dXptuZYM + 1)
                    pMx21l = pMx21l + n59cz2Ds[dXptuZYM];
                pMx21l = pMx21l + n59cz2Ds[XpGHr8] - qSWNFi8k4VyH + XK3Su8w;
            };
        };
    }
    if ((jNEvXm8b - jYc1jN8) == 1) {
        pMx21l = 0;
        if ((jYc1jN8 % 4 == 0 && jYc1jN8 % 100 != 0) || (jYc1jN8 % 400 == 0)) {
            for (dXptuZYM = XpGHr8 +1; 12 >= dXptuZYM; dXptuZYM++)
                pMx21l = pMx21l + b[dXptuZYM];
            pMx21l = pMx21l + b[XpGHr8] - qSWNFi8k4VyH;
        }
        else {
            {
                dXptuZYM = XpGHr8 +1;
                while (dXptuZYM <= 12) {
                    pMx21l = pMx21l + n59cz2Ds[dXptuZYM];
                    dXptuZYM = dXptuZYM + 1;
                };
            }
            pMx21l = pMx21l + n59cz2Ds[XpGHr8] - qSWNFi8k4VyH;
        }
        if ((jNEvXm8b % 4 == 0 && jNEvXm8b % 100 != 0) || (!(0 != jNEvXm8b % 400))) {
            {
                dXptuZYM = 1;
                while (dXptuZYM <= DZVedQ5iF1 -1) {
                    pMx21l = pMx21l + b[dXptuZYM];
                    dXptuZYM = dXptuZYM + 1;
                };
            }
            pMx21l = pMx21l + XK3Su8w;
        }
        else {
            {
                dXptuZYM = 1;
                while (dXptuZYM <= DZVedQ5iF1 -1) {
                    pMx21l = pMx21l + n59cz2Ds[dXptuZYM];
                    dXptuZYM = dXptuZYM + 1;
                };
            }
            pMx21l = pMx21l + XK3Su8w;
        };
    }
    if ((jNEvXm8b - jYc1jN8) > 2) {
        pMx21l = 0;
        {
            dXptuZYM = jYc1jN8 + 1;
            while (dXptuZYM <= jNEvXm8b - 1) {
                if ((dXptuZYM % 4 == 0 && dXptuZYM % 100 != 0) || (dXptuZYM % 400 == 0))
                    pMx21l = pMx21l + 366;
                else
                    pMx21l = pMx21l + 365;
                dXptuZYM++;
            };
        }
        if ((jYc1jN8 % 4 == 0 && jYc1jN8 % 100 != 0) || (jYc1jN8 % 400 == 0)) {
            for (dXptuZYM = XpGHr8 +1; dXptuZYM <= 12; dXptuZYM++)
                pMx21l = pMx21l + b[dXptuZYM];
            pMx21l = pMx21l + b[XpGHr8] - qSWNFi8k4VyH;
        }
        else {
            {
                dXptuZYM = XpGHr8 +1;
                while (dXptuZYM <= 12) {
                    pMx21l = pMx21l + n59cz2Ds[dXptuZYM];
                    dXptuZYM++;
                };
            }
            pMx21l = pMx21l + n59cz2Ds[XpGHr8] - qSWNFi8k4VyH;
        }
        if ((jNEvXm8b % 4 == 0 && jNEvXm8b % 100 != 0) || (jNEvXm8b % 400 == 0)) {
            for (dXptuZYM = 1; dXptuZYM <= DZVedQ5iF1 -1; dXptuZYM++)
                pMx21l = pMx21l + b[dXptuZYM];
            pMx21l = pMx21l + XK3Su8w;
        }
        else {
            {
                dXptuZYM = 1;
                while (dXptuZYM <= DZVedQ5iF1 -1) {
                    pMx21l = pMx21l + n59cz2Ds[dXptuZYM];
                    dXptuZYM++;
                };
            }
            pMx21l = pMx21l + XK3Su8w;
        };
    }
    cout << pMx21l << endl;
    return 0;
}

