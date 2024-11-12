void  main () {
    int LwQtA6 [(493 - 393)] = {(133 - 133)};
    int SLbIzA [(193 - 93)];
    struct   student {
        char ComcvNHrka [20];
        int BrWBIdb4Py;
        int classes;
        char MySEMiT3V;
        char bsM1ZBESV;
        int rzKvjbZHXY;
    };
    struct   student stu [(600 - 500)];
    int AivrB0pNmJ;
    int t;
    int N23Zi1zIK;
    int all;
    scanf ("%d", &AivrB0pNmJ);
    all = (737 - 737);
    {
        N23Zi1zIK = (811 - 811);
        while (AivrB0pNmJ > N23Zi1zIK) {
            scanf ("%s %d %d %c %c %d", stu[N23Zi1zIK].ComcvNHrka, &stu[N23Zi1zIK].BrWBIdb4Py, &stu[N23Zi1zIK].classes, &stu[N23Zi1zIK].MySEMiT3V, &stu[N23Zi1zIK].bsM1ZBESV, &stu[N23Zi1zIK].rzKvjbZHXY);
            N23Zi1zIK = N23Zi1zIK +(444 - 443);
        }
    }
    {
        N23Zi1zIK = (674 - 674);
        for (; N23Zi1zIK < AivrB0pNmJ;) {
            if ((209 - 209) < stu[N23Zi1zIK].rzKvjbZHXY && stu[N23Zi1zIK].BrWBIdb4Py > (374 - 294))
                LwQtA6[N23Zi1zIK] = LwQtA6[N23Zi1zIK] + (8497 - 497);
            if ((862 - 782) < stu[N23Zi1zIK].classes && stu[N23Zi1zIK].BrWBIdb4Py > (840 - 755))
                LwQtA6[N23Zi1zIK] = LwQtA6[N23Zi1zIK] + (4188 - 188);
            if (stu[N23Zi1zIK].BrWBIdb4Py > 90)
                LwQtA6[N23Zi1zIK] = LwQtA6[N23Zi1zIK] + 2000;
            if (stu[N23Zi1zIK].bsM1ZBESV == 'Y' && stu[N23Zi1zIK].BrWBIdb4Py > 85)
                LwQtA6[N23Zi1zIK] = LwQtA6[N23Zi1zIK] + (1212 - 212);
            if (stu[N23Zi1zIK].classes > 80 && stu[N23Zi1zIK].MySEMiT3V == 'Y')
                LwQtA6[N23Zi1zIK] = LwQtA6[N23Zi1zIK] + (1167 - 317);
            N23Zi1zIK = N23Zi1zIK +(735 - 734);
        }
    }
    for (N23Zi1zIK = (528 - 528); N23Zi1zIK < AivrB0pNmJ; N23Zi1zIK++) {
        SLbIzA[N23Zi1zIK] = LwQtA6[N23Zi1zIK];
        all = all + LwQtA6[N23Zi1zIK];
    }
    {
        N23Zi1zIK = (606 - 606);
        while (N23Zi1zIK < AivrB0pNmJ -(831 - 830)) {
            if (SLbIzA[N23Zi1zIK] > SLbIzA[N23Zi1zIK +(205 - 204)])
                SLbIzA[N23Zi1zIK +(380 - 379)] = SLbIzA[N23Zi1zIK];
            N23Zi1zIK++;
        }
    }
    {
        N23Zi1zIK = 0;
        while (N23Zi1zIK < AivrB0pNmJ) {
            if (LwQtA6[N23Zi1zIK] == SLbIzA[AivrB0pNmJ -1]) {
                t = N23Zi1zIK;
                break;
            }
            N23Zi1zIK++;
        }
    }
    printf ("%s\n%d\n%d\n", stu[t].ComcvNHrka, LwQtA6[t], all);
}

