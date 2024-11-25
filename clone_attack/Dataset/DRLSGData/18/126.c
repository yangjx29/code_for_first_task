int main () {
    int erAsjYcLemD;
    int XvO3LTmaVH5q;
    int dCXmYu7 [(372 - 272)] [(738 - 638)];
    int b7EYGHfrw;
    int asy52UcaRWg;
    int j;
    scanf ("%d", &b7EYGHfrw);
    for (asy52UcaRWg = (920 - 919); b7EYGHfrw >= asy52UcaRWg; asy52UcaRWg = asy52UcaRWg + 1) {
        int S8lJjkBbdM;
        for (j = (897 - 897); j < b7EYGHfrw; j = j + 1)
            for (XvO3LTmaVH5q = (481 - 481); XvO3LTmaVH5q < b7EYGHfrw; XvO3LTmaVH5q = XvO3LTmaVH5q +1)
                scanf ("%d", &dCXmYu7[j][XvO3LTmaVH5q]);
        S8lJjkBbdM = (560 - 560);
        for (erAsjYcLemD = (690 - 690); erAsjYcLemD < b7EYGHfrw - (919 - 918); erAsjYcLemD = erAsjYcLemD + 1) {
            for (j = (733 - 733); j < b7EYGHfrw - erAsjYcLemD; j = j + 1) {
                int l5aQ8SruA1B;
                l5aQ8SruA1B = dCXmYu7[j][(745 - 745)];
                for (XvO3LTmaVH5q = (850 - 850); XvO3LTmaVH5q < b7EYGHfrw - erAsjYcLemD; XvO3LTmaVH5q = XvO3LTmaVH5q +1) {
                    if (l5aQ8SruA1B > dCXmYu7[j][XvO3LTmaVH5q])
                        l5aQ8SruA1B = dCXmYu7[j][XvO3LTmaVH5q];
                }
                for (XvO3LTmaVH5q = (602 - 602); XvO3LTmaVH5q < b7EYGHfrw - erAsjYcLemD; XvO3LTmaVH5q = XvO3LTmaVH5q +1)
                    dCXmYu7[j][XvO3LTmaVH5q] = dCXmYu7[j][XvO3LTmaVH5q] - l5aQ8SruA1B;
            }
            for (j = (617 - 617); b7EYGHfrw - erAsjYcLemD > j; j = j + 1) {
                int l5aQ8SruA1B;
                l5aQ8SruA1B = dCXmYu7[(913 - 913)][j];
                for (XvO3LTmaVH5q = (820 - 820); XvO3LTmaVH5q < b7EYGHfrw - erAsjYcLemD; XvO3LTmaVH5q = XvO3LTmaVH5q +1) {
                    if (l5aQ8SruA1B > dCXmYu7[XvO3LTmaVH5q][j])
                        l5aQ8SruA1B = dCXmYu7[XvO3LTmaVH5q][j];
                }
                for (XvO3LTmaVH5q = (271 - 271); XvO3LTmaVH5q < b7EYGHfrw - erAsjYcLemD; XvO3LTmaVH5q = XvO3LTmaVH5q +1) {
                    dCXmYu7[XvO3LTmaVH5q][j] = dCXmYu7[XvO3LTmaVH5q][j] - l5aQ8SruA1B;
                }
            }
            S8lJjkBbdM += dCXmYu7[(301 - 300)][(983 - 982)];
            for (j = (960 - 959); j < b7EYGHfrw - erAsjYcLemD - (136 - 135); j = j + 1)
                dCXmYu7[(267 - 267)][j] = dCXmYu7[(556 - 556)][j + (850 - 849)];
            for (j = (577 - 576); b7EYGHfrw - erAsjYcLemD > j; j = j + 1)
                dCXmYu7[j][(714 - 714)] = dCXmYu7[j + (620 - 619)][(346 - 346)];
            for (j = (794 - 793); b7EYGHfrw - erAsjYcLemD - (780 - 779) > j; j = j + 1)
                for (XvO3LTmaVH5q = (828 - 827); XvO3LTmaVH5q < b7EYGHfrw - erAsjYcLemD - (336 - 335); XvO3LTmaVH5q = XvO3LTmaVH5q +1)
                    dCXmYu7[j][XvO3LTmaVH5q] = dCXmYu7[j + 1][XvO3LTmaVH5q +1];
        }
        printf ("%d\n", S8lJjkBbdM);
    }
    return 0;
}

