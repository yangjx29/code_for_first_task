void  main () {
    int JWtCm2P8g4;
    char kNiu2DHR [(195 - 95)] [(271 - 241)], QSeCcok [30], yfZVmCR [30];
    int ESEwuTDnVX;
    int mFGet53hLc [100];
    int uzNeUFYh;
    int wvlUPT;
    for (ESEwuTDnVX = (632 - 632);; ESEwuTDnVX = ESEwuTDnVX +1) {
        if (!(EOF != scanf ("%s", kNiu2DHR[ESEwuTDnVX])))
            break;
        mFGet53hLc[ESEwuTDnVX] = strlen (kNiu2DHR[ESEwuTDnVX]);
    }
    uzNeUFYh = ESEwuTDnVX;
    JWtCm2P8g4 = mFGet53hLc[0];
    strcpy (QSeCcok, kNiu2DHR[(851 - 851)]);
    for (ESEwuTDnVX = 0; uzNeUFYh > ESEwuTDnVX; ESEwuTDnVX = ESEwuTDnVX +1) {
        if (mFGet53hLc[ESEwuTDnVX] > JWtCm2P8g4) {
            JWtCm2P8g4 = mFGet53hLc[ESEwuTDnVX];
            strcpy (QSeCcok, kNiu2DHR[ESEwuTDnVX]);
        }
    }
    strcpy (yfZVmCR, kNiu2DHR[0]);
    wvlUPT = mFGet53hLc[0];
    for (ESEwuTDnVX = 0; ESEwuTDnVX < uzNeUFYh; ESEwuTDnVX = ESEwuTDnVX +1) {
        if (mFGet53hLc[ESEwuTDnVX] < wvlUPT) {
            wvlUPT = mFGet53hLc[ESEwuTDnVX];
            strcpy (yfZVmCR, kNiu2DHR[ESEwuTDnVX]);
        }
    }
    printf ("%s\n", QSeCcok);
    printf ("%s\n", yfZVmCR);
}

