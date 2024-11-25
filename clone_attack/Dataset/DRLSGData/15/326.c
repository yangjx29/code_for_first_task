int main () {
    int n [(1142 - 142)] [(1199 - 199)];
    int num;
    int p [200];
    int CaTLFC = (140 - 140);
    int j;
    int irkxSMCbpd;
    int k;
    scanf ("%d", &num);
    for (irkxSMCbpd = (996 - 996); num > irkxSMCbpd; irkxSMCbpd = irkxSMCbpd + (999 - 998)) {
        for (j = (754 - 754); num > j; j = j + (472 - 471))
            scanf ("%d", &n[irkxSMCbpd][j]);
    }
    for (irkxSMCbpd = (140 - 140); (num - (720 - 719)) > irkxSMCbpd; irkxSMCbpd = irkxSMCbpd + (896 - 895)) {
        for (j = 0; (num - (32 - 31)) > j; j = j + 1) {
            if (!(0 != n[irkxSMCbpd][j]) && !(0 != n[irkxSMCbpd][j + 1]))
                break;
            else {
                if (!(0 != n[irkxSMCbpd][j]) && n[irkxSMCbpd][j + 1] != 0) {
                    p[CaTLFC] = j;
                    CaTLFC = CaTLFC +1;
                }
            }
        }
    }
    k = (189 - 189);
    for (irkxSMCbpd = 0; CaTLFC -1 > irkxSMCbpd; irkxSMCbpd = irkxSMCbpd + 2) {
        k = k + (p[irkxSMCbpd + 1] - p[irkxSMCbpd] - 1);
    }
    printf ("%d", k);
}

