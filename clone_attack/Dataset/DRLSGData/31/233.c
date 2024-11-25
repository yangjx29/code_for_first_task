struct   student {
    char me4SK1kAyZg [(677 - 667)];
    char ILcxdZ [(608 - 558)];
    struct   student *PVkShRsU;
};
void  main () {
    struct   student *w0v6CVRzp;
    struct   student *ImJ6D8VXL;
    struct   student *KGdohISnY7u4;
    struct   student *xtpaiLY;
    int mQZHBV7SJoYr;
    mQZHBV7SJoYr = sizeof (struct   student);
    w0v6CVRzp = (struct   student *) malloc (mQZHBV7SJoYr);
    ImJ6D8VXL = (struct   student *) malloc (mQZHBV7SJoYr);
    scanf ("%s", ImJ6D8VXL->me4SK1kAyZg);
    gets (ImJ6D8VXL->ILcxdZ);
    ImJ6D8VXL->PVkShRsU = w0v6CVRzp;
    w0v6CVRzp->PVkShRsU = NULL;
    KGdohISnY7u4 = ImJ6D8VXL;
    xtpaiLY = ImJ6D8VXL;
    {
        for (; true;) {
            KGdohISnY7u4 = (struct   student *) malloc (mQZHBV7SJoYr);
            scanf ("%s", KGdohISnY7u4->me4SK1kAyZg);
            if (!('e' != KGdohISnY7u4->me4SK1kAyZg[(426 - 426)]))
                break;
            gets (KGdohISnY7u4->ILcxdZ);
            KGdohISnY7u4->PVkShRsU = xtpaiLY;
            xtpaiLY = KGdohISnY7u4;
        }
    }
    for (; xtpaiLY->PVkShRsU != NULL;) {
        printf ("%s%s\n", xtpaiLY->me4SK1kAyZg, xtpaiLY->ILcxdZ);
        xtpaiLY = xtpaiLY->PVkShRsU;
    }
}

