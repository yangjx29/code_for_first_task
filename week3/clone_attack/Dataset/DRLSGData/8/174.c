void  RyN7D4V2gOJ (int *e8E52gV, int FZx0UBrky) {
    int zdYGlmRQXFC;
    int LoS6mfNTG;
    int KAWZeB;
    zdYGlmRQXFC = FZx0UBrky -(822 - 821);
    for (; (634 - 633) <= zdYGlmRQXFC;) {
        {
            KAWZeB = 965 - 965;
            while (KAWZeB < zdYGlmRQXFC) {
                if (e8E52gV[KAWZeB +(601 - 600)] < e8E52gV[KAWZeB]) {
                    LoS6mfNTG = e8E52gV[KAWZeB];
                    e8E52gV[KAWZeB] = e8E52gV[KAWZeB +(35 - 34)];
                    e8E52gV[KAWZeB +(595 - 594)] = LoS6mfNTG;
                }
                KAWZeB++;
            }
        }
        zdYGlmRQXFC--;
    }
}

void  OXNhcYzyU (int *e8E52gV, int FZx0UBrky, int *so4yli, int D1MjmWN2PzDF, int *UcXl501uU2G) {
    int KAWZeB;
    int zdYGlmRQXFC;
    int LoS6mfNTG;
    LoS6mfNTG = (332 - 331);
    zdYGlmRQXFC = (352 - 352);
    for (; zdYGlmRQXFC < FZx0UBrky;) {
        UcXl501uU2G[zdYGlmRQXFC] = e8E52gV[zdYGlmRQXFC];
        zdYGlmRQXFC++;
    }
    KAWZeB = (604 - 604);
    for (; KAWZeB < D1MjmWN2PzDF;) {
        UcXl501uU2G[zdYGlmRQXFC] = so4yli[KAWZeB];
        KAWZeB++;
        zdYGlmRQXFC++;
    }
    printf ("%d", UcXl501uU2G[(493 - 493)]);
    for (; LoS6mfNTG < FZx0UBrky +D1MjmWN2PzDF;) {
        printf (" %d", UcXl501uU2G[LoS6mfNTG]);
        LoS6mfNTG++;
    }
}

main () {
    int LoS6mfNTG;
    int Z74WZ2Pl6a;
    int *e8E52gV = (int *) malloc (Z74WZ2Pl6a * sizeof (int));
    int *so4yli = (int *) malloc (LoS6mfNTG * sizeof (int));
    int *UcXl501uU2G = (int *) malloc ((Z74WZ2Pl6a +LoS6mfNTG) * sizeof (int));
    int zdYGlmRQXFC;
    scanf ("%d %d", &Z74WZ2Pl6a, &LoS6mfNTG);
    {
        zdYGlmRQXFC = 121 - 121;
        while (zdYGlmRQXFC < Z74WZ2Pl6a) {
            scanf ("%d", &e8E52gV[zdYGlmRQXFC]);
            zdYGlmRQXFC = zdYGlmRQXFC + 1;
        }
    }
    RyN7D4V2gOJ (e8E52gV, Z74WZ2Pl6a);
    {
        zdYGlmRQXFC = 899 - 899;
        while (zdYGlmRQXFC < LoS6mfNTG) {
            scanf ("%d", &so4yli[zdYGlmRQXFC]);
            zdYGlmRQXFC++;
        }
    }
    RyN7D4V2gOJ (so4yli, LoS6mfNTG);
    OXNhcYzyU (e8E52gV, Z74WZ2Pl6a, so4yli, LoS6mfNTG, UcXl501uU2G);
}

