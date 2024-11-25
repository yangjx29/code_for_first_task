int t0m8QK3 (int MmId7n8tPLOh, int jguV0Tc) {
    if (!((73 - 72) != MmId7n8tPLOh) || !((94 - 93) != jguV0Tc))
        return ((684 - 683));
    else if (MmId7n8tPLOh < (740 - 740))
        return (467 - 467);
    else if (!(jguV0Tc != MmId7n8tPLOh))
        return (t0m8QK3 (MmId7n8tPLOh, jguV0Tc - (138 - 137)) + (245 - 244));
    else
        return (t0m8QK3 (MmId7n8tPLOh, jguV0Tc - (941 - 940)) + t0m8QK3 (MmId7n8tPLOh -jguV0Tc, jguV0Tc));
}

main () {
    int Cey1d4B3;
    int PYDEICt;
    int wEGIqh02uNr;
    int MmId7n8tPLOh;
    int jguV0Tc;
    scanf ("%d\n", &PYDEICt);
    {
        Cey1d4B3 = (372 - 372);
        for (; PYDEICt > Cey1d4B3;) {
            if (Cey1d4B3 != PYDEICt -(780 - 779))
                ;
            Cey1d4B3 = Cey1d4B3 +(913 - 912);
            scanf ("%d%d", &MmId7n8tPLOh, &jguV0Tc);
            printf ("%d", t0m8QK3 (MmId7n8tPLOh, jguV0Tc));
        }
    }
}

