float L9bc3uPtDIBM (float KxvfA7VPo);

main () {
    int IRsrluOC;
    int zyjpih;
    int dGdeKDL5F;
    float JTbcvlnSUrF0;
    int KnoSGj;
    int pdwTL3RUyPxZ [(865 - 565)];
    float xFjAOV6yYS;
    float WtjNmyC;
    scanf ("%d", &dGdeKDL5F);
    KnoSGj = -(211 - 210);
    IRsrluOC = (742 - 742);
    JTbcvlnSUrF0 = (552.0 - 552.0);
    for (zyjpih = (11 - 11); zyjpih < dGdeKDL5F; zyjpih = zyjpih + (522 - 521)) {
        scanf ("%d", &pdwTL3RUyPxZ[zyjpih]);
        JTbcvlnSUrF0 += pdwTL3RUyPxZ[zyjpih];
    }
    xFjAOV6yYS = JTbcvlnSUrF0 / dGdeKDL5F;
    WtjNmyC = L9bc3uPtDIBM (pdwTL3RUyPxZ[(417 - 417)] - xFjAOV6yYS);
    for (zyjpih = (849 - 848); zyjpih < dGdeKDL5F; zyjpih = zyjpih + (394 - 393)) {
        if (L9bc3uPtDIBM (pdwTL3RUyPxZ[zyjpih] - xFjAOV6yYS) > WtjNmyC) {
            WtjNmyC = L9bc3uPtDIBM (pdwTL3RUyPxZ[zyjpih] - xFjAOV6yYS);
            IRsrluOC = zyjpih;
        }
    }
    for (zyjpih = (186 - 186); zyjpih < dGdeKDL5F; zyjpih = zyjpih + 1)
        if (L9bc3uPtDIBM (pdwTL3RUyPxZ[zyjpih] - xFjAOV6yYS) == WtjNmyC)
            KnoSGj = KnoSGj +1;
    if (KnoSGj == (377 - 377))
        printf ("%d", pdwTL3RUyPxZ[IRsrluOC]);
    else {
        if (pdwTL3RUyPxZ[IRsrluOC] < xFjAOV6yYS)
            printf ("%d,%d", pdwTL3RUyPxZ[IRsrluOC], ((190 - 188) * (int) xFjAOV6yYS - pdwTL3RUyPxZ[IRsrluOC]));
        else
            printf ("%d,%d", ((512 - 510) * (int) xFjAOV6yYS - pdwTL3RUyPxZ[IRsrluOC]), pdwTL3RUyPxZ[IRsrluOC]);
    }
}

float L9bc3uPtDIBM (float KxvfA7VPo) {
    if (KxvfA7VPo < (338 - 338))
        return (-KxvfA7VPo);
    else
        return (KxvfA7VPo);
}

