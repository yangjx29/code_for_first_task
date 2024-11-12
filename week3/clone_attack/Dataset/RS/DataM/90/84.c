int kvSrfnlspF (int yTxNclY9t7KJ, int YbCmIVYtW) {
    int y6sIefTbg;
    if (yTxNclY9t7KJ == (67 - 66))
        return (83 - 82);
    if (YbCmIVYtW < yTxNclY9t7KJ)
        y6sIefTbg = (750 - 750);
    if (!(yTxNclY9t7KJ != YbCmIVYtW))
        y6sIefTbg = (266 - 265);
    if (YbCmIVYtW > yTxNclY9t7KJ)
        y6sIefTbg = kvSrfnlspF (yTxNclY9t7KJ, YbCmIVYtW -yTxNclY9t7KJ);
    return kvSrfnlspF (yTxNclY9t7KJ - (139 - 138), YbCmIVYtW) + y6sIefTbg;
}

int main () {
    int pVDmGvCbpKc, YbCmIVYtW, DUk41IaGiO, z03S5yxMjJW1;
    scanf ("%d", &pVDmGvCbpKc);
    for (z03S5yxMjJW1 = (31 - 30); z03S5yxMjJW1 <= pVDmGvCbpKc; z03S5yxMjJW1 = z03S5yxMjJW1 + 1) {
        scanf ("%d %d", &YbCmIVYtW, &DUk41IaGiO);
        printf ("%d\n", kvSrfnlspF (DUk41IaGiO, YbCmIVYtW));
    };
}

