main () {
    int o [(549 - 248)];
    int KSBzvOm [(510 - 209)];
    int wohIrXFwOa [(1156 - 855)];
    int fDcok4zS [301] [301];
    int qvndCVjUe6qE;
    int MX6UnJ;
    int MFadikS;
    int OxDqla1sXrEA;
    int GGpUlgi;
    int UjCqkKYa;
    qvndCVjUe6qE = (670 - 670);
    {
        MX6UnJ = 769 - 768;
        while (1) {
            scanf ("%d %d", &wohIrXFwOa[MX6UnJ], &KSBzvOm[MX6UnJ]);
            if (wohIrXFwOa[MX6UnJ] == (106 - 106) && KSBzvOm[MX6UnJ] == (135 - 135))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            qvndCVjUe6qE++;
            MX6UnJ = MX6UnJ +1;
        };
    }
    for (MX6UnJ = (189 - 188); qvndCVjUe6qE >= MX6UnJ; MX6UnJ++) {
        for (MFadikS = (860 - 859); MFadikS <= wohIrXFwOa[MX6UnJ]; MFadikS = MFadikS +1) {
            fDcok4zS[MX6UnJ][MFadikS] = MFadikS;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        MX6UnJ = 881 - 880;
        while (MX6UnJ <= qvndCVjUe6qE) {
            for (MFadikS = (354 - 354), GGpUlgi = (434 - 433), OxDqla1sXrEA = (186 - 185); OxDqla1sXrEA < wohIrXFwOa[MX6UnJ];) {
                MFadikS++;
                if (MFadikS == wohIrXFwOa[MX6UnJ] + 1)
                    MFadikS = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                if (fDcok4zS[MX6UnJ][MFadikS] != (361 - 361))
                    GGpUlgi++;
                if (GGpUlgi == KSBzvOm[MX6UnJ] + 1) {
                    OxDqla1sXrEA = OxDqla1sXrEA +1;
                    GGpUlgi = 1;
                    fDcok4zS[MX6UnJ][MFadikS] = 0;
                };
            }
            for (UjCqkKYa = 1; UjCqkKYa <= wohIrXFwOa[MX6UnJ]; UjCqkKYa++) {
                o[MX6UnJ] = o[MX6UnJ] + fDcok4zS[MX6UnJ][UjCqkKYa];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("%d\n", o[MX6UnJ]);
            MX6UnJ++;
        };
    };
}

