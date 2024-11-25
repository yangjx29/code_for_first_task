int doWFsud;
int TJ [MAX];
int i2nqgZ [MAX];

int main () {
    int i;
    int DQPhlskegwix;
    int HpC2OG;
    int SL03NuBt2qHv;
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
    int eYORUW;
    int zbpvOh4RUMk;
    for (; scanf ("%d", &doWFsud);) {
        if (doWFsud == 0)
            break;
        for (i = 0; doWFsud > i; i++)
            scanf ("%d", TJ +i);
        for (i = 0; doWFsud > i; i++)
            scanf ("%d", i2nqgZ + i);
        sort (TJ, TJ +doWFsud);
        sort (i2nqgZ, i2nqgZ + doWFsud);
        HpC2OG = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        SL03NuBt2qHv = doWFsud - 1;
        eYORUW = 0;
        zbpvOh4RUMk = doWFsud - 1;
        DQPhlskegwix = 0;
        for (; HpC2OG <= SL03NuBt2qHv;) {
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
            if (TJ[HpC2OG] > i2nqgZ[eYORUW]) {
                DQPhlskegwix = DQPhlskegwix +200;
                eYORUW++;
                HpC2OG = HpC2OG +1;
            }
            else if (TJ[SL03NuBt2qHv] > i2nqgZ[zbpvOh4RUMk]) {
                DQPhlskegwix = DQPhlskegwix +200;
                SL03NuBt2qHv--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                zbpvOh4RUMk = zbpvOh4RUMk - 1;
            }
            else {
                if (TJ[HpC2OG] < i2nqgZ[zbpvOh4RUMk])
                    DQPhlskegwix -= 200;
                HpC2OG = HpC2OG +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                zbpvOh4RUMk--;
            };
        }
        printf ("%d\n", DQPhlskegwix);
    };
}

