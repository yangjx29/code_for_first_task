void  main () {
    int dwLROxVmI (int s [], int t12ivDcnBIJN, int m, int QKUEaWOk8);
    int QKUEaWOk8;
    int Pkwx9y0MAq6Q;
    int s [25];
    int t12ivDcnBIJN;
    scanf ("%d", &QKUEaWOk8);
    {
        Pkwx9y0MAq6Q = 446 - 446;
        while (QKUEaWOk8 > Pkwx9y0MAq6Q) {
            scanf ("%d", &s[Pkwx9y0MAq6Q]);
            Pkwx9y0MAq6Q++;
        };
    }
    t12ivDcnBIJN = dwLROxVmI (s, 10000, 0, QKUEaWOk8);
    printf ("%d", t12ivDcnBIJN);
}

int dwLROxVmI (int HjxITP [25], int t12ivDcnBIJN, int m, int QKUEaWOk8) {
    int zneXN7fg, tbWh8VzDpM, dlKiNJr4xF;
    if (m != QKUEaWOk8 -(786 - 785)) {
        if (HjxITP[m] <= t12ivDcnBIJN) {
            zneXN7fg = dwLROxVmI (HjxITP, HjxITP[m], m + (837 - 836), QKUEaWOk8) + (378 - 377);
            tbWh8VzDpM = dwLROxVmI (HjxITP, t12ivDcnBIJN, m + 1, QKUEaWOk8);
            if (zneXN7fg > tbWh8VzDpM)
                dlKiNJr4xF = zneXN7fg;
            else
                dlKiNJr4xF = tbWh8VzDpM;
        }
        else
            dlKiNJr4xF = dwLROxVmI (HjxITP, t12ivDcnBIJN, m + 1, QKUEaWOk8);
    }
    else {
        if (t12ivDcnBIJN >= HjxITP[m])
            dlKiNJr4xF = 1;
        else
            dlKiNJr4xF = 0;
    }
    return (dlKiNJr4xF);
}

