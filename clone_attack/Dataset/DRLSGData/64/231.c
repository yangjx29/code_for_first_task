int eBYm5G [(483 - 473)], P1eax8BynH [(434 - 424)], i4gl7a [(647 - 637)], Xyg7Ch1edM = (427 - 427), iHnmYc [(150 - 50)] = {(137 - 137)}, K9dQbwM [(1085 - 985)] = {(450 - 450)}, ICeB8Plo7h, SwdirE, Xyg7Ch1edM, J19PkzRTy;
double  Hem6lH37nC [(476 - 376)] = {(617 - 617)}, qS4txG;

int main () {
    scanf ("%d", &J19PkzRTy);
    for (ICeB8Plo7h = (651 - 651); J19PkzRTy > ICeB8Plo7h; ICeB8Plo7h++) {
        scanf ("%d %d %d", &eBYm5G[ICeB8Plo7h], &P1eax8BynH[ICeB8Plo7h], &i4gl7a[ICeB8Plo7h]);
    }
    for (ICeB8Plo7h = (563 - 563); ICeB8Plo7h < J19PkzRTy; ICeB8Plo7h++) {
        SwdirE = ICeB8Plo7h +(869 - 868);
        while (J19PkzRTy > SwdirE) {
            Hem6lH37nC[Xyg7Ch1edM] = sqrt (pow (eBYm5G[ICeB8Plo7h] - eBYm5G[SwdirE], (886 - 884)) + pow (P1eax8BynH[ICeB8Plo7h] - P1eax8BynH[SwdirE], (750 - 748)) + pow (i4gl7a[ICeB8Plo7h] - i4gl7a[SwdirE], (662 - 660)));
            iHnmYc[Xyg7Ch1edM] = ICeB8Plo7h;
            K9dQbwM[Xyg7Ch1edM] = SwdirE;
            SwdirE++;
            Xyg7Ch1edM++;
        }
    }
    {
        ICeB8Plo7h = (225 - 225);
        while (Xyg7Ch1edM > ICeB8Plo7h) {
            for (SwdirE = ICeB8Plo7h +(968 - 967); SwdirE < Xyg7Ch1edM; SwdirE++) {
                if (Hem6lH37nC[SwdirE] > Hem6lH37nC[ICeB8Plo7h]) {
                    qS4txG = Hem6lH37nC[ICeB8Plo7h];
                    Hem6lH37nC[ICeB8Plo7h] = Hem6lH37nC[SwdirE];
                    Hem6lH37nC[SwdirE] = qS4txG;
                    qS4txG = iHnmYc[ICeB8Plo7h];
                    iHnmYc[ICeB8Plo7h] = iHnmYc[SwdirE];
                    iHnmYc[SwdirE] = qS4txG;
                    qS4txG = K9dQbwM[ICeB8Plo7h];
                    K9dQbwM[ICeB8Plo7h] = K9dQbwM[SwdirE];
                    K9dQbwM[SwdirE] = qS4txG;
                }
                if ((!(Hem6lH37nC[SwdirE] != Hem6lH37nC[ICeB8Plo7h])) && ((iHnmYc[ICeB8Plo7h] > iHnmYc[SwdirE]) || (K9dQbwM[ICeB8Plo7h] > K9dQbwM[SwdirE]))) {
                    qS4txG = Hem6lH37nC[ICeB8Plo7h];
                    Hem6lH37nC[ICeB8Plo7h] = Hem6lH37nC[SwdirE];
                    Hem6lH37nC[SwdirE] = qS4txG;
                    qS4txG = iHnmYc[ICeB8Plo7h];
                    iHnmYc[ICeB8Plo7h] = iHnmYc[SwdirE];
                    iHnmYc[SwdirE] = qS4txG;
                    qS4txG = K9dQbwM[ICeB8Plo7h];
                    K9dQbwM[ICeB8Plo7h] = K9dQbwM[SwdirE];
                    K9dQbwM[SwdirE] = qS4txG;
                }
            }
            ICeB8Plo7h++;
        }
    }
    for (ICeB8Plo7h = (412 - 412); ICeB8Plo7h < Xyg7Ch1edM; ICeB8Plo7h++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", eBYm5G[iHnmYc[ICeB8Plo7h]], P1eax8BynH[iHnmYc[ICeB8Plo7h]], i4gl7a[iHnmYc[ICeB8Plo7h]], eBYm5G[K9dQbwM[ICeB8Plo7h]], P1eax8BynH[K9dQbwM[ICeB8Plo7h]], i4gl7a[K9dQbwM[ICeB8Plo7h]], Hem6lH37nC[ICeB8Plo7h]);
    }
    return (568 - 568);
}

