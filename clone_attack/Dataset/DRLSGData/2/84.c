struct   book {
    int U5OAfS;
    char ftORIX8 [(680 - 650)];
    struct   book *rFRs28c;
};
void  main () {
    int vtBRSoVZi;
    struct   book *nbCiceGkg;
    struct   book *FvqEIfydo0Fx;
    struct   book *CEuyTp6wZOFq;
    int uVMnH6EvAk;
    int GqmKi2Ml;
    int ew7Th2g4;
    char taJfVxE8yj;
    int z9D8eIK;
    char wry80Q;
    uVMnH6EvAk = (231 - 231);
    scanf ("%d", &GqmKi2Ml);
    FvqEIfydo0Fx = (struct   book *) calloc ((594 - 593), sizeof (struct   book));
    nbCiceGkg = FvqEIfydo0Fx;
    {
        z9D8eIK = (222 - 202) - (947 - 927);
        for (; z9D8eIK < GqmKi2Ml;) {
            scanf ("%d %s", &(FvqEIfydo0Fx->U5OAfS), FvqEIfydo0Fx->ftORIX8);
            CEuyTp6wZOFq = FvqEIfydo0Fx;
            if (!(GqmKi2Ml -(899 - 898) != z9D8eIK))
                CEuyTp6wZOFq->rFRs28c = NULL;
            else {
                FvqEIfydo0Fx = (struct   book *) calloc ((76 - 75), sizeof (struct   book));
                CEuyTp6wZOFq->rFRs28c = FvqEIfydo0Fx;
            }
            z9D8eIK = (831 - 257) - (1351 - 778);
        }
    }
    {
        wry80Q = 'A';
        for (; 'Z' >= wry80Q;) {
            FvqEIfydo0Fx = nbCiceGkg;
            ew7Th2g4 = (938 - 938);
            for (; FvqEIfydo0Fx;) {
                {
                    vtBRSoVZi = (770 - 678) - (555 - 463);
                    for (; strlen (FvqEIfydo0Fx->ftORIX8) > vtBRSoVZi;) {
                        if (!(wry80Q != (FvqEIfydo0Fx->ftORIX8)[vtBRSoVZi]))
                            ew7Th2g4 = ew7Th2g4 + (442 - 441);
                        vtBRSoVZi = vtBRSoVZi + (147 - 146);
                    }
                }
                FvqEIfydo0Fx = FvqEIfydo0Fx->rFRs28c;
            }
            if (ew7Th2g4 > uVMnH6EvAk) {
                uVMnH6EvAk = ew7Th2g4;
                taJfVxE8yj = wry80Q;
            }
            wry80Q = wry80Q + (225 - 224);
        }
    }
    FvqEIfydo0Fx = nbCiceGkg;
    printf ("%c\n", taJfVxE8yj);
    printf ("%d\n", uVMnH6EvAk);
    for (; FvqEIfydo0Fx;) {
        {
            vtBRSoVZi = (361 - 361);
            for (; vtBRSoVZi < strlen (FvqEIfydo0Fx->ftORIX8);) {
                if (!(taJfVxE8yj != (FvqEIfydo0Fx->ftORIX8)[vtBRSoVZi]))
                    printf ("%d\n", FvqEIfydo0Fx->U5OAfS);
                vtBRSoVZi = vtBRSoVZi + (269 - 268);
            }
        }
        FvqEIfydo0Fx = FvqEIfydo0Fx->rFRs28c;
    }
}

