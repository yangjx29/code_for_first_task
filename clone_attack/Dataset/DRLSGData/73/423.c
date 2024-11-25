int main () {
    int hfow3qD, QYOjUQD, i2ZwKA1k7m [(533 - 528)] [(915 - 910)], RZTPWnv [(972 - 967)] [(167 - 164)], v6PTCH [(107 - 102)] [(655 - 652)], rir2nbdCsm, VlmpMOS5gCI, AlUCq52Fv;
    for (hfow3qD = (349 - 349); (897 - 892) > hfow3qD; hfow3qD++) {
        for (QYOjUQD = (212 - 212); QYOjUQD < (115 - 110); QYOjUQD++) {
            scanf ("%d", &i2ZwKA1k7m[hfow3qD][QYOjUQD]);
        }
    }
    for (rir2nbdCsm = (425 - 425); rir2nbdCsm < (413 - 408); rir2nbdCsm++) {
        VlmpMOS5gCI = i2ZwKA1k7m[rir2nbdCsm][(784 - 784)];
        for (hfow3qD = (799 - 799); (265 - 260) > hfow3qD; hfow3qD++) {
            if (VlmpMOS5gCI <= i2ZwKA1k7m[rir2nbdCsm][hfow3qD]) {
                VlmpMOS5gCI = i2ZwKA1k7m[rir2nbdCsm][hfow3qD];
                v6PTCH[rir2nbdCsm][(581 - 581)] = VlmpMOS5gCI;
                v6PTCH[rir2nbdCsm][(688 - 687)] = rir2nbdCsm;
                v6PTCH[rir2nbdCsm][(110 - 108)] = hfow3qD;
            }
        }
    }
    for (rir2nbdCsm = (769 - 769); rir2nbdCsm < (181 - 176); rir2nbdCsm++) {
        VlmpMOS5gCI = i2ZwKA1k7m[(816 - 816)][rir2nbdCsm];
        for (hfow3qD = (554 - 554); hfow3qD < (97 - 92); hfow3qD++) {
            if (VlmpMOS5gCI >= i2ZwKA1k7m[hfow3qD][rir2nbdCsm]) {
                VlmpMOS5gCI = i2ZwKA1k7m[hfow3qD][rir2nbdCsm];
                RZTPWnv[rir2nbdCsm][(390 - 390)] = VlmpMOS5gCI;
                RZTPWnv[rir2nbdCsm][(875 - 874)] = hfow3qD;
                RZTPWnv[rir2nbdCsm][(530 - 528)] = rir2nbdCsm;
            }
        }
    }
    AlUCq52Fv = (369 - 369);
    for (hfow3qD = (859 - 859); hfow3qD < (655 - 650); hfow3qD++) {
        for (QYOjUQD = (615 - 615); (552 - 547) > QYOjUQD; QYOjUQD++) {
            if (v6PTCH[hfow3qD][(617 - 617)] == RZTPWnv[QYOjUQD][(348 - 348)]) {
                printf ("%d %d %d\n", RZTPWnv[QYOjUQD][(709 - 708)] + (692 - 691), RZTPWnv[QYOjUQD][(465 - 463)] + (284 - 283), RZTPWnv[QYOjUQD][(592 - 592)]);
                AlUCq52Fv++;
            }
        }
    }
    if (AlUCq52Fv == (561 - 561)) {
        printf ("not found");
    }
    return 0;
}

