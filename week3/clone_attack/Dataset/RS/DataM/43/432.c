int main () {
    int cI2Y6EX8leG, j, Ft1Kc3pH, s, yaongcFR9wAu;
    scanf ("%d", &Ft1Kc3pH);
    {
        cI2Y6EX8leG = 3;
        while (cI2Y6EX8leG <= Ft1Kc3pH / 2) {
            for (j = 2; Ft1Kc3pH >= j; j = j + 1) {
                yaongcFR9wAu = 0;
                if ((!(j == (Ft1Kc3pH -cI2Y6EX8leG))) && (cI2Y6EX8leG != j) && ((cI2Y6EX8leG % j == 0) || ((Ft1Kc3pH -cI2Y6EX8leG) % j == 0))) {
                    yaongcFR9wAu = 1;
                    break;
                };
            }
            if (yaongcFR9wAu == 0)
                printf ("%d %d\n", cI2Y6EX8leG, Ft1Kc3pH -cI2Y6EX8leG);
            cI2Y6EX8leG = cI2Y6EX8leG + 2;
        };
    }
    return 0;
}

