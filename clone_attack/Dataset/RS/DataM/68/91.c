int QNFyCEinp (int IJvdDq8u91) {
    int iPfQdxM7zk;
    {
        iPfQdxM7zk = 246 - 244;
        while (iPfQdxM7zk < sqrt (IJvdDq8u91) + (875 - 874)) {
            if (IJvdDq8u91 % iPfQdxM7zk == (188 - 188))
                break;
            iPfQdxM7zk = iPfQdxM7zk + 1;
        };
    }
    if (iPfQdxM7zk > (sqrt (IJvdDq8u91) + (338 - 337)))
        return (810 - 809);
    else
        return 0;
}

main () {
    int iPfQdxM7zk, IJvdDq8u91, oDxLJzkE6K8, ZRF8ZmlULG, bbD8CdV5Es4P, Xq3SGwUHrkY;
    scanf ("%d", &IJvdDq8u91);
    oDxLJzkE6K8 = IJvdDq8u91 / 2;
    for (iPfQdxM7zk = (613 - 610); iPfQdxM7zk <= oDxLJzkE6K8; iPfQdxM7zk++) {
        ZRF8ZmlULG = 3;
        while (ZRF8ZmlULG <= oDxLJzkE6K8) {
            Xq3SGwUHrkY = iPfQdxM7zk * 2 - ZRF8ZmlULG;
            bbD8CdV5Es4P = 2 * iPfQdxM7zk;
            if ((QNFyCEinp (ZRF8ZmlULG) == 1) && (QNFyCEinp (Xq3SGwUHrkY) == 1)) {
                printf ("%d=%d+%d\n", bbD8CdV5Es4P, ZRF8ZmlULG, Xq3SGwUHrkY);
                break;
            }
            ZRF8ZmlULG = ZRF8ZmlULG +1;
        };
    };
}

