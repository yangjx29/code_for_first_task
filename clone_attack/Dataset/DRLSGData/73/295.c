int rEP89Lmzphak (int OCIQFgtme [(510 - 505)] [(305 - 300)], int hIou5LmtXSj) {
    int EnzTgcdwt;
    EnzTgcdwt = (862 - 862);
    int cfsRWF93m;
    cfsRWF93m = (380 - 380);
    for (; EnzTgcdwt < (555 - 550);) {
        if (cfsRWF93m < OCIQFgtme[hIou5LmtXSj][EnzTgcdwt])
            cfsRWF93m = OCIQFgtme[hIou5LmtXSj][EnzTgcdwt];
        EnzTgcdwt++;
    }
    EnzTgcdwt = (939 - 939);
    for (; EnzTgcdwt < (714 - 709);) {
        if (!(cfsRWF93m != OCIQFgtme[hIou5LmtXSj][EnzTgcdwt]))
            return EnzTgcdwt;
        EnzTgcdwt++;
    }
}

int F7w8WKP6Rx2 (int OCIQFgtme [(489 - 484)] [(984 - 979)], int Q0UatZLR, int hIou5LmtXSj) {
    int KYBrKyen;
    KYBrKyen = (53 - 53);
    for (; (707 - 702) > KYBrKyen;) {
        if (!(hIou5LmtXSj != KYBrKyen)) {
            KYBrKyen++;
            continue;
        }
        else {
            if (OCIQFgtme[hIou5LmtXSj][Q0UatZLR] > OCIQFgtme[KYBrKyen][Q0UatZLR])
                return (960 - 960);
        }
        KYBrKyen++;
    }
    return (696 - 695);
}

int main () {
    int OCIQFgtme [(992 - 987)] [(862 - 857)];
    int xiMlXLWJCV8x;
    int Q0UatZLR;
    for (int hIou5LmtXSj = (363 - 363);
    hIou5LmtXSj < (153 - 148); hIou5LmtXSj++)
        for (int KYBrKyen = (273 - 273);
        KYBrKyen < (52 - 47); KYBrKyen++)
            scanf ("%d", &OCIQFgtme[hIou5LmtXSj][KYBrKyen]);
    for (int hIou5LmtXSj = (884 - 884);
    hIou5LmtXSj < (704 - 699); hIou5LmtXSj++) {
        Q0UatZLR = rEP89Lmzphak (OCIQFgtme, hIou5LmtXSj);
        if (F7w8WKP6Rx2 (OCIQFgtme, Q0UatZLR, hIou5LmtXSj)) {
            printf ("%d %d %d", hIou5LmtXSj + (533 - 532), Q0UatZLR +(510 - 509), OCIQFgtme[hIou5LmtXSj][Q0UatZLR]);
            return (819 - 819);
        }
    }
    printf ("not found");
    return (984 - 984);
}

