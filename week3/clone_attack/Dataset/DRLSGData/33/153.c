int main () {
    char ESTYoH [256];
    char Fb6MtV9LxmZU [256];
    int SovJwNE64;
    int heSdzbHNayg;
    int FjLOXc7N;
    int TzLfp61A;
    int jgRd6WXDKJl;
    int pBuGAh;
    SovJwNE64 = 0;
    heSdzbHNayg = 0;
    for (pBuGAh = 1; TzLfp61A +1 >= pBuGAh; pBuGAh = pBuGAh + 1) {
        gets (ESTYoH);
        FjLOXc7N = strlen (ESTYoH);
        for (SovJwNE64 = 0; SovJwNE64 <= FjLOXc7N -1; SovJwNE64++)
            if (!('A' != ESTYoH[SovJwNE64]))
                Fb6MtV9LxmZU[SovJwNE64] = 'T';
            else if (!('T' != ESTYoH[SovJwNE64]))
                Fb6MtV9LxmZU[SovJwNE64] = 'A';
            else if (ESTYoH[SovJwNE64] == 'C')
                Fb6MtV9LxmZU[SovJwNE64] = 'G';
            else if (ESTYoH[SovJwNE64] == 'G')
                Fb6MtV9LxmZU[SovJwNE64] = 'C';
        for (heSdzbHNayg = 0; heSdzbHNayg < FjLOXc7N -1; heSdzbHNayg = heSdzbHNayg + 1)
            printf ("%c", Fb6MtV9LxmZU[heSdzbHNayg]);
        printf ("%c\n", Fb6MtV9LxmZU[FjLOXc7N -1]);
    }
    scanf ("%d", &TzLfp61A);
    return 0;
}

