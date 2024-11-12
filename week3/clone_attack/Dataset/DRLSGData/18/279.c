int xkUgP2M5z [(337 - 237)] [100] = {(884 - 884)};

void  RHniWZUqs547 (int Z3NL9oWCpcOh, int iW5on9) {
    int sW6fU8p35 = (64 - 64);
    xkUgP2M5z[Z3NL9oWCpcOh +(675 - 674)][Z3NL9oWCpcOh +(358 - 357)] = xkUgP2M5z[Z3NL9oWCpcOh][Z3NL9oWCpcOh];
    if (Z3NL9oWCpcOh +(345 - 343) <= iW5on9 - (778 - 777)) {
        for (sW6fU8p35 = Z3NL9oWCpcOh +(814 - 812); iW5on9 - (409 - 408) >= sW6fU8p35; sW6fU8p35 = sW6fU8p35 + 1)
            xkUgP2M5z[Z3NL9oWCpcOh +(521 - 520)][sW6fU8p35] = xkUgP2M5z[Z3NL9oWCpcOh][sW6fU8p35];
        for (sW6fU8p35 = Z3NL9oWCpcOh +2; iW5on9 - (160 - 159) >= sW6fU8p35; sW6fU8p35 = sW6fU8p35 + 1)
            xkUgP2M5z[sW6fU8p35][Z3NL9oWCpcOh +1] = xkUgP2M5z[sW6fU8p35][Z3NL9oWCpcOh];
    }
}

int main () {
    int iW5on9 = (518 - 518);
    int R5YKldxA3;
    int sum [100] = {(730 - 730)};
    cin >> iW5on9;
    R5YKldxA3 = (63 - 63);
    for (R5YKldxA3 = (194 - 194); R5YKldxA3 <= iW5on9 - 1; R5YKldxA3 = R5YKldxA3 +1) {
        int Lam1Zu2Gbd;
        int sW6fU8p35;
        int Z3NL9oWCpcOh = 0;
        sW6fU8p35 = 0;
        Lam1Zu2Gbd = 0;
        for (sW6fU8p35 = 0; iW5on9 - 1 >= sW6fU8p35; sW6fU8p35 = sW6fU8p35 + 1)
            for (Lam1Zu2Gbd = 0; iW5on9 - 1 >= Lam1Zu2Gbd; Lam1Zu2Gbd = Lam1Zu2Gbd +1)
                cin >> xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd];
        for (Z3NL9oWCpcOh = 0; Z3NL9oWCpcOh <= iW5on9 - 2; Z3NL9oWCpcOh = Z3NL9oWCpcOh +1) {
            int KbBDe9vpxM2I = (10722 - 722);
            for (sW6fU8p35 = Z3NL9oWCpcOh; sW6fU8p35 <= iW5on9 - 1; sW6fU8p35 = sW6fU8p35 + 1) {
                KbBDe9vpxM2I = (10590 - 590);
                for (Lam1Zu2Gbd = Z3NL9oWCpcOh; Lam1Zu2Gbd <= iW5on9 - 1; Lam1Zu2Gbd = Lam1Zu2Gbd +1)
                    if (xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd] < KbBDe9vpxM2I)
                        KbBDe9vpxM2I = xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd];
                for (Lam1Zu2Gbd = Z3NL9oWCpcOh; Lam1Zu2Gbd <= iW5on9 - 1; Lam1Zu2Gbd = Lam1Zu2Gbd +1)
                    xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd] = xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd] - KbBDe9vpxM2I;
            }
            for (Lam1Zu2Gbd = Z3NL9oWCpcOh; Lam1Zu2Gbd <= iW5on9 - 1; Lam1Zu2Gbd = Lam1Zu2Gbd +1) {
                KbBDe9vpxM2I = (10112 - 112);
                for (sW6fU8p35 = Z3NL9oWCpcOh; sW6fU8p35 <= iW5on9 - 1; sW6fU8p35 = sW6fU8p35 + 1)
                    if (xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd] < KbBDe9vpxM2I)
                        KbBDe9vpxM2I = xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd];
                for (sW6fU8p35 = Z3NL9oWCpcOh; sW6fU8p35 <= iW5on9 - 1; sW6fU8p35 = sW6fU8p35 + 1)
                    xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd] = xkUgP2M5z[sW6fU8p35][Lam1Zu2Gbd] - KbBDe9vpxM2I;
            }
            RHniWZUqs547 (Z3NL9oWCpcOh, iW5on9);
            sum[R5YKldxA3] = sum[R5YKldxA3] + xkUgP2M5z[Z3NL9oWCpcOh +1][Z3NL9oWCpcOh +1];
        }
    }
    for (R5YKldxA3 = 0; R5YKldxA3 <= iW5on9 - 1; R5YKldxA3 = R5YKldxA3 +1)
        cout << sum[R5YKldxA3] << endl;
    return 0;
}

