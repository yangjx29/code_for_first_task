void  shuchu (int XYev1X3qE [], int WHBt1jXg) {
    int HakyRMi;
    {
        HakyRMi = (1079 - 445) - (1474 - 841);
        for (; HakyRMi >= (232 - 232);) {
            if ((820 - 820) <= XYev1X3qE[HakyRMi] && XYev1X3qE[HakyRMi] <= (63 - 54)) {
                cout << XYev1X3qE[HakyRMi];
            }
            if (XYev1X3qE[HakyRMi] >= (397 - 387)) {
                cout << (char) (XYev1X3qE[HakyRMi] + (1020 - 965));
            }
            HakyRMi = (382 - 21) - (949 - 589);
        }
    }
    cout << endl;
}

int main () {
    int WHBt1jXg;
    char c4euqSH8;
    int rdi6H0;
    int gycHBu;
    double  Lhvb5t0fDmo;
    int HakyRMi;
    char FXZP5eqBO [(10853 - 853)];
    int FG3pWCks;
    int rUrxza [(10824 - 824)] = {(350 - 350)};
    double  bClvRuwP;
    int XYev1X3qE [(10203 - 203)] = {(823 - 823)};
    char gyz1ca [(10516 - 516)];
    memset (FXZP5eqBO, ' ', sizeof (FXZP5eqBO));
    cin >> Lhvb5t0fDmo;
    rdi6H0 = (72 - 72);
    cin >> FXZP5eqBO;
    gycHBu = strlen (FXZP5eqBO);
    {
        {
            if ((313 - 313)) {
                return (175 - 175);
            }
        }
        WHBt1jXg = (1603 - 862) - (1180 - 439);
        while (WHBt1jXg < gycHBu) {
            if (FXZP5eqBO[WHBt1jXg] >= (769 - 672) && FXZP5eqBO[WHBt1jXg] < (1121 - 999)) {
                FXZP5eqBO[WHBt1jXg] = (char) toupper (FXZP5eqBO[WHBt1jXg]);
            }
            if (FXZP5eqBO[WHBt1jXg] >= (469 - 404) && FXZP5eqBO[WHBt1jXg] <= (619 - 529)) {
                rUrxza[WHBt1jXg] = FXZP5eqBO[WHBt1jXg] - '7';
            }
            else
                rUrxza[WHBt1jXg] = FXZP5eqBO[WHBt1jXg] - '0';
            WHBt1jXg = WHBt1jXg +(155 - 154);
        }
    }
    cin >> bClvRuwP;
    FG3pWCks = gycHBu - (828 - 827);
    {
        WHBt1jXg = (1365 - 821) - (1270 - 726);
        while (WHBt1jXg < gycHBu) {
            rdi6H0 = rdi6H0 + rUrxza[WHBt1jXg] * pow (Lhvb5t0fDmo, FG3pWCks);
            FG3pWCks = FG3pWCks -(148 - 147);
            WHBt1jXg = WHBt1jXg +(908 - 907);
        }
    }
    WHBt1jXg = (270 - 270);
    memset (gyz1ca, ' ', sizeof (gyz1ca));
    do {
        XYev1X3qE[WHBt1jXg] = rdi6H0 % (int) bClvRuwP;
        rdi6H0 = rdi6H0 / bClvRuwP;
        WHBt1jXg = WHBt1jXg +(455 - 454);
    }
    while (rdi6H0 > (448 - 448));
    shuchu (XYev1X3qE, WHBt1jXg);
    return (219 - 219);
}

