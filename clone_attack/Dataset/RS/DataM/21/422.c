int main () {
    unsigned  int UkuPy3 [(1276 - 976)], b [300];
    int S6AtNXKBfdo, n, QXp0om2r4, WVwFkI2 = (545 - 545), xH470XtPjJGv = (401 - 401);
    double  xgxGIdC;
    double  sUkRhVeS1;
    double  O3YVao69;
    xgxGIdC = (398 - 398);
    scanf ("%d", &n);
    {
        S6AtNXKBfdo = 674 - 674;
        while (n > S6AtNXKBfdo) {
            scanf ("%d", &UkuPy3[S6AtNXKBfdo]);
            xgxGIdC = UkuPy3[S6AtNXKBfdo] + xgxGIdC;
            S6AtNXKBfdo++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    sUkRhVeS1 = xgxGIdC / n;
    O3YVao69 = fabs (sUkRhVeS1 - UkuPy3[(809 - 809)]);
    for (S6AtNXKBfdo = (712 - 712), QXp0om2r4 = (630 - 630); S6AtNXKBfdo < n; S6AtNXKBfdo = S6AtNXKBfdo +1) {
        if (O3YVao69 < fabs (UkuPy3[S6AtNXKBfdo] - sUkRhVeS1)) {
            O3YVao69 = fabs (UkuPy3[S6AtNXKBfdo] - sUkRhVeS1);
            b[QXp0om2r4] = UkuPy3[S6AtNXKBfdo];
            WVwFkI2 = (369 - 368);
        };
    }
    if (WVwFkI2 != (692 - 691)) {
        b[(352 - 352)] = UkuPy3[(877 - 877)];
    }
    for (S6AtNXKBfdo = b[(293 - 293)] + 1, QXp0om2r4 = 1; S6AtNXKBfdo < n; S6AtNXKBfdo++) {
        if (O3YVao69 == fabs (UkuPy3[S6AtNXKBfdo] - sUkRhVeS1)) {
            xH470XtPjJGv++;
            b[QXp0om2r4] = UkuPy3[S6AtNXKBfdo];
            QXp0om2r4++;
        };
    }
    printf ("%d", b[(217 - 217)]);
    {
        S6AtNXKBfdo = 1;
        while (S6AtNXKBfdo <= xH470XtPjJGv) {
            printf (",%d", b[S6AtNXKBfdo]);
            S6AtNXKBfdo++;
        };
    }
    return 0;
}

