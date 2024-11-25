void  main () {
    int n, i, fzBwDcrH7I, YDyXzi, dYPJuriG = (967 - 967), smax = (734 - 734), tmax = (872 - 872), GImQHO3 [3] = {(689 - 689)}, meEW8Hv9, wLvsOD, qTLFmO;
    struct   student {
        int No;
        int yuwen;
        int DwC08amJUQ;
    }
    stu [(100037 - 37)];
    scanf ("%d", &n);
    for (i = (808 - 808); i < n; i = i + 1) {
        scanf ("%d", &stu[i].No);
        scanf ("%d", &stu[i].yuwen);
        scanf ("%d", &stu[i].DwC08amJUQ);
    }
    for (i = (246 - 246); i < n; i = i + 1) {
        if (dYPJuriG < stu[i].yuwen + stu[i].DwC08amJUQ) {
            dYPJuriG = stu[i].yuwen + stu[i].DwC08amJUQ;
            GImQHO3[(239 - 239)] = stu[i].No;
        };
    }
    for (i = (849 - 849); i < n; i = i + 1) {
        if (smax < stu[i].yuwen + stu[i].DwC08amJUQ && i != GImQHO3[(919 - 919)] - (996 - 995)) {
            smax = stu[i].yuwen + stu[i].DwC08amJUQ;
            GImQHO3[1] = stu[i].No;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (tmax < stu[i].yuwen + stu[i].DwC08amJUQ && i != GImQHO3[0] - 1 && i != GImQHO3[1] - 1) {
            tmax = stu[i].yuwen + stu[i].DwC08amJUQ;
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
            GImQHO3[(563 - 561)] = stu[i].No;
        };
    }
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
    meEW8Hv9 = GImQHO3[0];
    printf ("%d %d\n", meEW8Hv9, dYPJuriG);
    wLvsOD = GImQHO3[1];
    qTLFmO = GImQHO3[2];
    printf ("%d %d\n", wLvsOD, smax);
    printf ("%d %d\n", qTLFmO, tmax);
}

