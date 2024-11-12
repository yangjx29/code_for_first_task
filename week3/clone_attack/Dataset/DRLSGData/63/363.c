void  main () {
    int GzAFOahYC;
    int Ui0kOvFwMU;
    int lKIXOPMVTb8;
    int f5KsC3M0d;
    int brz2KiFEXx [(550 - 450)] [(633 - 533)];
    int rxsRP0LY [(594 - 494)] [(1060 - 960)];
    int lPBkZcISzl6 [(609 - 509)] [(923 - 823)];
    int eDqtCn;
    int rEwujye;
    int nNsn510;
    int FscA95fi;
    scanf ("%d %d", &eDqtCn, &rEwujye);
    GzAFOahYC = (34 - 34);
    Ui0kOvFwMU = (403 - 403);
    FscA95fi = (978 - 978);
    nNsn510 = (713 - 713);
    for (nNsn510 = (883 - 883); nNsn510 < eDqtCn; nNsn510++) {
        FscA95fi = (1168 - 555) - (731 - 118);
        while (FscA95fi < rEwujye) {
            scanf ("%d", &brz2KiFEXx[nNsn510][FscA95fi]);
            FscA95fi++;
        }
    }
    scanf ("%d %d", &f5KsC3M0d, &lKIXOPMVTb8);
    for (Ui0kOvFwMU = (417 - 417); Ui0kOvFwMU < f5KsC3M0d; Ui0kOvFwMU++) {
        GzAFOahYC = 404 - 404;
        while (GzAFOahYC < lKIXOPMVTb8) {
            scanf ("%d", &rxsRP0LY[Ui0kOvFwMU][GzAFOahYC]);
            GzAFOahYC++;
        }
    }
    {
        nNsn510 = (462 - 244) - (1160 - 942);
        while (nNsn510 < eDqtCn) {
            {
                GzAFOahYC = (442 - 370) - 72;
                while (GzAFOahYC < lKIXOPMVTb8) {
                    lPBkZcISzl6[nNsn510][GzAFOahYC] = (136 - 136);
                    {
                        FscA95fi = (231 - 120) - 111;
                        while (FscA95fi < rEwujye) {
                            lPBkZcISzl6[nNsn510][GzAFOahYC] += brz2KiFEXx[nNsn510][FscA95fi] * rxsRP0LY[FscA95fi][GzAFOahYC];
                            FscA95fi++;
                        }
                    }
                    GzAFOahYC++;
                }
            }
            nNsn510++;
        }
    }
    {
        nNsn510 = (1434 - 906) - 528;
        while (nNsn510 < eDqtCn) {
            printf ("%d", lPBkZcISzl6[nNsn510][(441 - 441)]);
            for (GzAFOahYC = (894 - 893); GzAFOahYC < lKIXOPMVTb8; GzAFOahYC++)
                printf (" %d", lPBkZcISzl6[nNsn510][GzAFOahYC]);
            nNsn510++;
        }
    }
}

