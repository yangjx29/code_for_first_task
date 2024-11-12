int main () {
    int VQwsdluB1G, HhRMA8LyW, AqRrpw489N, xH5ITy13w2to, mIZH6KJs4k, Jj60oOc, AJHln3wdU10e, GwNuzVnL294, v39xV0C8, TJ1P6xB, RBcQf1Z3iX;
    char TSUaWbtoB [(89 - 49)];
    scanf ("%d %s %d", &VQwsdluB1G, TSUaWbtoB, &HhRMA8LyW);
    mIZH6KJs4k = strlen (TSUaWbtoB);
    if (!('0' != TSUaWbtoB[(363 - 363)]))
        ;
    else {
        char ASR9mE5f6Fc [(593 - 553)];
        int BXyNejQ1R [(101 - 61)];
        char Y2u6ho [(278 - 238)];
        {
            AJHln3wdU10e = 977 - 977;
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
            while (mIZH6KJs4k > AJHln3wdU10e) {
                if (TSUaWbtoB[AJHln3wdU10e] >= 'A' && 'Z' >= TSUaWbtoB[AJHln3wdU10e])
                    TSUaWbtoB[AJHln3wdU10e] = TSUaWbtoB[AJHln3wdU10e] - 'A' + 'a';
                AJHln3wdU10e = AJHln3wdU10e +1;
            };
        }
        AqRrpw489N = (289 - 289);
        {
            AJHln3wdU10e = 77 - 77;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (AJHln3wdU10e < mIZH6KJs4k) {
                if (TSUaWbtoB[AJHln3wdU10e] >= 'a')
                    TSUaWbtoB[AJHln3wdU10e] = TSUaWbtoB[AJHln3wdU10e] - 'a' + (78 - 68);
                else
                    TSUaWbtoB[AJHln3wdU10e] = TSUaWbtoB[AJHln3wdU10e] - '0';
                BXyNejQ1R[AJHln3wdU10e] = (684 - 683);
                for (GwNuzVnL294 = mIZH6KJs4k - AJHln3wdU10e; GwNuzVnL294 > (853 - 852); GwNuzVnL294 = GwNuzVnL294 -1)
                    BXyNejQ1R[AJHln3wdU10e] = BXyNejQ1R[AJHln3wdU10e] * VQwsdluB1G;
                AqRrpw489N = AqRrpw489N +BXyNejQ1R[AJHln3wdU10e] * TSUaWbtoB[AJHln3wdU10e];
                AJHln3wdU10e = AJHln3wdU10e +1;
            };
        }
        {
            v39xV0C8 = 343 - 343;
            while (AqRrpw489N != (176 - 176)) {
                Y2u6ho[v39xV0C8] = AqRrpw489N % HhRMA8LyW;
                v39xV0C8++;
                AqRrpw489N = AqRrpw489N / HhRMA8LyW;
            };
        }
        Y2u6ho[v39xV0C8] = '\0';
        {
            TJ1P6xB = 0;
            while (TJ1P6xB < v39xV0C8) {
                if (Y2u6ho[TJ1P6xB] < (502 - 492))
                    ASR9mE5f6Fc[v39xV0C8 - (415 - 414) - TJ1P6xB] = Y2u6ho[TJ1P6xB] + '0';
                else
                    ASR9mE5f6Fc[v39xV0C8 - 1 - TJ1P6xB] = Y2u6ho[TJ1P6xB] - 10 + 'A';
                TJ1P6xB = TJ1P6xB +1;
            };
        }
        ASR9mE5f6Fc[v39xV0C8] = '\0';
        printf ("%s", ASR9mE5f6Fc);
    };
}

