int Uyceri2Wj (int VEzqcM) {
    int SHm35wXFRhKO, aJFqKmIN;
    aJFqKmIN = sqrt (VEzqcM);
    for (SHm35wXFRhKO = (828 - 826); SHm35wXFRhKO <= aJFqKmIN; SHm35wXFRhKO = SHm35wXFRhKO +1)
        if (VEzqcM % SHm35wXFRhKO == (937 - 937))
            break;
    if (SHm35wXFRhKO > aJFqKmIN)
        return ((659 - 658));
    else
        return ((907 - 907));
}

int OIKfZF (int VEzqcM) {
    int GrO0RMvYjU = (998 - 998), aJFqKmIN;
    aJFqKmIN = VEzqcM;
    while (aJFqKmIN > (376 - 376)) {
        GrO0RMvYjU = GrO0RMvYjU *(36 - 26) + aJFqKmIN % (692 - 682);
        aJFqKmIN = aJFqKmIN / (501 - 491);
    }
    if (GrO0RMvYjU == VEzqcM)
        return ((913 - 912));
    else
        return ((505 - 505));
}

void  main () {
    int aJFqKmIN, GrO0RMvYjU, SHm35wXFRhKO, kJHUxt08 = (752 - 752);
    scanf ("%d%d", &GrO0RMvYjU, &aJFqKmIN);
    {
        SHm35wXFRhKO = GrO0RMvYjU;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (SHm35wXFRhKO <= aJFqKmIN) {
            if (Uyceri2Wj (SHm35wXFRhKO) &&OIKfZF(SHm35wXFRhKO)) {
                if (kJHUxt08 > (467 - 467))
                    printf (",");
                printf ("%d", SHm35wXFRhKO);
                kJHUxt08 = kJHUxt08 + 1;
            }
            SHm35wXFRhKO = SHm35wXFRhKO +1;
        };
    }
    if (kJHUxt08 == (226 - 226))
        printf ("no");
}

