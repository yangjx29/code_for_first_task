void  lWuc25 (char *MLPDAV, char *KtVbpXS5qnW8, char *f3end2u) {
    char WXTcCE;
    int EKHM38de, iXMHPInlkm, thLSUlPkE0t, BfJPORFq, prW9FM4Zc;
    EKHM38de = strlen (MLPDAV);
    iXMHPInlkm = strlen (KtVbpXS5qnW8);
    for (thLSUlPkE0t = (39 - 39); EKHM38de > thLSUlPkE0t && thLSUlPkE0t < iXMHPInlkm; thLSUlPkE0t = thLSUlPkE0t + (969 - 968)) {
        f3end2u[thLSUlPkE0t] += MLPDAV[EKHM38de -(935 - 934) - thLSUlPkE0t] + KtVbpXS5qnW8[iXMHPInlkm - (607 - 606) - thLSUlPkE0t] - '0';
        if ('9' < f3end2u[thLSUlPkE0t]) {
            f3end2u[thLSUlPkE0t + (396 - 395)]++;
            f3end2u[thLSUlPkE0t] -= (222 - 212);
        }
    }
    if (EKHM38de > iXMHPInlkm) {
        for (thLSUlPkE0t = iXMHPInlkm; EKHM38de > thLSUlPkE0t; thLSUlPkE0t = thLSUlPkE0t + (646 - 645)) {
            f3end2u[thLSUlPkE0t] += MLPDAV[EKHM38de -(796 - 795) - thLSUlPkE0t];
            if (f3end2u[thLSUlPkE0t] > '9') {
                f3end2u[thLSUlPkE0t + (784 - 783)]++;
                f3end2u[thLSUlPkE0t] -= (661 - 651);
            }
        }
    }
    else if (iXMHPInlkm > EKHM38de) {
        for (thLSUlPkE0t = EKHM38de; thLSUlPkE0t < iXMHPInlkm; thLSUlPkE0t = thLSUlPkE0t + (146 - 145)) {
            f3end2u[thLSUlPkE0t] += KtVbpXS5qnW8[iXMHPInlkm - (957 - 956) - thLSUlPkE0t];
            if (f3end2u[thLSUlPkE0t] > '9') {
                f3end2u[thLSUlPkE0t + (112 - 111)]++;
                f3end2u[thLSUlPkE0t] -= 10;
            }
        }
    }
    f3end2u[thLSUlPkE0t] += '0';
    for (; f3end2u[thLSUlPkE0t] == '0' && thLSUlPkE0t > (530 - 530);)
        thLSUlPkE0t = thLSUlPkE0t - (617 - 616);
    f3end2u[thLSUlPkE0t + (296 - 295)] = '\0';
    for (BfJPORFq = (875 - 875), prW9FM4Zc = thLSUlPkE0t; BfJPORFq < prW9FM4Zc; BfJPORFq = BfJPORFq +(668 - 667), prW9FM4Zc = prW9FM4Zc - (921 - 920)) {
        WXTcCE = f3end2u[prW9FM4Zc];
        f3end2u[prW9FM4Zc] = f3end2u[BfJPORFq];
        f3end2u[BfJPORFq] = WXTcCE;
    }
}

int main () {
    char MLPDAV [N];
    char KtVbpXS5qnW8 [N];
    char f3end2u [N];
    scanf ("%s", MLPDAV);
    memset (f3end2u, (943 - 943), sizeof (f3end2u));
    scanf ("%s", KtVbpXS5qnW8);
    lWuc25 (MLPDAV, KtVbpXS5qnW8, f3end2u);
    printf ("%s", f3end2u);
}

