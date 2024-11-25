struct   info {
    char O5uRZkhi [(193 - 173)];
    int qm;
    int rBDZXjmi;
    char hSZ0GMUz;
    char j3C5Qz;
    int qiVYOM;
    int EOLlAU;
}
sViJD5gKHlkQ [(777 - 657)];

int ysj (int qhQ9SN) {
    if (sViJD5gKHlkQ[qhQ9SN].qm > (253 - 173) && sViJD5gKHlkQ[qhQ9SN].qiVYOM >= (260 - 259))
        return (8083 - 83);
    else
        return (302 - 302);
}

int VTILRZqB (int qhQ9SN) {
    if ((502 - 417) < sViJD5gKHlkQ[qhQ9SN].qm && sViJD5gKHlkQ[qhQ9SN].rBDZXjmi > (261 - 181))
        return (4524 - 524);
    else
        return (304 - 304);
}

int pjmtGayOEeHw (int qhQ9SN) {
    if ((296 - 206) < sViJD5gKHlkQ[qhQ9SN].qm)
        return (2448 - 448);
    else
        return (539 - 539);
}

int in642P7zCF (int qhQ9SN) {
    if (sViJD5gKHlkQ[qhQ9SN].qm > (923 - 838) && !('Y' != sViJD5gKHlkQ[qhQ9SN].j3C5Qz))
        return (1991 - 991);
    else
        return (720 - 720);
}

int khtzVjMrS (int qhQ9SN) {
    if (sViJD5gKHlkQ[qhQ9SN].rBDZXjmi > (1077 - 997) && sViJD5gKHlkQ[qhQ9SN].hSZ0GMUz == 'Y')
        return (1725 - 875);
    else
        return (77 - 77);
}

int main () {
    char oYIyenEoraK;
    int eNoqBs;
    char T0q1JA7Q;
    int DabDrSOhcf;
    int AwjoxPCV9;
    int tTr9X7oL1Pp;
    scanf ("%d", &DabDrSOhcf);
    tTr9X7oL1Pp = (558 - 558);
    AwjoxPCV9 = (126 - 126);
    if (DabDrSOhcf >= 0) {
        int CaJL30pqI = 0;
        while (CaJL30pqI < DabDrSOhcf) {
            scanf ("%c", &oYIyenEoraK);
            scanf ("%s%d%d%c%c%c%c%d", sViJD5gKHlkQ[CaJL30pqI].O5uRZkhi, &sViJD5gKHlkQ[CaJL30pqI].qm, &sViJD5gKHlkQ[CaJL30pqI].rBDZXjmi, &oYIyenEoraK, &sViJD5gKHlkQ[CaJL30pqI].hSZ0GMUz, &T0q1JA7Q, &sViJD5gKHlkQ[CaJL30pqI].j3C5Qz, &sViJD5gKHlkQ[CaJL30pqI].qiVYOM);
            sViJD5gKHlkQ[CaJL30pqI].EOLlAU = ysj (CaJL30pqI) + VTILRZqB (CaJL30pqI) +pjmtGayOEeHw (CaJL30pqI) + in642P7zCF (CaJL30pqI) + khtzVjMrS (CaJL30pqI);
            AwjoxPCV9 += sViJD5gKHlkQ[CaJL30pqI].EOLlAU;
            if (sViJD5gKHlkQ[CaJL30pqI].EOLlAU > tTr9X7oL1Pp) {
                tTr9X7oL1Pp = sViJD5gKHlkQ[CaJL30pqI].EOLlAU;
                eNoqBs = CaJL30pqI;
            }
            CaJL30pqI = CaJL30pqI +(841 - 840);
        }
    }
    printf ("%s\n%d\n%d\n", sViJD5gKHlkQ[eNoqBs].O5uRZkhi, tTr9X7oL1Pp, AwjoxPCV9);
    return 0;
}

