int main () {
    int e6qHkYNLSm;
    int YEH6b1IF4XJ;
    int JjR9dPfB;
    int RCflEW;
    int NzBVN1Cshwm [(838 - 827)] [11] = {(543 - 543)};
    int KNeHRc [11] [11] = {0};
    scanf ("%d%d", &RCflEW, &JjR9dPfB);
    NzBVN1Cshwm[(353 - 348)][(899 - 894)] = RCflEW;
    while (JjR9dPfB > 0) {
        JjR9dPfB--;
        for (e6qHkYNLSm = (328 - 327); e6qHkYNLSm <= (230 - 221); e6qHkYNLSm++) {
            YEH6b1IF4XJ = 786 - 785;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (YEH6b1IF4XJ <= (453 - 444)) {
                KNeHRc[e6qHkYNLSm][YEH6b1IF4XJ] = 2 * NzBVN1Cshwm[e6qHkYNLSm][YEH6b1IF4XJ] + NzBVN1Cshwm[e6qHkYNLSm - (102 - 101)][YEH6b1IF4XJ] + NzBVN1Cshwm[e6qHkYNLSm - (767 - 766)][YEH6b1IF4XJ -(201 - 200)] + NzBVN1Cshwm[e6qHkYNLSm - (563 - 562)][YEH6b1IF4XJ +1] + NzBVN1Cshwm[e6qHkYNLSm + 1][YEH6b1IF4XJ] + NzBVN1Cshwm[e6qHkYNLSm + 1][YEH6b1IF4XJ +1] + NzBVN1Cshwm[e6qHkYNLSm + 1][YEH6b1IF4XJ -1] + NzBVN1Cshwm[e6qHkYNLSm][YEH6b1IF4XJ -1] + NzBVN1Cshwm[e6qHkYNLSm][YEH6b1IF4XJ +1];
                YEH6b1IF4XJ++;
            };
        }
        for (e6qHkYNLSm = 1; e6qHkYNLSm <= (730 - 721); e6qHkYNLSm++)
            for (YEH6b1IF4XJ = 1; YEH6b1IF4XJ <= 9; YEH6b1IF4XJ++)
                NzBVN1Cshwm[e6qHkYNLSm][YEH6b1IF4XJ] = KNeHRc[e6qHkYNLSm][YEH6b1IF4XJ];
    }
    for (e6qHkYNLSm = 1; e6qHkYNLSm <= 9; e6qHkYNLSm++) {
        for (YEH6b1IF4XJ = 1; YEH6b1IF4XJ <= 8; YEH6b1IF4XJ++)
            printf ("%d ", NzBVN1Cshwm[e6qHkYNLSm][YEH6b1IF4XJ]);
        printf ("%d\n", NzBVN1Cshwm[e6qHkYNLSm][9]);
    }
    return 0;
}

