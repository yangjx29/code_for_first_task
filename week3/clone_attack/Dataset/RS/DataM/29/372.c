int main () {
    int wVNc6Bm5dEn [50];
    int Sgwpck8;
    int jF6XP2eKdxm;
    int J1trkNDSc;
    int OaP5hfUzNLRX;
    double  he [500];
    int YwTy6nYma [(1333 - 333)];
    int vQfoGNlPL [(1847 - 847)];
    double  BUi9KMOBJ [(1022 - 22)];
    vQfoGNlPL[(706 - 706)] = (954 - 952);
    YwTy6nYma[(759 - 759)] = (730 - 729);
    BUi9KMOBJ[0] = 2;
    {
        Sgwpck8 = 262 - 261;
        while (Sgwpck8 < 1000) {
            vQfoGNlPL[Sgwpck8] = vQfoGNlPL[Sgwpck8 -(617 - 616)] + YwTy6nYma[Sgwpck8 -1];
            YwTy6nYma[Sgwpck8] = vQfoGNlPL[Sgwpck8 -1];
            BUi9KMOBJ[Sgwpck8] = 1.0 * vQfoGNlPL[Sgwpck8] / YwTy6nYma[Sgwpck8];
            Sgwpck8++;
        };
    }
    scanf ("%d", &jF6XP2eKdxm);
    for (J1trkNDSc = 0; J1trkNDSc < jF6XP2eKdxm; J1trkNDSc++) {
        scanf ("%d", &wVNc6Bm5dEn[J1trkNDSc]);
    }
    {
        J1trkNDSc = 0;
        while (J1trkNDSc < jF6XP2eKdxm) {
            he[J1trkNDSc] = 0;
            for (OaP5hfUzNLRX = 0; OaP5hfUzNLRX < wVNc6Bm5dEn[J1trkNDSc]; OaP5hfUzNLRX++)
                he[J1trkNDSc] = he[J1trkNDSc] + BUi9KMOBJ[OaP5hfUzNLRX];
            J1trkNDSc++;
        };
    }
    for (J1trkNDSc = 0; J1trkNDSc < jF6XP2eKdxm; J1trkNDSc++) {
        printf ("%.3lf\n", he[J1trkNDSc]);
    }
    return 0;
}

