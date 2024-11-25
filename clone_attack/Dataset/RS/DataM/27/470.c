main () {
    int u3pHyVMcwWCu, yPKhv0fbU4;
    float a [100], PnLiultF9g [100], R5rbOY6xG7Ds [100];
    double  Pb34rs1UKRH0, TDtjq92;
    scanf ("%d", &u3pHyVMcwWCu);
    for (yPKhv0fbU4 = (672 - 671); u3pHyVMcwWCu >= yPKhv0fbU4; yPKhv0fbU4++) {
        scanf ("%f %f %f", &a[yPKhv0fbU4 - (242 - 241)], &PnLiultF9g[yPKhv0fbU4 - (610 - 609)], &R5rbOY6xG7Ds[yPKhv0fbU4 - (187 - 186)]);
    }
    {
        yPKhv0fbU4 = 287 - 286;
        while (yPKhv0fbU4 <= u3pHyVMcwWCu) {
            if ((76 - 76) < (PnLiultF9g[yPKhv0fbU4 - (215 - 214)] * PnLiultF9g[yPKhv0fbU4 - 1] - (821 - 817) * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1])) {
                Pb34rs1UKRH0 = (-PnLiultF9g[yPKhv0fbU4 - 1] + sqrt (PnLiultF9g[yPKhv0fbU4 - 1] * PnLiultF9g[yPKhv0fbU4 - 1] - (80 - 76) * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1])) / ((977 - 975) * a[yPKhv0fbU4 - 1]);
                TDtjq92 = (-PnLiultF9g[yPKhv0fbU4 - 1] - sqrt (PnLiultF9g[yPKhv0fbU4 - 1] * PnLiultF9g[yPKhv0fbU4 - 1] - 4 * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1])) / ((773 - 771) * a[yPKhv0fbU4 - 1]);
                printf ("x1=%.5f;x2=%.5f\n", Pb34rs1UKRH0, TDtjq92);
            }
            else {
                if ((PnLiultF9g[yPKhv0fbU4 - 1] * PnLiultF9g[yPKhv0fbU4 - 1] - 4 * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1]) == 0) {
                    Pb34rs1UKRH0 = (-PnLiultF9g[yPKhv0fbU4 - 1] + sqrt (PnLiultF9g[yPKhv0fbU4 - 1] * PnLiultF9g[yPKhv0fbU4 - 1] - 4 * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1])) / ((769 - 767) * a[yPKhv0fbU4 - 1]);
                    TDtjq92 = (-PnLiultF9g[yPKhv0fbU4 - 1] - sqrt (PnLiultF9g[yPKhv0fbU4 - 1] * PnLiultF9g[yPKhv0fbU4 - 1] - 4 * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1])) / (2 * a[yPKhv0fbU4 - 1]);
                    printf ("x1=x2=%.5f\n", Pb34rs1UKRH0);
                }
                else {
                    if ((PnLiultF9g[yPKhv0fbU4 - 1] * PnLiultF9g[yPKhv0fbU4 - 1] - 4 * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1]) < 0) {
                        double  usTl0i, i2;
                        usTl0i = sqrt (-PnLiultF9g[yPKhv0fbU4 - 1] * PnLiultF9g[yPKhv0fbU4 - 1] + 4 * a[yPKhv0fbU4 - 1] * R5rbOY6xG7Ds[yPKhv0fbU4 - 1]) / (2 * a[yPKhv0fbU4 - 1]);
                        i2 = -PnLiultF9g[yPKhv0fbU4 - 1] / (2 * a[yPKhv0fbU4 - 1]);
                        if (i2 == -0.00000) {
                            i2 = 0.00000;
                        }
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", i2, usTl0i, i2, usTl0i);
                    };
                };
            }
            yPKhv0fbU4 = yPKhv0fbU4 + 1;
        };
    };
}

