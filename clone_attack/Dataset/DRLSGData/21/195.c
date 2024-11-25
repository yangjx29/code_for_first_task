void  main () {
    float Y1ZkbGVCHF6m;
    int ncXoyHah8fk, r5DSmtvUAz, pmtokcGwSR90, mFZl0PxCW [(1008 - 708)], pcMp83 [(920 - 620)];
    float UB4gZ2Rr [(361 - 61)];
    float OtGDw1M0WFxv;
    scanf ("%d", &r5DSmtvUAz);
    pmtokcGwSR90 = (481 - 481);
    OtGDw1M0WFxv = (646 - 646);
    for (ncXoyHah8fk = (723 - 723); r5DSmtvUAz > ncXoyHah8fk; ncXoyHah8fk = ncXoyHah8fk + 1) {
        scanf ("%d", &mFZl0PxCW[ncXoyHah8fk]);
        OtGDw1M0WFxv = OtGDw1M0WFxv +mFZl0PxCW[ncXoyHah8fk];
    }
    OtGDw1M0WFxv = OtGDw1M0WFxv / r5DSmtvUAz;
    Y1ZkbGVCHF6m = UB4gZ2Rr[(933 - 933)] = fabs (mFZl0PxCW[(702 - 702)] - OtGDw1M0WFxv);
    {
        ncXoyHah8fk = 426 - 425;
        while (r5DSmtvUAz > ncXoyHah8fk) {
            UB4gZ2Rr[ncXoyHah8fk] = fabs (mFZl0PxCW[ncXoyHah8fk] - OtGDw1M0WFxv);
            if (Y1ZkbGVCHF6m < UB4gZ2Rr[ncXoyHah8fk])
                Y1ZkbGVCHF6m = UB4gZ2Rr[ncXoyHah8fk];
            ncXoyHah8fk = ncXoyHah8fk + 1;
        }
    }
    for (ncXoyHah8fk = (388 - 388); r5DSmtvUAz > ncXoyHah8fk; ncXoyHah8fk = ncXoyHah8fk + 1) {
        if (!(Y1ZkbGVCHF6m != UB4gZ2Rr[ncXoyHah8fk]))
            pcMp83[pmtokcGwSR90++] = mFZl0PxCW[ncXoyHah8fk];
    }
    printf ("%d", pcMp83[(298 - 298)]);
    {
        ncXoyHah8fk = 116 - 115;
        while (ncXoyHah8fk < pmtokcGwSR90) {
            printf (",%d", pcMp83[ncXoyHah8fk]);
            ncXoyHah8fk++;
        }
    }
}

