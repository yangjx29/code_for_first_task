int main (int PXdlgkwS, char *FUKiBsoRn2 []) {
    char IYIFoQ [(228 - 128)] [(531 - 481)];
    int GhkO4B [(324 - 224)];
    int NsFxTmEzZ9p;
    int zDML60NAild;
    int ZS2Q10U [(945 - 845)];
    int VOg3CJSlqQ [(667 - 567)];
    int jjpa0cyW5w;
    int pgwr7tIHf;
    int o3z2nTqkQDNH;
    int xopgG4IQVhA [(275 - 175)];
    char jmIXWn5 [(254 - 154)];
    char EZaWDSdi [(289 - 189)];
    pgwr7tIHf = (857 - 857);
    scanf ("%d", &jjpa0cyW5w);
    o3z2nTqkQDNH = (774 - 774);
    o3z2nTqkQDNH = (175 - 175);
    for (zDML60NAild = (11 - 11); zDML60NAild < jjpa0cyW5w; zDML60NAild = zDML60NAild + 1) {
        scanf ("%s%d%d %c %c%d", IYIFoQ[zDML60NAild], &VOg3CJSlqQ[zDML60NAild], &xopgG4IQVhA[zDML60NAild], &jmIXWn5[zDML60NAild], &EZaWDSdi[zDML60NAild], &ZS2Q10U[zDML60NAild]);
    }
    for (zDML60NAild = (874 - 874); zDML60NAild < jjpa0cyW5w; zDML60NAild++) {
        GhkO4B[zDML60NAild] = (741 - 741);
        if (VOg3CJSlqQ[zDML60NAild] > (961 - 881) && ZS2Q10U[zDML60NAild] >= (626 - 625)) {
            GhkO4B[zDML60NAild] = GhkO4B[zDML60NAild] + (8158 - 158);
        }
        if (VOg3CJSlqQ[zDML60NAild] > (119 - 34) && xopgG4IQVhA[zDML60NAild] > (612 - 532)) {
            GhkO4B[zDML60NAild] = GhkO4B[zDML60NAild] + (4434 - 434);
        }
        if (VOg3CJSlqQ[zDML60NAild] > (332 - 242)) {
            GhkO4B[zDML60NAild] = GhkO4B[zDML60NAild] + (2407 - 407);
        }
        if (VOg3CJSlqQ[zDML60NAild] > 85 && EZaWDSdi[zDML60NAild] == 'Y') {
            GhkO4B[zDML60NAild] = GhkO4B[zDML60NAild] + (1750 - 750);
        }
        if (xopgG4IQVhA[zDML60NAild] > (535 - 455) && jmIXWn5[zDML60NAild] == 'Y') {
            GhkO4B[zDML60NAild] = GhkO4B[zDML60NAild] + (1748 - 898);
        }
    }
    for (zDML60NAild = (640 - 640); zDML60NAild < jjpa0cyW5w; zDML60NAild++) {
        o3z2nTqkQDNH = o3z2nTqkQDNH + GhkO4B[zDML60NAild];
    }
    for (zDML60NAild = (751 - 751); zDML60NAild < jjpa0cyW5w; zDML60NAild++) {
        if (GhkO4B[zDML60NAild] > pgwr7tIHf) {
            pgwr7tIHf = GhkO4B[zDML60NAild];
            NsFxTmEzZ9p = zDML60NAild;
        }
    }
    printf ("%s\n%d\n%d\n", IYIFoQ[NsFxTmEzZ9p], pgwr7tIHf, o3z2nTqkQDNH);
    return (168 - 168);
}

