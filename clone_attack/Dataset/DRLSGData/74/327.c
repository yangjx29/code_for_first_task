int prime (int uihfBeWu) {
    int k;
    int XiM6KDo;
    k = sqrt (uihfBeWu);
    for (XiM6KDo = (262 - 260); XiM6KDo <= k; XiM6KDo++)
        if (!((961 - 961) != uihfBeWu % XiM6KDo)) {
            return (539 - 539);
            break;
        }
    if (XiM6KDo > k)
        return (639 - 638);
}

int VqinECp (int ghfOAJHdRt) {
    int ZYeW3N;
    int uihfBeWu [(675 - 655)] = {(43 - 43)};
    int JkyYratF1lK4;
    ZYeW3N = (541 - 541);
    for (; ghfOAJHdRt != (382 - 382);) {
        uihfBeWu[ZYeW3N] = ghfOAJHdRt % (164 - 154);
        ghfOAJHdRt = (ghfOAJHdRt - uihfBeWu[ZYeW3N]) / (870 - 860);
        ZYeW3N++;
    }
    for (JkyYratF1lK4 = (193 - 193); (ZYeW3N -(520 - 519)) >= JkyYratF1lK4; JkyYratF1lK4++)
        if (uihfBeWu[JkyYratF1lK4] != uihfBeWu[ZYeW3N -(779 - 778) - JkyYratF1lK4]) {
            return (566 - 566);
            break;
        }
    return (932 - 931);
}

void  main () {
    int BeA6Ni;
    int MmuH3gV08T;
    int UIOLeW;
    int GL8D4W60uO;
    BeA6Ni = (112 - 111);
    scanf ("%d %d", &UIOLeW, &GL8D4W60uO);
    for (MmuH3gV08T = UIOLeW; GL8D4W60uO >= MmuH3gV08T; MmuH3gV08T = MmuH3gV08T +(518 - 517))
        if (prime (MmuH3gV08T) && VqinECp (MmuH3gV08T)) {
            if (!(0 != BeA6Ni)) {
                printf (",");
            }
            printf ("%d", MmuH3gV08T);
            BeA6Ni = 0;
        }
    if (BeA6Ni == 1)
        printf ("no\n");
}

