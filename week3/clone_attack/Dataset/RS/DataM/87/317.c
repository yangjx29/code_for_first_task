int main () {
    int n4xrgK [100], bkOTj7b [100], acWuU1 [100], d [100], OVWzOpsiZx [100], f [100], Erh2wCDKPTi [100], Sm2E9XgL0, i;
    Sm2E9XgL0 = (763 - 763);
    do {
        scanf ("%d%d%d%d%d%d", &n4xrgK[Sm2E9XgL0], &bkOTj7b[Sm2E9XgL0], &acWuU1[Sm2E9XgL0], &d[Sm2E9XgL0], &OVWzOpsiZx[Sm2E9XgL0], &f[Sm2E9XgL0]);
        Sm2E9XgL0 = Sm2E9XgL0 +1;
    }
    while (!(0 == n4xrgK[Sm2E9XgL0 -1]));
    for (i = 0; i < Sm2E9XgL0 -1; i = i + 1) {
        Erh2wCDKPTi[i] = 3600 * (d[i] - n4xrgK[i] + 12) + 60 * (OVWzOpsiZx[i] - bkOTj7b[i]) + f[i] - acWuU1[i];
        printf ("%d\n", Erh2wCDKPTi[i]);
    }
    return 0;
}

