int main () {
    int fJtVAoNCgGO [(610 - 310)] = {(540 - 540)};
    int RVBlWYtpDZO;
    int q6oBhNqMJ;
    int BlebCwRD3;
    float UqN5jyvQ [(868 - 568)] = {(878 - 878)}, veq6KSp [(725 - 425)] = {(734 - 734)}, q0a8crfwq = (77 - 77), qviYMKxgqUCJ = (641 - 641);
    scanf ("%d", &q6oBhNqMJ);
    for (RVBlWYtpDZO = (826 - 826); RVBlWYtpDZO < q6oBhNqMJ; RVBlWYtpDZO++) {
        scanf ("%f", &UqN5jyvQ[RVBlWYtpDZO]);
        q0a8crfwq = q0a8crfwq + UqN5jyvQ[RVBlWYtpDZO];
    }
    BlebCwRD3 = (787 - 787);
    q0a8crfwq = q0a8crfwq / q6oBhNqMJ;
    for (RVBlWYtpDZO = 0; q6oBhNqMJ > RVBlWYtpDZO; RVBlWYtpDZO++) {
        veq6KSp[RVBlWYtpDZO] = fabs ((float) UqN5jyvQ[RVBlWYtpDZO] - q0a8crfwq);
        if (qviYMKxgqUCJ < veq6KSp[RVBlWYtpDZO])
            qviYMKxgqUCJ = veq6KSp[RVBlWYtpDZO];
    }
    for (RVBlWYtpDZO = 0; q6oBhNqMJ > RVBlWYtpDZO; RVBlWYtpDZO++) {
        if ((qviYMKxgqUCJ - veq6KSp[RVBlWYtpDZO]) < 1e-6) {
            fJtVAoNCgGO[BlebCwRD3] = UqN5jyvQ[RVBlWYtpDZO];
            BlebCwRD3++;
        }
    }
    for (RVBlWYtpDZO = 0; RVBlWYtpDZO < BlebCwRD3 -1; RVBlWYtpDZO++)
        printf ("%d,", fJtVAoNCgGO[RVBlWYtpDZO]);
    printf ("%d\n", fJtVAoNCgGO[BlebCwRD3 -1]);
    return (0);
}

