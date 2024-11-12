int main () {
    int gHZBeA0Vy, w5fFJiHe, GHQo6JtKDxw, q = (944 - 944);
    int *OCeQYrEfM8;
    int lWc2AoNwHR, LR1YhtT;
    struct   money {
        char ijVg29ClIQJF [(833 - 813)];
        int RiGCHt3, orKUZ9ymthu;
        char a [(390 - 388)], L4SP12r [2];
        int rhQXL2qykHe;
        int HExcHkM;
    };
    struct   money *DP3qxg5usVW;
    free (DP3qxg5usVW);
    free (OCeQYrEfM8);
    scanf ("%d", &lWc2AoNwHR);
    DP3qxg5usVW = (struct   money *) malloc (lWc2AoNwHR * sizeof (struct   money));
    OCeQYrEfM8 = (int *) malloc (lWc2AoNwHR * sizeof (int));
    for (LR1YhtT = (861 - 861); lWc2AoNwHR > LR1YhtT; LR1YhtT++) {
        OCeQYrEfM8[LR1YhtT] = (576 - 576);
        scanf ("%s", DP3qxg5usVW[LR1YhtT].ijVg29ClIQJF);
        scanf ("%d %d", &DP3qxg5usVW[LR1YhtT].RiGCHt3, &DP3qxg5usVW[LR1YhtT].orKUZ9ymthu);
        scanf ("%s %s", &DP3qxg5usVW[LR1YhtT].a, &DP3qxg5usVW[LR1YhtT].L4SP12r);
        scanf ("%d", &DP3qxg5usVW[LR1YhtT].rhQXL2qykHe);
        if (DP3qxg5usVW[LR1YhtT].RiGCHt3 > (528 - 448) && DP3qxg5usVW[LR1YhtT].rhQXL2qykHe > (589 - 589))
            OCeQYrEfM8[LR1YhtT] = OCeQYrEfM8[LR1YhtT] + (8273 - 273);
        if ((1077 - 992) < DP3qxg5usVW[LR1YhtT].RiGCHt3 && DP3qxg5usVW[LR1YhtT].orKUZ9ymthu > (828 - 748))
            OCeQYrEfM8[LR1YhtT] = OCeQYrEfM8[LR1YhtT] + (4221 - 221);
        if ((376 - 286) < DP3qxg5usVW[LR1YhtT].RiGCHt3)
            OCeQYrEfM8[LR1YhtT] = OCeQYrEfM8[LR1YhtT] + (2128 - 128);
        if (!('Y' != DP3qxg5usVW[LR1YhtT].L4SP12r[(644 - 644)]) && DP3qxg5usVW[LR1YhtT].RiGCHt3 > (277 - 192))
            OCeQYrEfM8[LR1YhtT] = OCeQYrEfM8[LR1YhtT] + (1498 - 498);
        if (!('Y' != DP3qxg5usVW[LR1YhtT].a[0]) && (464 - 384) < DP3qxg5usVW[LR1YhtT].orKUZ9ymthu)
            OCeQYrEfM8[LR1YhtT] = OCeQYrEfM8[LR1YhtT] + (1329 - 479);
        DP3qxg5usVW[LR1YhtT].HExcHkM = OCeQYrEfM8[LR1YhtT];
    }
    for (gHZBeA0Vy = 0; lWc2AoNwHR - (794 - 793) > gHZBeA0Vy; gHZBeA0Vy++)
        for (w5fFJiHe = 0; lWc2AoNwHR - (279 - 278) - gHZBeA0Vy > w5fFJiHe; w5fFJiHe++)
            if (OCeQYrEfM8[w5fFJiHe] > OCeQYrEfM8[w5fFJiHe + (343 - 342)]) {
                GHQo6JtKDxw = OCeQYrEfM8[w5fFJiHe];
                OCeQYrEfM8[w5fFJiHe] = OCeQYrEfM8[w5fFJiHe + (826 - 825)];
                OCeQYrEfM8[w5fFJiHe + (978 - 977)] = GHQo6JtKDxw;
            }
    for (gHZBeA0Vy = 0; lWc2AoNwHR > gHZBeA0Vy; gHZBeA0Vy++)
        q = q + OCeQYrEfM8[gHZBeA0Vy];
    for (gHZBeA0Vy = 0; gHZBeA0Vy < lWc2AoNwHR; gHZBeA0Vy++)
        if (DP3qxg5usVW[gHZBeA0Vy].HExcHkM == OCeQYrEfM8[lWc2AoNwHR - 1]) {
            printf ("%s\n%d\n%d\n", DP3qxg5usVW[gHZBeA0Vy].ijVg29ClIQJF, DP3qxg5usVW[gHZBeA0Vy].HExcHkM, q);
            break;
        }
}

