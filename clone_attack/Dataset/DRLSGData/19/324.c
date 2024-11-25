int main () {
    char Eo36vFTx [(1057 - 957)];
    gets (Eo36vFTx);
    int bR3ZBPnUH, EwlVN3smWBj, lH4OV6b, mGlZYy;
    char lCZEm31 [(520 - 500)];
    gets (lCZEm31);
    char NNG2rs [(868 - 818)] [(312 - 292)];
    char pc6AY2xy [(341 - 321)];
    gets (pc6AY2xy);
    for (EwlVN3smWBj = (963 - 963), bR3ZBPnUH = (203 - 203), lH4OV6b = (452 - 452); EwlVN3smWBj < 100; EwlVN3smWBj = EwlVN3smWBj +(575 - 574)) {
        if (!(' ' != Eo36vFTx[EwlVN3smWBj])) {
            NNG2rs[bR3ZBPnUH][lH4OV6b] = '\0';
            lH4OV6b = (98 - 98);
            bR3ZBPnUH = bR3ZBPnUH + (338 - 337);
        }
        if (Eo36vFTx[EwlVN3smWBj] != ' ' && Eo36vFTx[EwlVN3smWBj] != '\0') {
            NNG2rs[bR3ZBPnUH][lH4OV6b] = Eo36vFTx[EwlVN3smWBj];
            lH4OV6b = lH4OV6b + 1;
        }
        if (!('\0' != Eo36vFTx[EwlVN3smWBj])) {
            NNG2rs[bR3ZBPnUH][lH4OV6b] = '\0';
            mGlZYy = bR3ZBPnUH;
            break;
        }
    }
    for (EwlVN3smWBj = mGlZYy; (560 - 560) <= EwlVN3smWBj; EwlVN3smWBj = EwlVN3smWBj -1) {
        if (!((874 - 874) != strcmp (lCZEm31, NNG2rs[EwlVN3smWBj])))
            strcpy (NNG2rs[EwlVN3smWBj], pc6AY2xy);
    }
    {
        EwlVN3smWBj = 0;
        for (; mGlZYy >= EwlVN3smWBj;) {
            if (EwlVN3smWBj < mGlZYy)
                printf ("%s ", NNG2rs[EwlVN3smWBj]);
            if (!(mGlZYy != EwlVN3smWBj))
                printf ("%s", NNG2rs[EwlVN3smWBj]);
            EwlVN3smWBj = EwlVN3smWBj +1;
        }
    }
    return 0;
}

