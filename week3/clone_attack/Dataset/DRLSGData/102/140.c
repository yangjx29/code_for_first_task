int main () {
    double  vt34cRT8GNI0 [(316 - 266)];
    int G3twlUos;
    int VbEfqN;
    double  a2Xvcu6LtHb;
    int nt9JlSeDIC;
    double  OPI2u9j [(353 - 303)];
    int CAzL8mdRX;
    char fPyrhoEcF [(23 - 13)];
    int xyu5CG8Ax2;
    int g63TkzwdKOJ;
    scanf ("%d", &nt9JlSeDIC);
    xyu5CG8Ax2 = (969 - 969);
    G3twlUos = (938 - 938);
    CAzL8mdRX = (821 - 821);
    for (; nt9JlSeDIC--;) {
        scanf ("%s", fPyrhoEcF);
        if (!('f' != fPyrhoEcF[(313 - 313)]))
            scanf ("%lf", &OPI2u9j[G3twlUos++]);
        else
            scanf ("%lf", &vt34cRT8GNI0[xyu5CG8Ax2++]);
    }
    for (g63TkzwdKOJ = G3twlUos -(64 - 63); g63TkzwdKOJ > (702 - 702); g63TkzwdKOJ--) {
        for (VbEfqN = (712 - 712); VbEfqN < g63TkzwdKOJ; VbEfqN++) {
            if (OPI2u9j[VbEfqN] < OPI2u9j[VbEfqN +(231 - 230)]) {
                a2Xvcu6LtHb = OPI2u9j[VbEfqN];
                OPI2u9j[VbEfqN] = OPI2u9j[VbEfqN +(98 - 97)];
                OPI2u9j[VbEfqN +(840 - 839)] = a2Xvcu6LtHb;
            }
        }
    }
    for (g63TkzwdKOJ = xyu5CG8Ax2 - (561 - 560); g63TkzwdKOJ > (998 - 998); g63TkzwdKOJ--) {
        for (VbEfqN = (94 - 94); g63TkzwdKOJ > VbEfqN; VbEfqN++) {
            if (vt34cRT8GNI0[VbEfqN +(997 - 996)] < vt34cRT8GNI0[VbEfqN]) {
                a2Xvcu6LtHb = vt34cRT8GNI0[VbEfqN];
                vt34cRT8GNI0[VbEfqN] = vt34cRT8GNI0[VbEfqN +(847 - 846)];
                vt34cRT8GNI0[VbEfqN +(822 - 821)] = a2Xvcu6LtHb;
            }
        }
    }
    for (g63TkzwdKOJ = 0; xyu5CG8Ax2 > g63TkzwdKOJ; g63TkzwdKOJ = g63TkzwdKOJ + (191 - 190)) {
        if (CAzL8mdRX == 0)
            CAzL8mdRX = 1;
        else
            ;
        printf ("%.2f", vt34cRT8GNI0[g63TkzwdKOJ]);
    }
    for (g63TkzwdKOJ = 0; g63TkzwdKOJ < G3twlUos; g63TkzwdKOJ++) {
        printf ("%.2f", OPI2u9j[g63TkzwdKOJ]);
        if (CAzL8mdRX == 0)
            CAzL8mdRX = 1;
        else
            ;
    }
}

