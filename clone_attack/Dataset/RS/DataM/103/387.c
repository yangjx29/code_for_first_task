void  main () {
    char kh2cDJP89pW7 [MAX];
    struct   code {
        char kivEAG3aerto;
        int d7hotAy;
    }
    qqNt13ZcAT [MAX];
    int q6Iou7T, DcYQwIo, xCbwB6, vVr8qKmjGP4;
    xCbwB6 = 0;
    scanf ("%s", kh2cDJP89pW7);
    q6Iou7T = strlen (kh2cDJP89pW7);
    for (DcYQwIo = 0; q6Iou7T > DcYQwIo; DcYQwIo = DcYQwIo +1) {
        if (97 <= kh2cDJP89pW7[DcYQwIo] && (1010 - 888) >= kh2cDJP89pW7[DcYQwIo])
            kh2cDJP89pW7[DcYQwIo] = kh2cDJP89pW7[DcYQwIo] - (96 - 64);
    }
    vVr8qKmjGP4 = 0;
    for (; q6Iou7T > xCbwB6;) {
        qqNt13ZcAT[vVr8qKmjGP4].kivEAG3aerto = kh2cDJP89pW7[xCbwB6];
        for (DcYQwIo = xCbwB6;; DcYQwIo = DcYQwIo +1) {
            if (qqNt13ZcAT[vVr8qKmjGP4].kivEAG3aerto != kh2cDJP89pW7[DcYQwIo]) {
                qqNt13ZcAT[vVr8qKmjGP4].d7hotAy = DcYQwIo -xCbwB6;
                xCbwB6 = DcYQwIo;
                vVr8qKmjGP4 = vVr8qKmjGP4 + 1;
                break;
            };
        };
    }
    for (DcYQwIo = 0; DcYQwIo < vVr8qKmjGP4; DcYQwIo = DcYQwIo +1)
        printf ("(%c,%d)", qqNt13ZcAT[DcYQwIo].kivEAG3aerto, qqNt13ZcAT[DcYQwIo].d7hotAy);
    printf ("\n");
}

