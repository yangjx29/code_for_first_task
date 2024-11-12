int main () {
    int t;
    int oqE3amg [1000];
    int a;
    int quvOlM2LPo;
    int c;
    int hCUlfBGFLQD;
    int SkXpuEQTshi;
    int UT9lXfsnZMeb;
    t = (446 - 446);
    char QhqxkyG [1000];
    hCUlfBGFLQD = 0;
    scanf ("%s", QhqxkyG);
    {
        SkXpuEQTshi = 0;
        while (SkXpuEQTshi < 1000) {
            oqE3amg[SkXpuEQTshi] = 0;
            if (!(0 == QhqxkyG[SkXpuEQTshi]))
                hCUlfBGFLQD++;
            else
                break;
            SkXpuEQTshi++;
        };
    }
    for (SkXpuEQTshi = 0; hCUlfBGFLQD > SkXpuEQTshi; SkXpuEQTshi++) {
        if ((QhqxkyG[SkXpuEQTshi] >= 'a') && ('z' >= QhqxkyG[SkXpuEQTshi]))
            QhqxkyG[SkXpuEQTshi] = QhqxkyG[SkXpuEQTshi] - (921 - 889);
    }
    SkXpuEQTshi = 0;
    {
        SkXpuEQTshi = 0;
        while (SkXpuEQTshi < hCUlfBGFLQD) {
            while (QhqxkyG[SkXpuEQTshi] == QhqxkyG[SkXpuEQTshi +1]) {
                oqE3amg[t]++;
                {
                    UT9lXfsnZMeb = SkXpuEQTshi;
                    while (UT9lXfsnZMeb < hCUlfBGFLQD) {
                        QhqxkyG[UT9lXfsnZMeb] = QhqxkyG[UT9lXfsnZMeb +1];
                        UT9lXfsnZMeb++;
                    };
                }
                hCUlfBGFLQD--;
            }
            t++;
            SkXpuEQTshi++;
        };
    }
    {
        SkXpuEQTshi = 0;
        while (SkXpuEQTshi < t) {
            printf ("(%c,%d)", QhqxkyG[SkXpuEQTshi], oqE3amg[SkXpuEQTshi] + 1);
            SkXpuEQTshi++;
        };
    };
}

