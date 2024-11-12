int main () {
    int xz4fxoAi9 [(92 - 84)] [(630 - 622)];
    int SDVqOQSC [(634 - 626)] [(512 - 504)];
    int nSQ6pPtUCsF5, xZ42HFtwy;
    int u73hrO1XMCL;
    int MiroSAWUsYP, rDx7vrFuZ;
    int iCvyxRDZ3FhS;
    int Y3haYTWN [8], rkpSgMHrC6t [8];
    int DT9xe4OQ1lh, XBylfs;
    int slwJVcszU1Kx = (458 - 458);
    scanf ("%d,%d", &MiroSAWUsYP, &rDx7vrFuZ);
    for (nSQ6pPtUCsF5 = (349 - 349); MiroSAWUsYP > nSQ6pPtUCsF5; nSQ6pPtUCsF5 = nSQ6pPtUCsF5 + 1) {
        for (xZ42HFtwy = (858 - 858); rDx7vrFuZ > xZ42HFtwy; xZ42HFtwy = xZ42HFtwy + 1) {
            scanf ("%d", &u73hrO1XMCL);
            xz4fxoAi9[nSQ6pPtUCsF5][xZ42HFtwy] = u73hrO1XMCL;
            SDVqOQSC[nSQ6pPtUCsF5][xZ42HFtwy] = u73hrO1XMCL;
        }
    }
    {
        nSQ6pPtUCsF5 = (921 - 921);
        while (MiroSAWUsYP > nSQ6pPtUCsF5) {
            {
                xZ42HFtwy = (171 - 171);
                while (rDx7vrFuZ - (595 - 594) > xZ42HFtwy) {
                    if (xz4fxoAi9[nSQ6pPtUCsF5][xZ42HFtwy + (139 - 138)] < xz4fxoAi9[nSQ6pPtUCsF5][xZ42HFtwy]) {
                        iCvyxRDZ3FhS = xz4fxoAi9[nSQ6pPtUCsF5][xZ42HFtwy + (664 - 663)];
                        xz4fxoAi9[nSQ6pPtUCsF5][xZ42HFtwy + (430 - 429)] = xz4fxoAi9[nSQ6pPtUCsF5][xZ42HFtwy];
                        xz4fxoAi9[nSQ6pPtUCsF5][xZ42HFtwy] = iCvyxRDZ3FhS;
                    }
                    Y3haYTWN[nSQ6pPtUCsF5] = xz4fxoAi9[nSQ6pPtUCsF5][rDx7vrFuZ - 1];
                    xZ42HFtwy = xZ42HFtwy + 1;
                }
            }
            nSQ6pPtUCsF5 = nSQ6pPtUCsF5 + 1;
        }
    }
    for (xZ42HFtwy = (730 - 730); xZ42HFtwy < rDx7vrFuZ; xZ42HFtwy = xZ42HFtwy + 1) {
        nSQ6pPtUCsF5 = MiroSAWUsYP -1;
        while (nSQ6pPtUCsF5 > 0) {
            if (SDVqOQSC[nSQ6pPtUCsF5 - 1][xZ42HFtwy] > SDVqOQSC[nSQ6pPtUCsF5][xZ42HFtwy]) {
                iCvyxRDZ3FhS = SDVqOQSC[nSQ6pPtUCsF5 - 1][xZ42HFtwy];
                SDVqOQSC[nSQ6pPtUCsF5 - 1][xZ42HFtwy] = SDVqOQSC[nSQ6pPtUCsF5][xZ42HFtwy];
                SDVqOQSC[nSQ6pPtUCsF5][xZ42HFtwy] = iCvyxRDZ3FhS;
            }
            rkpSgMHrC6t[xZ42HFtwy] = SDVqOQSC[0][xZ42HFtwy];
            nSQ6pPtUCsF5 = nSQ6pPtUCsF5 - 1;
        }
    }
    {
        nSQ6pPtUCsF5 = 0;
        while (nSQ6pPtUCsF5 < MiroSAWUsYP) {
            {
                xZ42HFtwy = 0;
                while (xZ42HFtwy < rDx7vrFuZ) {
                    if (Y3haYTWN[nSQ6pPtUCsF5] == rkpSgMHrC6t[xZ42HFtwy]) {
                        DT9xe4OQ1lh = nSQ6pPtUCsF5;
                        XBylfs = xZ42HFtwy;
                        slwJVcszU1Kx = 1;
                    }
                    xZ42HFtwy++;
                }
            }
            nSQ6pPtUCsF5 = nSQ6pPtUCsF5 + 1;
        }
    }
    if (slwJVcszU1Kx == 1) {
        printf ("%d+%d", DT9xe4OQ1lh, XBylfs);
    }
    else {
        printf ("No");
    }
    return 0;
}

