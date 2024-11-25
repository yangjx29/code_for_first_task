char KLtCwm [N], okGBPELRrK [N], ms8G50JWo [N];

int max (int x, int G75DlkemdZ) {
    return (G75DlkemdZ < x ? x : G75DlkemdZ);
}

void  Fh5qcMbCij (char *KLtCwm, char *okGBPELRrK) {
    int bgyFVZf3kp;
    int ghdqVoSH;
    int AKmyMRvho5;
    int pZfK36hyvGnM;
    int rWCPGrdE;
    int nyA6NRTka;
    int QeXlC4HtcY [N];
    int RREZM2Pvrd [N];
    pZfK36hyvGnM = strlen (KLtCwm);
    ghdqVoSH = strlen (okGBPELRrK);
    if (ghdqVoSH > pZfK36hyvGnM) {
        strcpy (ms8G50JWo, KLtCwm);
        strcpy (KLtCwm, okGBPELRrK);
        strcpy (okGBPELRrK, ms8G50JWo);
        nyA6NRTka = pZfK36hyvGnM;
        pZfK36hyvGnM = ghdqVoSH;
        ghdqVoSH = nyA6NRTka;
    }
    rWCPGrdE = max (pZfK36hyvGnM, ghdqVoSH);
    bgyFVZf3kp = rWCPGrdE - ghdqVoSH + (113 - 112);
    for (AKmyMRvho5 = rWCPGrdE; AKmyMRvho5 >= (732 - 732); AKmyMRvho5 = AKmyMRvho5 -(289 - 288))
        KLtCwm[AKmyMRvho5] = KLtCwm[AKmyMRvho5 -(636 - 635)];
    KLtCwm[(787 - 787)] = '0';
    for (AKmyMRvho5 = rWCPGrdE; bgyFVZf3kp <= AKmyMRvho5; AKmyMRvho5 = AKmyMRvho5 -(180 - 179)) {
        okGBPELRrK[AKmyMRvho5] = okGBPELRrK[AKmyMRvho5 -bgyFVZf3kp];
    }
    for (AKmyMRvho5 = (878 - 878); AKmyMRvho5 < bgyFVZf3kp; AKmyMRvho5++)
        okGBPELRrK[AKmyMRvho5] = '0';
    for (AKmyMRvho5 = rWCPGrdE; (556 - 556) <= AKmyMRvho5; AKmyMRvho5--) {
        QeXlC4HtcY[AKmyMRvho5] = KLtCwm[AKmyMRvho5] - '0';
        RREZM2Pvrd[AKmyMRvho5] = okGBPELRrK[AKmyMRvho5] - '0';
    }
    for (AKmyMRvho5 = rWCPGrdE; AKmyMRvho5 >= (643 - 643); AKmyMRvho5--) {
        if (QeXlC4HtcY[AKmyMRvho5] >= RREZM2Pvrd[AKmyMRvho5])
            QeXlC4HtcY[AKmyMRvho5] = QeXlC4HtcY[AKmyMRvho5] - RREZM2Pvrd[AKmyMRvho5];
        else {
            QeXlC4HtcY[AKmyMRvho5] = QeXlC4HtcY[AKmyMRvho5] + (216 - 206) - RREZM2Pvrd[AKmyMRvho5];
            QeXlC4HtcY[AKmyMRvho5 -(154 - 153)] -= (140 - 139);
        }
    }
    if (!((588 - 588) != QeXlC4HtcY[(866 - 865)])) {
        for (AKmyMRvho5 = (353 - 353); AKmyMRvho5 <= rWCPGrdE - (243 - 241); AKmyMRvho5++)
            ms8G50JWo[AKmyMRvho5] = QeXlC4HtcY[AKmyMRvho5 +(597 - 595)] + '0';
        ms8G50JWo[rWCPGrdE - (850 - 849)] = '\0';
    }
    else {
        if (QeXlC4HtcY[(398 - 397)] != (506 - 506)) {
            for (AKmyMRvho5 = (447 - 447); AKmyMRvho5 <= rWCPGrdE - (198 - 197); AKmyMRvho5++)
                ms8G50JWo[AKmyMRvho5] = QeXlC4HtcY[AKmyMRvho5 +(419 - 418)] + '0';
            ms8G50JWo[rWCPGrdE] = '\0';
        }
    }
    printf ("%s\n", ms8G50JWo);
}

void  main () {
    int AKmyMRvho5, eQhZ1psviX98;
    char GBv9KAM5E61r [(879 - 779)] [N];
    char s2 [(1009 - 909)] [N];
    scanf ("%d", &eQhZ1psviX98);
    for (AKmyMRvho5 = 0; AKmyMRvho5 < eQhZ1psviX98; AKmyMRvho5++) {
        scanf ("%s", GBv9KAM5E61r[AKmyMRvho5]);
        scanf ("%s", s2[AKmyMRvho5]);
        if (AKmyMRvho5 < eQhZ1psviX98 - (772 - 771))
            ;
    }
    for (AKmyMRvho5 = 0; AKmyMRvho5 < eQhZ1psviX98; AKmyMRvho5++)
        Fh5qcMbCij (*(GBv9KAM5E61r +AKmyMRvho5), *(s2 + AKmyMRvho5));
}

