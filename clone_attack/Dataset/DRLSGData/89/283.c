int main () {
    int n, yMGuPNTcZs, VvjM1HU6D5kR [10000] [2], i, Lp0P1BDKbM, zvRqnL, d [10000] = {(846 - 846)}, hcZt67BO = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while ((705 - 704)) {
            for (Lp0P1BDKbM = 0; 2 > Lp0P1BDKbM; Lp0P1BDKbM = Lp0P1BDKbM +1) {
                scanf ("%d", &VvjM1HU6D5kR[i][Lp0P1BDKbM]);
            }
            if (!(0 != VvjM1HU6D5kR[i][0]) && !(0 != VvjM1HU6D5kR[i][1])) {
                yMGuPNTcZs = i;
                break;
            }
            i = i + 1;
        }
    }
    for (i = 0; i < yMGuPNTcZs; i = i + 1) {
        d[VvjM1HU6D5kR[i][1]]++;
    }
    for (i = 0; i < yMGuPNTcZs; i++) {
        if ((n - 1) <= d[i]) {
            zvRqnL = i;
            hcZt67BO = 1;
        }
    }
    for (i = 0; i < yMGuPNTcZs; i++) {
        if (VvjM1HU6D5kR[i][0] == zvRqnL && VvjM1HU6D5kR[i][1] != zvRqnL)
            hcZt67BO = 0;
    }
    if (hcZt67BO == 0)
        ;
    if (hcZt67BO == 1)
        printf ("%d", zvRqnL);
    return 0;
}

