int vjagT9be4Ddo (int jvomU1S9) {
    if ((!(0 != jvomU1S9 % 4) && !(0 == jvomU1S9 % 100)) || (!(0 != jvomU1S9 % 400)))
        return 1;
    else
        return 0;
}

int main () {
    int K0qG9yYpc [13] = {0, (780 - 749), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ZnAiHk4;
    int eyear;
    int oH7B09JjXPE;
    int zrfIB162k;
    int zuBCgOnIclh;
    int BsQOG350KJZ;
    ZnAiHk4 = 0;
    eyear = 0;
    oH7B09JjXPE = 0;
    zrfIB162k = 0;
    zuBCgOnIclh = 0;
    BsQOG350KJZ = 0;
    int L8myuv = 0;
    int nyears;
    nyears = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int startYearDays = 0;
    int sZzjDg;
    sZzjDg = 0;
    int CnlJkP6;
    CnlJkP6 = 0;
    cin >> ZnAiHk4 >> oH7B09JjXPE >> zuBCgOnIclh;
    cin >> eyear >> zrfIB162k >> BsQOG350KJZ;
    {
        int eBNIUnP = ZnAiHk4;
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
        while (eBNIUnP <= eyear) {
            if (vjagT9be4Ddo (eBNIUnP))
                L8myuv = L8myuv +1;
            eBNIUnP = eBNIUnP + 1;
        };
    }
    nyears = (eyear - ZnAiHk4) - 1;
    {
        int eBNIUnP = oH7B09JjXPE + 1;
        while (eBNIUnP <= 12) {
            startYearDays = startYearDays + K0qG9yYpc[eBNIUnP];
            eBNIUnP = eBNIUnP + 1;
        };
    }
    startYearDays = startYearDays + (K0qG9yYpc[oH7B09JjXPE] - zuBCgOnIclh);
    {
        int eBNIUnP = 1;
        while (eBNIUnP <= zrfIB162k - 1) {
            sZzjDg = sZzjDg + K0qG9yYpc[eBNIUnP];
            eBNIUnP = eBNIUnP + 1;
        };
    }
    sZzjDg = sZzjDg + BsQOG350KJZ;
    CnlJkP6 = (nyears) *365 + sZzjDg + startYearDays + L8myuv;
    cout << CnlJkP6;
    return 0;
}

