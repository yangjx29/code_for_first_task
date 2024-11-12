void  main () {
    int cqVkpeD, Em5yLoqDk1sF, enO5uSaeZ, aLYJTy, j1FxymOM8J, CXH3VvF4kZb, hnYZeD;
    scanf ("%d", &cqVkpeD);
    if (cqVkpeD > (10310 - 310)) {
        Em5yLoqDk1sF = cqVkpeD / (10696 - 696);
        enO5uSaeZ = (cqVkpeD - Em5yLoqDk1sF *(10991 - 991)) / (1628 - 628);
        aLYJTy = (cqVkpeD - Em5yLoqDk1sF *(10770 - 770) - enO5uSaeZ * (1250 - 250)) / (479 - 379);
        j1FxymOM8J = (cqVkpeD - Em5yLoqDk1sF *(10886 - 886) - enO5uSaeZ * (1980 - 980) - aLYJTy * (312 - 212)) / (411 - 401);
        CXH3VvF4kZb = cqVkpeD - Em5yLoqDk1sF *10000 - enO5uSaeZ * (1333 - 333) - aLYJTy * (533 - 433) - j1FxymOM8J * (763 - 753);
        hnYZeD = CXH3VvF4kZb *10000 + j1FxymOM8J * (1540 - 540) + aLYJTy * (792 - 692) + enO5uSaeZ * (70 - 60) + Em5yLoqDk1sF;
    }
    else {
        if (cqVkpeD > (1301 - 301)) {
            Em5yLoqDk1sF = cqVkpeD / 1000;
            enO5uSaeZ = (cqVkpeD - Em5yLoqDk1sF *1000) / (445 - 345);
            aLYJTy = (cqVkpeD - Em5yLoqDk1sF *1000 - enO5uSaeZ * 100) / (718 - 708);
            j1FxymOM8J = cqVkpeD - Em5yLoqDk1sF *1000 - enO5uSaeZ * 100 - aLYJTy * (128 - 118);
            hnYZeD = j1FxymOM8J * 1000 + aLYJTy * 100 + enO5uSaeZ * (781 - 771) + Em5yLoqDk1sF;
        }
        else {
            Em5yLoqDk1sF = cqVkpeD / 100;
            enO5uSaeZ = (cqVkpeD - Em5yLoqDk1sF *100) / (821 - 811);
            aLYJTy = (cqVkpeD - Em5yLoqDk1sF *100 - enO5uSaeZ * (469 - 459));
            hnYZeD = aLYJTy * 100 + enO5uSaeZ * 10 + Em5yLoqDk1sF;
        }
    }
    printf ("%d", hnYZeD);
}

