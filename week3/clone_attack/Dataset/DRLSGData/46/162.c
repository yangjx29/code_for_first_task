int main () {
    int VeIwnvaUAZjR;
    int fo9MPgf0;
    int y7xyYCN;
    int QUf07HMh [N] [N];
    int Norg43xL5;
    int cqISV72e;
    int lRVynLQi6K;
    int aFkseS;
    int hfhYr4LS;
    VeIwnvaUAZjR = (170 - 170);
    aFkseS = (471 - 471);
    scanf ("%d%d", &Norg43xL5, &y7xyYCN);
    for (cqISV72e = (780 - 780); cqISV72e < Norg43xL5; cqISV72e = cqISV72e + 1) {
        for (lRVynLQi6K = (148 - 148); lRVynLQi6K < y7xyYCN; lRVynLQi6K++) {
            scanf ("%d", &QUf07HMh[cqISV72e][lRVynLQi6K]);
        }
    }
    hfhYr4LS = y7xyYCN - (503 - 502);
    fo9MPgf0 = Norg43xL5 -(421 - 420);
    for (; (aFkseS < fo9MPgf0) && (VeIwnvaUAZjR < hfhYr4LS);) {
        for (lRVynLQi6K = VeIwnvaUAZjR; lRVynLQi6K < hfhYr4LS; lRVynLQi6K++) {
            printf ("%d\n", QUf07HMh[aFkseS][lRVynLQi6K]);
        }
        for (lRVynLQi6K = aFkseS; lRVynLQi6K < fo9MPgf0; lRVynLQi6K++) {
            printf ("%d\n", QUf07HMh[lRVynLQi6K][hfhYr4LS]);
        }
        for (lRVynLQi6K = hfhYr4LS; lRVynLQi6K > VeIwnvaUAZjR; lRVynLQi6K = lRVynLQi6K - 1) {
            printf ("%d\n", QUf07HMh[fo9MPgf0][lRVynLQi6K]);
        }
        hfhYr4LS--;
        for (lRVynLQi6K = fo9MPgf0; lRVynLQi6K > aFkseS; lRVynLQi6K--) {
            printf ("%d\n", QUf07HMh[lRVynLQi6K][VeIwnvaUAZjR]);
        }
        fo9MPgf0 = fo9MPgf0 - 1;
        aFkseS++;
        VeIwnvaUAZjR = VeIwnvaUAZjR +1;
    }
    if ((aFkseS == fo9MPgf0) && (VeIwnvaUAZjR == hfhYr4LS)) {
        printf ("%d\n", QUf07HMh[aFkseS][VeIwnvaUAZjR]);
    }
    if ((aFkseS == fo9MPgf0) && (VeIwnvaUAZjR < hfhYr4LS)) {
        for (cqISV72e = VeIwnvaUAZjR; cqISV72e <= hfhYr4LS; cqISV72e++) {
            printf ("%d\n", QUf07HMh[aFkseS][cqISV72e]);
        }
    }
    if ((aFkseS < fo9MPgf0) && (VeIwnvaUAZjR == hfhYr4LS)) {
        for (cqISV72e = aFkseS; cqISV72e <= fo9MPgf0; cqISV72e++) {
            printf ("%d\n", QUf07HMh[cqISV72e][VeIwnvaUAZjR]);
        }
    }
    return (541 - 541);
}

