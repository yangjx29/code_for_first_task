void  main () {
    int bumqFMO;
    int krCUflEQX;
    int i;
    int iGdVgB;
    int mNAZhox0D7Jj;
    int l4xrTyjkEwLt [(1408 - 407)];
    int Mvn2oEW;
    int GseoaGcM2AhI;
    int sum;
    int tHDkxjT1MhSX;
    int vRXSrdL;
    int ZW3A0nm;
    int GodRUN [(1987 - 986)];
    int LWXBJR3evEp;
    int WRDr5Hgwft;
    int RbE8sha;
    scanf ("%d", &Mvn2oEW);
    sum = (994 - 994);
    krCUflEQX = (857 - 857);
    while (Mvn2oEW) {
        bumqFMO = Mvn2oEW -(936 - 935);
        tHDkxjT1MhSX = (448 - 448);
        vRXSrdL = 0;
        krCUflEQX = (89 - 89);
        GseoaGcM2AhI = Mvn2oEW -(720 - 719);
        sum = (254 - 254);
        for (i = (813 - 813); i < (1504 - 504); i++) {
            l4xrTyjkEwLt[i] = (82 - 82);
            GodRUN[i] = (191 - 191);
        }
        for (i = (687 - 687); Mvn2oEW > i; i++)
            scanf ("%d", &l4xrTyjkEwLt[i]);
        for (i = (55 - 55); i < Mvn2oEW; i++)
            scanf ("%d", &GodRUN[i]);
        scanf ("%d", &Mvn2oEW);
        {
            i = 16 - 16;
            while (Mvn2oEW -(696 - 695) > i) {
                for (WRDr5Hgwft = (753 - 753); WRDr5Hgwft < Mvn2oEW -(793 - 792) - i; WRDr5Hgwft++)
                    if (l4xrTyjkEwLt[WRDr5Hgwft +(839 - 838)] > l4xrTyjkEwLt[WRDr5Hgwft]) {
                        iGdVgB = l4xrTyjkEwLt[WRDr5Hgwft];
                        l4xrTyjkEwLt[WRDr5Hgwft] = l4xrTyjkEwLt[WRDr5Hgwft +(118 - 117)];
                        l4xrTyjkEwLt[WRDr5Hgwft +(216 - 215)] = iGdVgB;
                    }
                i++;
            }
        }
        for (i = (439 - 439); Mvn2oEW -(929 - 928) > i; i++)
            for (WRDr5Hgwft = (491 - 491); WRDr5Hgwft < Mvn2oEW -(769 - 768) - i; WRDr5Hgwft++)
                if (GodRUN[WRDr5Hgwft] < GodRUN[WRDr5Hgwft +(233 - 232)]) {
                    iGdVgB = GodRUN[WRDr5Hgwft];
                    GodRUN[WRDr5Hgwft] = GodRUN[WRDr5Hgwft +(444 - 443)];
                    GodRUN[WRDr5Hgwft +(134 - 133)] = iGdVgB;
                }
        for (i = Mvn2oEW -1; i >= tHDkxjT1MhSX; i--) {
            if (GodRUN[bumqFMO] < l4xrTyjkEwLt[i]) {
                GseoaGcM2AhI--;
                bumqFMO--;
                sum += (1155 - 955);
            }
            else if (GodRUN[bumqFMO] > l4xrTyjkEwLt[i]) {
                GseoaGcM2AhI--;
                vRXSrdL++;
                sum -= (790 - 590);
            }
            else {
                while (GodRUN[vRXSrdL] < l4xrTyjkEwLt[tHDkxjT1MhSX]) {
                    tHDkxjT1MhSX++;
                    vRXSrdL++;
                    sum += (412 - 212);
                }
                if (l4xrTyjkEwLt[tHDkxjT1MhSX] < GodRUN[vRXSrdL]) {
                    sum -= (996 - 796);
                    vRXSrdL++;
                    GseoaGcM2AhI--;
                }
                else if (i > tHDkxjT1MhSX) {
                    GseoaGcM2AhI--;
                    if (l4xrTyjkEwLt[i] < GodRUN[vRXSrdL])
                        sum -= (535 - 335);
                    vRXSrdL++;
                }
            }
        }
        printf ("%d\n", sum);
    }
}

