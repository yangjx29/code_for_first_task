int main () {
    int qSCLwKruO;
    int VenMAv;
    int *FMa9Y8FuikQ2;
    int tjV3PvAFe [10000];
    int xbhMZF;
    int DCD9fprZSFw;
    int tgQDFIl5m9;
    int wH2EtV9je;
    int vToJD9lOWi71;
    FMa9Y8FuikQ2 = tjV3PvAFe;
    vToJD9lOWi71 = 0;
    scanf ("%d\n", &DCD9fprZSFw);
    for (qSCLwKruO = 1; qSCLwKruO <= DCD9fprZSFw; qSCLwKruO = qSCLwKruO + 1) {
        for (xbhMZF = 0; xbhMZF < 10000; xbhMZF = xbhMZF + 1)
            *(FMa9Y8FuikQ2 +xbhMZF) = 0;
        scanf ("%d %d\n", &wH2EtV9je, &tgQDFIl5m9);
        for (xbhMZF = 0; wH2EtV9je * tgQDFIl5m9 > xbhMZF; xbhMZF = xbhMZF + 1)
            scanf ("%d", &*(FMa9Y8FuikQ2 +xbhMZF));
        for (xbhMZF = 0; tgQDFIl5m9 > xbhMZF; xbhMZF = xbhMZF + 1)
            vToJD9lOWi71 = vToJD9lOWi71 + *(FMa9Y8FuikQ2 +xbhMZF);
        for (VenMAv = 1; VenMAv < wH2EtV9je - 1; VenMAv = VenMAv +1) {
            vToJD9lOWi71 = vToJD9lOWi71 + *(FMa9Y8FuikQ2 +tgQDFIl5m9 * VenMAv) + *(FMa9Y8FuikQ2 +tgQDFIl5m9 * VenMAv +tgQDFIl5m9 - 1);
        }
        if (wH2EtV9je != 1) {
            for (xbhMZF = 0; xbhMZF < tgQDFIl5m9; xbhMZF = xbhMZF + 1)
                vToJD9lOWi71 = vToJD9lOWi71 + *(FMa9Y8FuikQ2 +(wH2EtV9je - 1) * tgQDFIl5m9 + xbhMZF);
        }
        printf ("%d\n", vToJD9lOWi71);
        vToJD9lOWi71 = 0;
    }
}

