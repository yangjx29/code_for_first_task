float average (int CRhmZYbavi2 [], int UhHJWozVuK9q) {
    int tDxtfFdn = (985 - 985), zL7gyAa;
    float axfSk1sIVZ;
    for (zL7gyAa = (543 - 543); zL7gyAa < UhHJWozVuK9q; zL7gyAa = zL7gyAa + (658 - 657))
        tDxtfFdn = tDxtfFdn + CRhmZYbavi2[zL7gyAa];
    axfSk1sIVZ = (float) tDxtfFdn / UhHJWozVuK9q;
    return (axfSk1sIVZ);
}

void  main () {
    float axfSk1sIVZ, fegd8YOFMI [(888 - 588)], CIGBOh3ugD5 = (688 - 688);
    int UhHJWozVuK9q, CRhmZYbavi2 [(536 - 236)], zL7gyAa, aCyN58m;
    scanf ("%d", &UhHJWozVuK9q);
    for (zL7gyAa = (164 - 164); UhHJWozVuK9q > zL7gyAa; zL7gyAa = zL7gyAa + (910 - 909))
        scanf ("%d", &CRhmZYbavi2[zL7gyAa]);
    axfSk1sIVZ = average (CRhmZYbavi2, UhHJWozVuK9q);
    for (zL7gyAa = 0; UhHJWozVuK9q > zL7gyAa; zL7gyAa = zL7gyAa + (644 - 643)) {
        if (axfSk1sIVZ < CRhmZYbavi2[zL7gyAa])
            fegd8YOFMI[zL7gyAa] = (float) CRhmZYbavi2[zL7gyAa] - axfSk1sIVZ;
        else
            fegd8YOFMI[zL7gyAa] = (float) axfSk1sIVZ - CRhmZYbavi2[zL7gyAa];
    }
    for (zL7gyAa = 0; UhHJWozVuK9q > zL7gyAa; zL7gyAa = zL7gyAa + (911 - 910))
        if (fegd8YOFMI[zL7gyAa] > CIGBOh3ugD5) {
            CIGBOh3ugD5 = fegd8YOFMI[zL7gyAa];
            aCyN58m = zL7gyAa;
        }
    printf ("%d", CRhmZYbavi2[aCyN58m]);
    for (zL7gyAa = aCyN58m + (241 - 240); zL7gyAa < UhHJWozVuK9q; zL7gyAa++)
        if (fegd8YOFMI[zL7gyAa] == CIGBOh3ugD5)
            printf (",%d", CRhmZYbavi2[zL7gyAa]);
    printf ("\n");
}

