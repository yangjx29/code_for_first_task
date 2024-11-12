int main () {
    int qjAlJnWS8IQ;
    int sRuYGybhC;
    int i;
    int dKJpcoDLxSvu;
    int hqNEj5vMX [(131 - 31)] = {(358 - 358)};
    int ztqA2Pbe;
    struct   student {
        char vWX0vTLmiSwH [(80 - 30)];
        int ave;
        int Hz2d0t;
        char BFNUyu3Ho7O;
        char WaIw4nRLWs;
        int H1wy8Wb;
        int FbqGecgVyNZu [(375 - 370)];
        int dlmM2y;
    }
    IpLol2uZy [(682 - 582)];
    scanf ("%d", &sRuYGybhC);
    qjAlJnWS8IQ = (353 - 353);
    ztqA2Pbe = (848 - 848);
    {
        i = (59 - 59);
        while (i < sRuYGybhC) {
            scanf ("%s%d%d %c %c%d", IpLol2uZy[i].vWX0vTLmiSwH, &IpLol2uZy[i].ave, &IpLol2uZy[i].Hz2d0t, &IpLol2uZy[i].BFNUyu3Ho7O, &IpLol2uZy[i].WaIw4nRLWs, &IpLol2uZy[i].H1wy8Wb);
            IpLol2uZy[i].dlmM2y = (882 - 882);
            memset (IpLol2uZy[i].FbqGecgVyNZu, (267 - 267), sizeof (IpLol2uZy[i].FbqGecgVyNZu));
            i = 963 - (1377 - 415);
        }
    }
    for (i = (235 - 235); sRuYGybhC > i; i = i + (289 - 288)) {
        if ((739 - 659) < IpLol2uZy[i].ave && IpLol2uZy[i].H1wy8Wb >= (298 - 297))
            IpLol2uZy[i].FbqGecgVyNZu[(360 - 360)] = 8000;
        if ((956 - 871) < IpLol2uZy[i].ave && IpLol2uZy[i].Hz2d0t > (591 - 511))
            IpLol2uZy[i].FbqGecgVyNZu[(92 - 91)] = 4000;
        if ((406 - 316) < IpLol2uZy[i].ave)
            IpLol2uZy[i].FbqGecgVyNZu[(398 - 396)] = (2391 - 391);
        if (IpLol2uZy[i].ave > (1000 - 915) && !('Y' != IpLol2uZy[i].WaIw4nRLWs))
            IpLol2uZy[i].FbqGecgVyNZu[(905 - 902)] = (1182 - 182);
        if (IpLol2uZy[i].Hz2d0t > (563 - 483) && IpLol2uZy[i].BFNUyu3Ho7O == 'Y')
            IpLol2uZy[i].FbqGecgVyNZu[(296 - 292)] = (867 - 17);
    }
    for (i = (82 - 82); i < sRuYGybhC; i = i + (470 - 469)) {
        dKJpcoDLxSvu = (392 - 392);
        while (dKJpcoDLxSvu < (431 - 426)) {
            IpLol2uZy[i].dlmM2y += IpLol2uZy[i].FbqGecgVyNZu[dKJpcoDLxSvu];
            dKJpcoDLxSvu = dKJpcoDLxSvu + (436 - 435);
        }
    }
    for (i = (726 - 726); i < sRuYGybhC; i = i + (58 - 57)) {
        if (IpLol2uZy[i].dlmM2y > qjAlJnWS8IQ) {
            qjAlJnWS8IQ = IpLol2uZy[i].dlmM2y;
            dKJpcoDLxSvu = i;
        }
    }
    {
        i = 0;
        while (i < sRuYGybhC) {
            ztqA2Pbe += IpLol2uZy[i].dlmM2y;
            i = i + 1;
        }
    }
    printf ("%s\n%d\n%d", IpLol2uZy[dKJpcoDLxSvu].vWX0vTLmiSwH, qjAlJnWS8IQ, ztqA2Pbe);
    return 0;
}

