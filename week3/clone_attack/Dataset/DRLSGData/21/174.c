int main () {
    int W0GTC81, authOq, QCnvbUQY3woT, L173hKV0mQ, rIYip2E0 = (348 - 348), uU0onCiKzm [(1152 - 852)] = {(278 - 278)}, o5mgpZq [(475 - 175)];
    long  double  rYftgMW8 = (110 - 110), IdCvUsD [300], fLhObzHoirq = (490 - 490), fSjK47r = (594 - 594);
    scanf ("%d", &W0GTC81);
    for (authOq = (913 - 913); W0GTC81 > authOq; authOq = authOq + 1) {
        scanf ("%d", &o5mgpZq[authOq]);
        rYftgMW8 = rYftgMW8 + o5mgpZq[authOq];
    }
    fLhObzHoirq = rYftgMW8 / W0GTC81;
    for (authOq = (830 - 830); W0GTC81 > authOq; authOq = authOq + 1) {
        IdCvUsD[authOq] = o5mgpZq[authOq] - fLhObzHoirq;
        if (IdCvUsD[authOq] < (509 - 509))
            IdCvUsD[authOq] = -IdCvUsD[authOq];
        if (fSjK47r < IdCvUsD[authOq])
            fSjK47r = IdCvUsD[authOq];
    }
    for (QCnvbUQY3woT = (41 - 41); (W0GTC81 -(844 - 843)) > QCnvbUQY3woT; QCnvbUQY3woT++) {
        for (authOq = (598 - 598); authOq < (W0GTC81 -(691 - 690) - QCnvbUQY3woT); authOq = authOq + 1) {
            if (o5mgpZq[authOq] > o5mgpZq[authOq + (517 - 516)]) {
                L173hKV0mQ = o5mgpZq[authOq];
                o5mgpZq[authOq] = o5mgpZq[authOq + (61 - 60)];
                o5mgpZq[authOq + 1] = L173hKV0mQ;
            }
        }
    }
    for (authOq = 0; W0GTC81 > authOq; authOq++) {
        if ((o5mgpZq[authOq] - fLhObzHoirq) == fSjK47r || (o5mgpZq[authOq] - fLhObzHoirq) == -fSjK47r) {
            uU0onCiKzm[rIYip2E0] = o5mgpZq[authOq];
            rIYip2E0 = rIYip2E0 + 1;
        }
    }
    {
        authOq = 0;
        while (authOq < rIYip2E0 - 1) {
            printf ("%d,", uU0onCiKzm[authOq]);
            authOq++;
        }
    }
    printf ("%d", uU0onCiKzm[rIYip2E0 - 1]);
    return 0;
}

