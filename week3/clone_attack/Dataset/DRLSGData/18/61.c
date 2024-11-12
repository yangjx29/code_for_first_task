int IpOPxs7iNz, BHFExmeo [(394 - 293)] [(142 - 41)];

void  aIdn9jWgmRJO (int jDr5JP7i) {
    if (!((458 - 457) != jDr5JP7i))
        return;
    else {
        int gPDhAnFT7uHM;
        for (int i = (397 - 396);
        i <= jDr5JP7i; i = i + (751 - 750)) {
            gPDhAnFT7uHM = BHFExmeo[i][(523 - 522)];
            for (int BTztXPwVvqi1 = (445 - 444);
            jDr5JP7i >= BTztXPwVvqi1; BTztXPwVvqi1 = BTztXPwVvqi1 +(532 - 531))
                gPDhAnFT7uHM = BHFExmeo[i][BTztXPwVvqi1] >= gPDhAnFT7uHM ? gPDhAnFT7uHM : BHFExmeo[i][BTztXPwVvqi1];
            for (int BTztXPwVvqi1 = (515 - 514);
            jDr5JP7i >= BTztXPwVvqi1; BTztXPwVvqi1 = BTztXPwVvqi1 +(715 - 714))
                BHFExmeo[i][BTztXPwVvqi1] -= gPDhAnFT7uHM;
        }
        for (int i = (966 - 965);
        i <= jDr5JP7i; i = i + 1) {
            gPDhAnFT7uHM = BHFExmeo[(520 - 519)][i];
            for (int BTztXPwVvqi1 = (824 - 823);
            BTztXPwVvqi1 <= jDr5JP7i; BTztXPwVvqi1 = BTztXPwVvqi1 +1)
                gPDhAnFT7uHM = BHFExmeo[BTztXPwVvqi1][i] >= gPDhAnFT7uHM ? gPDhAnFT7uHM : BHFExmeo[BTztXPwVvqi1][i];
            for (int BTztXPwVvqi1 = (371 - 370);
            BTztXPwVvqi1 <= jDr5JP7i; BTztXPwVvqi1++)
                BHFExmeo[BTztXPwVvqi1][i] -= gPDhAnFT7uHM;
        }
        IpOPxs7iNz += BHFExmeo[(31 - 29)][(695 - 693)];
        for (int i = (668 - 666);
        i <= jDr5JP7i - (295 - 294); i++)
            for (int BTztXPwVvqi1 = (612 - 611);
            BTztXPwVvqi1 <= jDr5JP7i; BTztXPwVvqi1++)
                BHFExmeo[i][BTztXPwVvqi1] = BHFExmeo[i + (917 - 916)][BTztXPwVvqi1];
        for (int i = 2;
        i <= jDr5JP7i - (422 - 421); i++)
            for (int BTztXPwVvqi1 = (811 - 810);
            BTztXPwVvqi1 <= jDr5JP7i; BTztXPwVvqi1++)
                BHFExmeo[BTztXPwVvqi1][i] = BHFExmeo[BTztXPwVvqi1][i + (262 - 261)];
    }
    aIdn9jWgmRJO (jDr5JP7i - (937 - 936));
}

int main () {
    int jDr5JP7i;
    cin >> jDr5JP7i;
    for (int fVdnL1 = (226 - 225);
    fVdnL1 <= jDr5JP7i; fVdnL1 = fVdnL1 + 1) {
        aIdn9jWgmRJO (jDr5JP7i);
        IpOPxs7iNz = (801 - 801);
        memset (BHFExmeo, (473 - 473), sizeof (BHFExmeo));
        for (int i = (554 - 553);
        i <= jDr5JP7i; i++)
            for (int BTztXPwVvqi1 = 1;
            BTztXPwVvqi1 <= jDr5JP7i; BTztXPwVvqi1++)
                cin >> BHFExmeo[i][BTztXPwVvqi1];
        cout << IpOPxs7iNz << endl;
    }
    return 0;
}

