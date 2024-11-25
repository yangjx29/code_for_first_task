int main () {
    int EkVimaIgjEL8 [32];
    int RPGBeuLk [32];
    int xqhtIJZ9k;
    int Q8JXT7;
    int L2;
    double  qqkvHK;
    double  b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char WH7Av3VE [32];
    char jtFUROo98gV [32];
    int msrg6uK = 0;
    cin >> qqkvHK >> WH7Av3VE >> b;
    Q8JXT7 = strlen (WH7Av3VE);
    for (xqhtIJZ9k = (624 - 624); xqhtIJZ9k < Q8JXT7; xqhtIJZ9k = xqhtIJZ9k + 1) {
        EkVimaIgjEL8[xqhtIJZ9k] = WH7Av3VE[xqhtIJZ9k];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (EkVimaIgjEL8[xqhtIJZ9k] >= 97)
            EkVimaIgjEL8[xqhtIJZ9k] = EkVimaIgjEL8[xqhtIJZ9k] - (1053 - 966);
        else {
            if (65 <= EkVimaIgjEL8[xqhtIJZ9k])
                EkVimaIgjEL8[xqhtIJZ9k] = EkVimaIgjEL8[xqhtIJZ9k] - 55;
            else
                EkVimaIgjEL8[xqhtIJZ9k] = EkVimaIgjEL8[xqhtIJZ9k] - 48;
        };
    }
    {
        xqhtIJZ9k = 0;
        while (xqhtIJZ9k < Q8JXT7) {
            msrg6uK = msrg6uK + EkVimaIgjEL8[xqhtIJZ9k] * pow (qqkvHK, Q8JXT7 -1 - xqhtIJZ9k);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xqhtIJZ9k = xqhtIJZ9k + 1;
        };
    }
    if (!(0 != msrg6uK))
        cout << "0";
    else {
        for (xqhtIJZ9k = 0; xqhtIJZ9k < 32; xqhtIJZ9k++)
            if (pow (b, xqhtIJZ9k) > msrg6uK) {
                L2 = xqhtIJZ9k;
                break;
            }
        for (xqhtIJZ9k = 0; xqhtIJZ9k < L2; xqhtIJZ9k++) {
            RPGBeuLk[xqhtIJZ9k] = msrg6uK / (int) (pow (b, L2 -1 - xqhtIJZ9k));
            msrg6uK = msrg6uK - RPGBeuLk[xqhtIJZ9k] * pow (b, L2 -1 - xqhtIJZ9k);
        }
        {
            xqhtIJZ9k = 0;
            while (xqhtIJZ9k < L2) {
                if (RPGBeuLk[xqhtIJZ9k] < (642 - 632))
                    jtFUROo98gV[xqhtIJZ9k] = RPGBeuLk[xqhtIJZ9k] + 48;
                else
                    jtFUROo98gV[xqhtIJZ9k] = RPGBeuLk[xqhtIJZ9k] + 55;
                xqhtIJZ9k++;
            };
        }
        jtFUROo98gV[L2] = '\0';
        cout << jtFUROo98gV;
    }
    return 0;
}

