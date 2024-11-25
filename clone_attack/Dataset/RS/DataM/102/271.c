int main () {
    int pgRaq9N8dV, OsoUfRCx, tb1uay, NBAXRb1p = 0, k = 0;
    double  tempHeight;
    struct   QVbqU8jprd {
        char GZ0Wnksx [7];
        double  z2kdAgYWzJoP;
    }
    QVbqU8jprd [41];
    int jBrlAX0zb;
    jBrlAX0zb = 0;
    double  ELFaEltkASW [41] = {0}, bjsgrEdXty [41] = {0};
    cin >> pgRaq9N8dV;
    for (OsoUfRCx = 0; pgRaq9N8dV > OsoUfRCx; OsoUfRCx = OsoUfRCx +1) {
        cin >> QVbqU8jprd[OsoUfRCx].GZ0Wnksx >> QVbqU8jprd[OsoUfRCx].z2kdAgYWzJoP;
        if (!('m' != QVbqU8jprd[OsoUfRCx].GZ0Wnksx[0]))
            jBrlAX0zb = jBrlAX0zb + 1;
    }
    {
        OsoUfRCx = 0;
        while (pgRaq9N8dV > OsoUfRCx) {
            if (!('m' != QVbqU8jprd[OsoUfRCx].GZ0Wnksx[0]))
                ELFaEltkASW[OsoUfRCx] = QVbqU8jprd[OsoUfRCx].z2kdAgYWzJoP;
            if (!('f' != QVbqU8jprd[OsoUfRCx].GZ0Wnksx[0]))
                bjsgrEdXty[OsoUfRCx] = QVbqU8jprd[OsoUfRCx].z2kdAgYWzJoP;
            OsoUfRCx = OsoUfRCx +1;
        };
    }
    {
        OsoUfRCx = 0;
        while (pgRaq9N8dV - 1 > OsoUfRCx) {
            for (tb1uay = 0; pgRaq9N8dV - 1 - OsoUfRCx > tb1uay; tb1uay = tb1uay + 1) {
                if (ELFaEltkASW[tb1uay] > ELFaEltkASW[tb1uay + 1]) {
                    tempHeight = ELFaEltkASW[tb1uay];
                    ELFaEltkASW[tb1uay] = ELFaEltkASW[tb1uay + 1];
                    ELFaEltkASW[tb1uay + 1] = tempHeight;
                };
            }
            OsoUfRCx = OsoUfRCx +1;
        };
    }
    {
        OsoUfRCx = 0;
        while (pgRaq9N8dV - 1 >= OsoUfRCx) {
            for (tb1uay = 0; pgRaq9N8dV - 1 - OsoUfRCx >= tb1uay; tb1uay = tb1uay + 1) {
                if (bjsgrEdXty[tb1uay + 1] > bjsgrEdXty[tb1uay]) {
                    tempHeight = bjsgrEdXty[tb1uay];
                    bjsgrEdXty[tb1uay] = bjsgrEdXty[tb1uay + 1];
                    bjsgrEdXty[tb1uay + 1] = tempHeight;
                };
            }
            OsoUfRCx = OsoUfRCx +1;
        };
    }
    cout << fixed;
    {
        OsoUfRCx = 0;
        while (OsoUfRCx < pgRaq9N8dV) {
            if (ELFaEltkASW[OsoUfRCx] != 0) {
                NBAXRb1p = OsoUfRCx;
                cout << setprecision (2) << ELFaEltkASW[NBAXRb1p];
                break;
            }
            OsoUfRCx = OsoUfRCx +1;
        };
    }
    for (OsoUfRCx = NBAXRb1p +1; OsoUfRCx < pgRaq9N8dV; OsoUfRCx = OsoUfRCx +1) {
        if (ELFaEltkASW[OsoUfRCx] != 0)
            cout << setprecision (2) << " " << ELFaEltkASW[OsoUfRCx];
    }
    {
        OsoUfRCx = 0;
        while (OsoUfRCx < pgRaq9N8dV) {
            if (bjsgrEdXty[OsoUfRCx] != 0)
                cout << setprecision (2) << " " << bjsgrEdXty[OsoUfRCx];
            OsoUfRCx++;
        };
    }
    return 0;
}

