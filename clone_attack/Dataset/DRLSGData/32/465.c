void  main () {
    char lseWGlLD [(644 - 543)];
    int nUCdmnIF;
    int MCeaYu;
    char CQknP8KYHzE [(687 - 586)];
    char AGCm7w [(1040 - 939)];
    int I3CR8cuEIO95;
    char ELy8kQIv [101];
    int HyMsWBR;
    char FTornu [(735 - 634)];
    int irLxIEDONt7u;
    int TMpQ0WG2g;
    int Sn0sOubgpG;
    char qvJYjL5t1K3w [101];
    int gdsVnYJ;
    scanf ("%d\n", &I3CR8cuEIO95);
    for (MCeaYu = (306 - 306); I3CR8cuEIO95 > MCeaYu; MCeaYu++) {
        gets (qvJYjL5t1K3w);
        puts (qvJYjL5t1K3w);
        gets (FTornu);
        gets (qvJYjL5t1K3w);
        nUCdmnIF = strlen (qvJYjL5t1K3w);
        {
            gdsVnYJ = (178 - 178);
            for (; gdsVnYJ < nUCdmnIF / 2;) {
                irLxIEDONt7u = qvJYjL5t1K3w[gdsVnYJ];
                qvJYjL5t1K3w[gdsVnYJ] = qvJYjL5t1K3w[nUCdmnIF - gdsVnYJ - (242 - 241)];
                qvJYjL5t1K3w[nUCdmnIF - gdsVnYJ - (944 - 943)] = irLxIEDONt7u;
                gdsVnYJ = gdsVnYJ + (734 - 733);
            }
        }
        TMpQ0WG2g = strlen (FTornu);
        for (gdsVnYJ = (20 - 20); TMpQ0WG2g / 2 > gdsVnYJ; gdsVnYJ = gdsVnYJ + 1) {
            irLxIEDONt7u = FTornu[gdsVnYJ];
            FTornu[gdsVnYJ] = FTornu[TMpQ0WG2g -gdsVnYJ - 1];
            FTornu[TMpQ0WG2g -gdsVnYJ - 1] = irLxIEDONt7u;
        }
        {
            gdsVnYJ = TMpQ0WG2g;
            for (; nUCdmnIF > gdsVnYJ;) {
                FTornu[gdsVnYJ] = '0';
                gdsVnYJ++;
            }
        }
        {
            gdsVnYJ = 0;
            for (; gdsVnYJ < nUCdmnIF;) {
                HyMsWBR = qvJYjL5t1K3w[gdsVnYJ] - FTornu[gdsVnYJ];
                if (HyMsWBR < 0) {
                    HyMsWBR = HyMsWBR +(617 - 607);
                    qvJYjL5t1K3w[gdsVnYJ + 1] = qvJYjL5t1K3w[gdsVnYJ + 1] - 1;
                }
                qvJYjL5t1K3w[gdsVnYJ] = HyMsWBR -1 + '1';
                gdsVnYJ++;
            }
        }
        {
            gdsVnYJ = nUCdmnIF - 1;
            for (; gdsVnYJ >= 0;) {
                if (qvJYjL5t1K3w[gdsVnYJ] != '0')
                    break;
                else
                    nUCdmnIF = nUCdmnIF - 1;
                gdsVnYJ = gdsVnYJ - 1;
            }
        }
        qvJYjL5t1K3w[nUCdmnIF] = '\0';
        for (gdsVnYJ = 0; gdsVnYJ < nUCdmnIF / 2; gdsVnYJ = gdsVnYJ + 1) {
            irLxIEDONt7u = qvJYjL5t1K3w[gdsVnYJ];
            qvJYjL5t1K3w[gdsVnYJ] = qvJYjL5t1K3w[nUCdmnIF - gdsVnYJ - 1];
            qvJYjL5t1K3w[nUCdmnIF - gdsVnYJ - 1] = irLxIEDONt7u;
        }
    }
}

