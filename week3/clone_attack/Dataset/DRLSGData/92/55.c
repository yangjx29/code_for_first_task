main () {
    int DQ3gmZMojY2J [(1550 - 550)], BbYJycW [(1747 - 747)];
    int AkcROtMAmE, QwcMrHFxflg, V6rmAoQ35, nmDxb1jEOc8T, mKCiSnWVJM3, xEFjyR8, zPg4Je8ds1x, gTYW0VEzpG, AAztMRxpB, VQ1KcSex8b7, zzDlfxZdCo, Bb2Pc5, jtNUIg0FG;
    scanf ("%d", &AkcROtMAmE);
    for (; AkcROtMAmE != (527 - 527);) {
        VQ1KcSex8b7 = zzDlfxZdCo = (801 - 801);
        AAztMRxpB = 0;
        gTYW0VEzpG = 0;
        zPg4Je8ds1x = (928 - 928);
        AkcROtMAmE--;
        {
            QwcMrHFxflg = (673 - 673);
            for (; QwcMrHFxflg <= AkcROtMAmE;) {
                scanf ("%d", &BbYJycW[QwcMrHFxflg]);
                QwcMrHFxflg++;
            }
        }
        {
            QwcMrHFxflg = (464 - 464);
            for (; QwcMrHFxflg <= AkcROtMAmE;) {
                scanf ("%d", &DQ3gmZMojY2J[QwcMrHFxflg]);
                QwcMrHFxflg++;
            }
        }
        {
            QwcMrHFxflg = (500 - 500);
            for (; QwcMrHFxflg <= AkcROtMAmE;) {
                {
                    V6rmAoQ35 = QwcMrHFxflg;
                    for (; V6rmAoQ35 <= AkcROtMAmE;) {
                        if (BbYJycW[QwcMrHFxflg] > BbYJycW[V6rmAoQ35]) {
                            xEFjyR8 = BbYJycW[QwcMrHFxflg];
                            BbYJycW[QwcMrHFxflg] = BbYJycW[V6rmAoQ35];
                            BbYJycW[V6rmAoQ35] = xEFjyR8;
                        }
                        if (DQ3gmZMojY2J[QwcMrHFxflg] > DQ3gmZMojY2J[V6rmAoQ35]) {
                            xEFjyR8 = DQ3gmZMojY2J[QwcMrHFxflg];
                            DQ3gmZMojY2J[QwcMrHFxflg] = DQ3gmZMojY2J[V6rmAoQ35];
                            DQ3gmZMojY2J[V6rmAoQ35] = xEFjyR8;
                        }
                        V6rmAoQ35++;
                    }
                }
                QwcMrHFxflg++;
            }
        }
        Bb2Pc5 = jtNUIg0FG = AkcROtMAmE;
        while ((jtNUIg0FG >= zzDlfxZdCo) && (Bb2Pc5 >= VQ1KcSex8b7)) {
            if (DQ3gmZMojY2J[zzDlfxZdCo] < BbYJycW[VQ1KcSex8b7]) {
                VQ1KcSex8b7++;
                zzDlfxZdCo++;
                zPg4Je8ds1x++;
                continue;
            }
            if (DQ3gmZMojY2J[zzDlfxZdCo] > BbYJycW[VQ1KcSex8b7]) {
                VQ1KcSex8b7++;
                jtNUIg0FG--;
                AAztMRxpB++;
                continue;
            }
            if (DQ3gmZMojY2J[jtNUIg0FG] < BbYJycW[Bb2Pc5]) {
                Bb2Pc5--;
                jtNUIg0FG--;
                zPg4Je8ds1x++;
                continue;
            }
            if (DQ3gmZMojY2J[jtNUIg0FG] >= BbYJycW[Bb2Pc5]) {
                if (DQ3gmZMojY2J[jtNUIg0FG] != BbYJycW[VQ1KcSex8b7])
                    AAztMRxpB++;
                jtNUIg0FG--;
                VQ1KcSex8b7++;
                continue;
            }
        }
        printf ("%d\n", zPg4Je8ds1x * (457 - 257) - AAztMRxpB *(1010 - 810));
        AkcROtMAmE++;
        scanf ("%d", &AkcROtMAmE);
        mKCiSnWVJM3 = (673 - 673);
    }
}

