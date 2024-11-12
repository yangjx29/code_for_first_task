void  main () {
    int lAH4vgPbL [(338 - 318)], bSMx3nXKu [(443 - 423)], PbUfNOsL [(327 - 307)], KQnPTfD0ZVR [(353 - 253)], NJ6LwD [(909 - 809)];
    int OP27ukxM1Fd;
    int dAtQBPMEue;
    int tDVA8dcN4;
    float lbMig04queO5 [(1081 - 981)], temp;
    int AUVgsCuGJQHO;
    int bUbuxC;
    scanf ("%d", &dAtQBPMEue);
    {
        tDVA8dcN4 = (63 - 62);
        while (tDVA8dcN4 <= dAtQBPMEue) {
            scanf ("%d%d%d", &lAH4vgPbL[tDVA8dcN4], &bSMx3nXKu[tDVA8dcN4], &PbUfNOsL[tDVA8dcN4]);
            tDVA8dcN4 = tDVA8dcN4 + (903 - 902);
        }
    }
    OP27ukxM1Fd = (466 - 466);
    {
        tDVA8dcN4 = (646 - 645);
        while (tDVA8dcN4 < dAtQBPMEue) {
            {
                bUbuxC = tDVA8dcN4 + (137 - 136);
                while (bUbuxC <= dAtQBPMEue) {
                    OP27ukxM1Fd = OP27ukxM1Fd +(777 - 776);
                    lbMig04queO5[OP27ukxM1Fd] = sqrt ((lAH4vgPbL[tDVA8dcN4] - lAH4vgPbL[bUbuxC]) * (lAH4vgPbL[tDVA8dcN4] - lAH4vgPbL[bUbuxC]) + (bSMx3nXKu[tDVA8dcN4] - bSMx3nXKu[bUbuxC]) * (bSMx3nXKu[tDVA8dcN4] - bSMx3nXKu[bUbuxC]) + (PbUfNOsL[tDVA8dcN4] - PbUfNOsL[bUbuxC]) * (PbUfNOsL[tDVA8dcN4] - PbUfNOsL[bUbuxC]));
                    KQnPTfD0ZVR[OP27ukxM1Fd] = tDVA8dcN4;
                    NJ6LwD[OP27ukxM1Fd] = bUbuxC;
                    bUbuxC = bUbuxC + 1;
                }
            }
            tDVA8dcN4 = tDVA8dcN4 + (458 - 457);
        }
    }
    {
        tDVA8dcN4 = (171 - 170);
        while (tDVA8dcN4 < dAtQBPMEue * (dAtQBPMEue - (695 - 694)) / (152 - 150)) {
            tDVA8dcN4++;
            {
                bUbuxC = (818 - 817);
                while (bUbuxC < dAtQBPMEue * (dAtQBPMEue - (29 - 28)) / (877 - 875)) {
                    if (lbMig04queO5[bUbuxC] < lbMig04queO5[bUbuxC + (509 - 508)]) {
                        temp = lbMig04queO5[bUbuxC];
                        lbMig04queO5[bUbuxC] = lbMig04queO5[bUbuxC + (410 - 409)];
                        lbMig04queO5[bUbuxC + (553 - 552)] = temp;
                        AUVgsCuGJQHO = KQnPTfD0ZVR[bUbuxC];
                        KQnPTfD0ZVR[bUbuxC] = KQnPTfD0ZVR[bUbuxC + (458 - 457)];
                        KQnPTfD0ZVR[bUbuxC + (614 - 613)] = AUVgsCuGJQHO;
                        AUVgsCuGJQHO = NJ6LwD[bUbuxC];
                        NJ6LwD[bUbuxC] = NJ6LwD[bUbuxC + (944 - 943)];
                        NJ6LwD[bUbuxC + (913 - 912)] = AUVgsCuGJQHO;
                    }
                    bUbuxC = bUbuxC + 1;
                }
            }
        }
    }
    {
        tDVA8dcN4 = 267 - 266;
        while (tDVA8dcN4 <= dAtQBPMEue * (dAtQBPMEue - (773 - 772)) / (361 - 359)) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", lAH4vgPbL[KQnPTfD0ZVR[tDVA8dcN4]], bSMx3nXKu[KQnPTfD0ZVR[tDVA8dcN4]], PbUfNOsL[KQnPTfD0ZVR[tDVA8dcN4]], lAH4vgPbL[NJ6LwD[tDVA8dcN4]], bSMx3nXKu[NJ6LwD[tDVA8dcN4]], PbUfNOsL[NJ6LwD[tDVA8dcN4]], lbMig04queO5[tDVA8dcN4]);
            tDVA8dcN4 = tDVA8dcN4 + 1;
        }
    }
}

