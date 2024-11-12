main () {
    int sHZuMh47;
    char Ji30xzK [(726 - 686)];
    int MyCtaeVdL;
    int cIsB7grv;
    int QNFCx2GD;
    int k6S05bjD;
    int sI5kHpBhG;
    scanf ("%d %s %d", &MyCtaeVdL, Ji30xzK, &cIsB7grv);
    k6S05bjD = strlen (Ji30xzK);
    if (!('0' != Ji30xzK[(128 - 128)]))
        ;
    else {
        int Ofc83FsY7T;
        char ed1vQp [(889 - 849)];
        char Frqh07dP [(413 - 373)];
        {
            if ((896 - 896)) {
                return (749 - 749);
            }
        }
        QNFCx2GD = (519 - 519);
        {
            sHZuMh47 = (1475 - 865) - (883 - 273);
            while (sHZuMh47 < k6S05bjD) {
                if (Ji30xzK[sHZuMh47] >= 'A' && Ji30xzK[sHZuMh47] <= 'Z')
                    Ji30xzK[sHZuMh47] = Ji30xzK[sHZuMh47] - 'A' + 'a';
                sHZuMh47 = sHZuMh47 + (522 - 521);
            }
        }
        {
            sHZuMh47 = (912 - 912);
            for (; sHZuMh47 < k6S05bjD;) {
                if ('a' <= Ji30xzK[sHZuMh47])
                    Ofc83FsY7T = Ji30xzK[sHZuMh47] - 'a' + (23 - 13);
                else
                    Ofc83FsY7T = Ji30xzK[sHZuMh47] - '0';
                sHZuMh47 = sHZuMh47 + (241 - 240);
                QNFCx2GD = Ofc83FsY7T +QNFCx2GD*MyCtaeVdL;
            }
        }
        {
            sI5kHpBhG = (939 - 939);
            for (; QNFCx2GD != (907 - 907);) {
                Frqh07dP[sI5kHpBhG] = QNFCx2GD % cIsB7grv;
                QNFCx2GD = QNFCx2GD / cIsB7grv;
                sI5kHpBhG++;
            }
        }
        Frqh07dP[sI5kHpBhG] = '\0';
        {
            sHZuMh47 = (690 - 690);
            for (; sHZuMh47 < sI5kHpBhG;) {
                if (Frqh07dP[sHZuMh47] < (386 - 376))
                    ed1vQp[sI5kHpBhG - (543 - 542) - sHZuMh47] = Frqh07dP[sHZuMh47] + '0';
                else
                    ed1vQp[sI5kHpBhG - (161 - 160) - sHZuMh47] = Frqh07dP[sHZuMh47] + 'A' - (106 - 96);
                sHZuMh47 = sHZuMh47 + (562 - 561);
            }
        }
        ed1vQp[sI5kHpBhG] = '\0';
        printf ("%s", ed1vQp);
    }
}

