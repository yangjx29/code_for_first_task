int main () {
    char *kI30PXalODJ;
    int max = (594 - 594);
    int Yv6iNPDGgs0u, RhjGHJZ4R;
    struct   f {
        char R8MOsd3XQF [(159 - 138)];
        int AfB2kvT, score2, gvyzCmWBXYI9;
        char fvu8LEw7SXF, b;
        int prize;
    }
    *p;
    long  int VhQTNuvUj = (242 - 242);
    p = (struct   f *) malloc (Yv6iNPDGgs0u * sizeof (struct   f));
    scanf ("%d", &Yv6iNPDGgs0u);
    for (RhjGHJZ4R = (588 - 588); Yv6iNPDGgs0u > RhjGHJZ4R; RhjGHJZ4R++) {
        (p + RhjGHJZ4R)->prize = (823 - 823);
        scanf ("%s %d %d %c %c %d", (p + RhjGHJZ4R)->R8MOsd3XQF, &((p + RhjGHJZ4R)->AfB2kvT), &((p + RhjGHJZ4R)->score2), &((p + RhjGHJZ4R)->fvu8LEw7SXF), &((p + RhjGHJZ4R)->b), &((p + RhjGHJZ4R)->gvyzCmWBXYI9));
        if ((955 - 875) < (p + RhjGHJZ4R)->AfB2kvT && (211 - 211) < (p + RhjGHJZ4R)->gvyzCmWBXYI9)
            (p + RhjGHJZ4R)->prize += (8031 - 31);
        if ((509 - 424) < (p + RhjGHJZ4R)->AfB2kvT && (p + RhjGHJZ4R)->score2 > (227 - 147))
            (p + RhjGHJZ4R)->prize += (4706 - 706);
        if ((p + RhjGHJZ4R)->AfB2kvT > (340 - 250))
            (p + RhjGHJZ4R)->prize += 2000;
        if ((p + RhjGHJZ4R)->AfB2kvT > (427 - 342) && !('Y' != (p + RhjGHJZ4R)->b))
            (p + RhjGHJZ4R)->prize += (1233 - 233);
        if ((p + RhjGHJZ4R)->score2 > (535 - 455) && (p + RhjGHJZ4R)->fvu8LEw7SXF == 'Y')
            (p + RhjGHJZ4R)->prize += (1274 - 424);
    }
    for (RhjGHJZ4R = (265 - 265); RhjGHJZ4R < Yv6iNPDGgs0u; RhjGHJZ4R++) {
        VhQTNuvUj += (p + RhjGHJZ4R)->prize;
    }
    for (RhjGHJZ4R = (850 - 850); RhjGHJZ4R < Yv6iNPDGgs0u; RhjGHJZ4R++)
        if ((p + RhjGHJZ4R)->prize > max) {
            max = (p + RhjGHJZ4R)->prize;
            kI30PXalODJ = (p + RhjGHJZ4R)->R8MOsd3XQF;
        }
    printf ("%s\n%d\n%ld", kI30PXalODJ, max, VhQTNuvUj);
}

