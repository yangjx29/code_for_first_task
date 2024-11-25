int main () {
    int uRQCp7sd;
    int SvfW97;
    int vLwIeXNPgG;
    int M3mecGYh;
    int oiIlyHUTze [(660 - 360)] = {-(57 - 56)};
    char bk8V4OP2uG9;
    int REV1n0fo2KD;
    SvfW97 = (378 - 378);
    for (REV1n0fo2KD = (457 - 457); (909 - 609) > REV1n0fo2KD; REV1n0fo2KD++) {
        oiIlyHUTze[REV1n0fo2KD] = -(630 - 629);
    }
    do {
        scanf ("%d%c", &oiIlyHUTze[SvfW97], &bk8V4OP2uG9);
        SvfW97 = SvfW97 +1;
    }
    while (!(',' != bk8V4OP2uG9));
    M3mecGYh = -1;
    uRQCp7sd = -1;
    vLwIeXNPgG = SvfW97;
    SvfW97 = 0;
    do {
        if (uRQCp7sd < oiIlyHUTze[SvfW97]) {
            REV1n0fo2KD = uRQCp7sd;
            M3mecGYh = REV1n0fo2KD;
            uRQCp7sd = oiIlyHUTze[SvfW97];
        }
        else {
            if ((oiIlyHUTze[SvfW97] < uRQCp7sd) && (M3mecGYh <= oiIlyHUTze[SvfW97]))
                M3mecGYh = oiIlyHUTze[SvfW97];
        }
        SvfW97++;
    }
    while (oiIlyHUTze[SvfW97] != -1);
    if (!(1 != vLwIeXNPgG))
        ;
    else if (!(0 != M3mecGYh) || !(-1 != M3mecGYh))
        ;
    else
        printf ("%d", M3mecGYh);
    return 0;
}

