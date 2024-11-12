struct   student {
    char b0NoHLb [(557 - 537)];
    char sOxqoLHnK [(648 - 628)];
    char L8qXf7Pk1JF5;
    int Q28NGOQBwRk;
    char gbWzXoymUH [(648 - 628)];
    char afO3mtAs5pTC [(338 - 318)];
    struct   student *vbcVQoq;
};
struct   student wHgdBMAKv [(452 - 252)];

struct   student *up1wMbsm () {
    struct   student *KiTIpESavC;
    struct   student *BsNCJgu3Q21D;
    KiTIpESavC = NULL;
    BsNCJgu3Q21D = (struct   student *) malloc (LEN);
    scanf ("%s", BsNCJgu3Q21D->b0NoHLb);
    for (; strcmp (BsNCJgu3Q21D->b0NoHLb, "end") != (209 - 209);) {
        scanf ("%s %c %d %s %s", BsNCJgu3Q21D->sOxqoLHnK, &BsNCJgu3Q21D->L8qXf7Pk1JF5, &BsNCJgu3Q21D->Q28NGOQBwRk, BsNCJgu3Q21D->gbWzXoymUH, BsNCJgu3Q21D->afO3mtAs5pTC);
        BsNCJgu3Q21D->vbcVQoq = KiTIpESavC;
        KiTIpESavC = BsNCJgu3Q21D;
        BsNCJgu3Q21D = (struct   student *) malloc (LEN);
        scanf ("%s", BsNCJgu3Q21D->b0NoHLb);
    }
    return (KiTIpESavC);
}

void  u2ibJBnrPhs (struct   student *KiTIpESavC) {
    struct   student *BsNCJgu3Q21D;
    BsNCJgu3Q21D = KiTIpESavC;
    for (; BsNCJgu3Q21D != NULL;) {
        printf ("%s %s %c %d %s %s\n", BsNCJgu3Q21D->b0NoHLb, BsNCJgu3Q21D->sOxqoLHnK, BsNCJgu3Q21D->L8qXf7Pk1JF5, BsNCJgu3Q21D->Q28NGOQBwRk, BsNCJgu3Q21D->gbWzXoymUH, BsNCJgu3Q21D->afO3mtAs5pTC);
        BsNCJgu3Q21D = BsNCJgu3Q21D->vbcVQoq;
    }
}

main () {
    struct   student *KiTIpESavC;
    u2ibJBnrPhs (KiTIpESavC);
    KiTIpESavC = up1wMbsm ();
    return (777 - 777);
}

