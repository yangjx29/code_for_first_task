void  main () {
    int FJRWq26 [(10418 - 418)], HHvrBtZWmg [(10501 - 501)];
    int h97SLRc, SEOHsI, Yb2VAZ, gVYyof8, HVrtMCizPkJe, IAlyGT, brPRGj, bFNKtYe;
    scanf ("%d %d", &FJRWq26[(706 - 706)], &HHvrBtZWmg[(632 - 632)]);
    {
        h97SLRc = 128 - 128;
        while (h97SLRc < (10559 - 559)) {
            if (FJRWq26[h97SLRc] == (290 - 289)) {
                Yb2VAZ = h97SLRc + (693 - 691);
                break;
            }
            else
                FJRWq26[h97SLRc + (272 - 271)] = FJRWq26[h97SLRc] / (718 - 716);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            h97SLRc = h97SLRc + 1;
        };
    }
    for (h97SLRc = (789 - 789); h97SLRc < 10000; h97SLRc = h97SLRc + 1) {
        if (HHvrBtZWmg[h97SLRc] == 1) {
            gVYyof8 = h97SLRc + (833 - 831);
            break;
        }
        else
            HHvrBtZWmg[h97SLRc + 1] = HHvrBtZWmg[h97SLRc] / 2;
    }
    brPRGj = gVYyof8 / 2;
    IAlyGT = Yb2VAZ / 2;
    for (h97SLRc = (517 - 517); h97SLRc < IAlyGT; h97SLRc = h97SLRc + 1) {
        HVrtMCizPkJe = FJRWq26[h97SLRc];
        FJRWq26[h97SLRc] = FJRWq26[Yb2VAZ -h97SLRc - 1];
        FJRWq26[Yb2VAZ -h97SLRc - 1] = HVrtMCizPkJe;
    }
    for (h97SLRc = 0; h97SLRc < brPRGj; h97SLRc++) {
        HVrtMCizPkJe = HHvrBtZWmg[h97SLRc];
        HHvrBtZWmg[h97SLRc] = HHvrBtZWmg[gVYyof8 - h97SLRc - 1];
        HHvrBtZWmg[gVYyof8 - h97SLRc - 1] = HVrtMCizPkJe;
    }
    {
        h97SLRc = 0;
        while (h97SLRc < Yb2VAZ) {
            if (FJRWq26[h97SLRc] == HHvrBtZWmg[h97SLRc])
                bFNKtYe = FJRWq26[h97SLRc];
            h97SLRc = h97SLRc + 1;
        };
    }
    printf ("%d", bFNKtYe);
}

