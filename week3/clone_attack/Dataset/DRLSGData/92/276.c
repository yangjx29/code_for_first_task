int wKGR4HPs (const  void  *Hp0xuabf5FV, const  void  *QWU8mo6C);

int main () {
    int zfatSL6w [(1466 - 465)], tU8txBIR3E [(1814 - 813)];
    int BoVj4aPyTC9g, uQOsRSrUw97, NK2NDjLq, WLM4EQ, wt1zkx, gD95YvJk, QWshlTvdPg8;
    while (cin >> BoVj4aPyTC9g) {
        if (!((192 - 192) != BoVj4aPyTC9g))
            break;
        cout << WLM4EQ *(548 - 348) << endl;
        WLM4EQ = (470 - 470);
        for (uQOsRSrUw97 = (521 - 521); uQOsRSrUw97 < BoVj4aPyTC9g; uQOsRSrUw97 = uQOsRSrUw97 + 1)
            cin >> zfatSL6w[uQOsRSrUw97];
        for (uQOsRSrUw97 = (118 - 118); BoVj4aPyTC9g > uQOsRSrUw97; uQOsRSrUw97++)
            cin >> tU8txBIR3E[uQOsRSrUw97];
        qsort (zfatSL6w, BoVj4aPyTC9g, sizeof (int), wKGR4HPs);
        qsort (tU8txBIR3E, BoVj4aPyTC9g, sizeof (int), wKGR4HPs);
        for (uQOsRSrUw97 = 0, gD95YvJk = 0, NK2NDjLq = BoVj4aPyTC9g -(619 - 618), QWshlTvdPg8 = BoVj4aPyTC9g -(388 - 387); uQOsRSrUw97 <= QWshlTvdPg8;) {
            if (zfatSL6w[gD95YvJk] > tU8txBIR3E[uQOsRSrUw97]) {
                uQOsRSrUw97++;
                WLM4EQ++;
                gD95YvJk = gD95YvJk + 1;
            }
            else {
                if (zfatSL6w[NK2NDjLq] > tU8txBIR3E[QWshlTvdPg8]) {
                    NK2NDjLq = NK2NDjLq -1;
                    WLM4EQ++;
                    QWshlTvdPg8--;
                }
                else {
                    if (zfatSL6w[NK2NDjLq] < tU8txBIR3E[uQOsRSrUw97])
                        WLM4EQ--;
                    uQOsRSrUw97++;
                    NK2NDjLq--;
                }
            }
        }
    }
    return 0;
}

int wKGR4HPs (const  void  *Hp0xuabf5FV, const  void  *QWU8mo6C) {
    return *(int*) QWU8mo6C -*(int*) Hp0xuabf5FV;
}

