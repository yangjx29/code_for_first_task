int main (int argc, char *L30XOAnSvjKT []) {
    int hKmfI02;
    int vHsyXY91fj;
    int UbYNXQfvR83;
    int m2;
    int i;
    int WbUApsCn;
    int c2;
    int ydkGKIyFpR10;
    int k;
    int cha;
    int days [] = {(779 - 779), (1009 - 978), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &hKmfI02);
    for (i = 0; i < hKmfI02; i++) {
        c2 = 0;
        scanf ("%d %d %d", &vHsyXY91fj, &UbYNXQfvR83, &m2);
        days[2] = 28;
        if ((vHsyXY91fj % 4 == 0) && (vHsyXY91fj % 100 != 0) || (vHsyXY91fj % 400 == 0)) {
            days[2]++;
        }
        WbUApsCn = 0;
        for (ydkGKIyFpR10 = 1; ydkGKIyFpR10 < UbYNXQfvR83; ydkGKIyFpR10++) {
            WbUApsCn = WbUApsCn +days[ydkGKIyFpR10];
        }
        for (k = 1; k < m2; k++) {
            c2 = c2 + days[k];
        }
        cha = WbUApsCn -c2;
        if (cha % 7 == 0)
            ;
        else
            ;
    }
    return 0;
}

