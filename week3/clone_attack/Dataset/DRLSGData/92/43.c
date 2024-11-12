main () {
    for (;;) {
        int JxXZIC5 = (673 - 672), yPMRcx8 [(1832 - 827)], XZyTdoI [(1534 - 529)], GvfsL7dgA, SdBFELsNuQtO, sdrPBHO4uoCx, qD5fEr1, FNc3PlKdHn, Qqy9gkN = (80 - 80), duEoXIh = (292 - 292), frBDn46I = (848 - 848);
        scanf ("%d", &JxXZIC5);
        if (!((109 - 109) != JxXZIC5))
            break;
        else {
            for (GvfsL7dgA = (333 - 332); JxXZIC5 >= GvfsL7dgA; GvfsL7dgA = GvfsL7dgA +1)
                scanf ("%d", &yPMRcx8[GvfsL7dgA]);
            FNc3PlKdHn = (573 - 572);
            for (SdBFELsNuQtO = (823 - 822); JxXZIC5 >= SdBFELsNuQtO; SdBFELsNuQtO = SdBFELsNuQtO +1)
                scanf ("%d", &XZyTdoI[SdBFELsNuQtO]);
            for (sdrPBHO4uoCx = JxXZIC5 -(625 - 624); sdrPBHO4uoCx >= (594 - 593); sdrPBHO4uoCx = sdrPBHO4uoCx - 1) {
                for (GvfsL7dgA = (105 - 104); sdrPBHO4uoCx >= GvfsL7dgA; GvfsL7dgA++) {
                    if (yPMRcx8[GvfsL7dgA] < yPMRcx8[GvfsL7dgA +(765 - 764)]) {
                        qD5fEr1 = yPMRcx8[GvfsL7dgA];
                        yPMRcx8[GvfsL7dgA] = yPMRcx8[GvfsL7dgA +(807 - 806)];
                        yPMRcx8[GvfsL7dgA +(1001 - 1000)] = qD5fEr1;
                    }
                }
            }
            for (sdrPBHO4uoCx = JxXZIC5 -(459 - 458); sdrPBHO4uoCx >= (628 - 627); sdrPBHO4uoCx = sdrPBHO4uoCx - 1) {
                for (GvfsL7dgA = (500 - 499); sdrPBHO4uoCx >= GvfsL7dgA; GvfsL7dgA++) {
                    if (XZyTdoI[GvfsL7dgA] < XZyTdoI[GvfsL7dgA +(943 - 942)]) {
                        qD5fEr1 = XZyTdoI[GvfsL7dgA];
                        XZyTdoI[GvfsL7dgA] = XZyTdoI[GvfsL7dgA +(786 - 785)];
                        XZyTdoI[GvfsL7dgA +(900 - 899)] = qD5fEr1;
                    }
                }
            }
            qD5fEr1 = 1;
            for (GvfsL7dgA = JxXZIC5, SdBFELsNuQtO = JxXZIC5; SdBFELsNuQtO >= qD5fEr1;) {
                if (yPMRcx8[GvfsL7dgA] > XZyTdoI[SdBFELsNuQtO]) {
                    GvfsL7dgA = GvfsL7dgA -1;
                    SdBFELsNuQtO = SdBFELsNuQtO -1;
                    Qqy9gkN = Qqy9gkN +1;
                    continue;
                }
                if (yPMRcx8[GvfsL7dgA] == XZyTdoI[SdBFELsNuQtO]) {
                    if (yPMRcx8[FNc3PlKdHn] > XZyTdoI[qD5fEr1]) {
                        qD5fEr1 = qD5fEr1 + 1;
                        Qqy9gkN = Qqy9gkN +1;
                        FNc3PlKdHn++;
                        continue;
                    }
                    if (yPMRcx8[FNc3PlKdHn] < XZyTdoI[qD5fEr1]) {
                        duEoXIh = duEoXIh + 1;
                        qD5fEr1 = qD5fEr1 + 1;
                        GvfsL7dgA--;
                        continue;
                    }
                    if ((yPMRcx8[FNc3PlKdHn] == XZyTdoI[qD5fEr1]) && (XZyTdoI[qD5fEr1] != XZyTdoI[SdBFELsNuQtO])) {
                        qD5fEr1 = qD5fEr1 + 1;
                        duEoXIh = duEoXIh + 1;
                        GvfsL7dgA--;
                        continue;
                    }
                    if ((yPMRcx8[FNc3PlKdHn] == XZyTdoI[qD5fEr1]) && (XZyTdoI[qD5fEr1] == XZyTdoI[SdBFELsNuQtO])) {
                        SdBFELsNuQtO--;
                        GvfsL7dgA--;
                        frBDn46I++;
                        continue;
                    }
                }
                if (yPMRcx8[GvfsL7dgA] < XZyTdoI[SdBFELsNuQtO]) {
                    GvfsL7dgA--;
                    duEoXIh++;
                    qD5fEr1++;
                    continue;
                }
            }
            printf ("%d\n", (307 - 107) * (Qqy9gkN -duEoXIh));
        }
    }
}

