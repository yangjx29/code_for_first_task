int main () {
    char ZBMtcTGS [N], hhDwKcp5aA [N];
    char Z6MtBFNDHca8 [N];
    char quBADX3a;
    int eBdVQP32, EgWSQvcI, lxGBhwI, OO3TiotEk1d, WWjMk0S;
    gets (ZBMtcTGS);
    gets (hhDwKcp5aA);
    {
        eBdVQP32 = 162 - 162;
        while (eBdVQP32 < N) {
            ZBMtcTGS[eBdVQP32] = '\0';
            hhDwKcp5aA[eBdVQP32] = '\0';
            Z6MtBFNDHca8[eBdVQP32] = '\0';
            eBdVQP32 = eBdVQP32 + 1;
        };
    }
    for (; !('0' != ZBMtcTGS[(562 - 562)]) && strlen (ZBMtcTGS) != (746 - 745);) {
        {
            eBdVQP32 = 342 - 342;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (ZBMtcTGS[eBdVQP32 + (716 - 715)] != '\0') {
                ZBMtcTGS[eBdVQP32] = ZBMtcTGS[eBdVQP32 + 1];
                eBdVQP32 = eBdVQP32 + 1;
            };
        }
        ZBMtcTGS[eBdVQP32] = '\0';
    }
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
    while (hhDwKcp5aA[(784 - 784)] == '0' && strlen (hhDwKcp5aA) != 1) {
        {
            eBdVQP32 = 801 - 801;
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
            while (hhDwKcp5aA[eBdVQP32 + 1] != '\0') {
                hhDwKcp5aA[eBdVQP32] = hhDwKcp5aA[eBdVQP32 + 1];
                eBdVQP32 = eBdVQP32 + 1;
            };
        }
        hhDwKcp5aA[eBdVQP32] = '\0';
    }
    OO3TiotEk1d = strlen (ZBMtcTGS);
    {
        eBdVQP32 = 930 - 930;
        while (eBdVQP32 <= OO3TiotEk1d / 2.0 - 1) {
            quBADX3a = ZBMtcTGS[eBdVQP32];
            ZBMtcTGS[eBdVQP32] = ZBMtcTGS[OO3TiotEk1d -eBdVQP32 - 1];
            ZBMtcTGS[OO3TiotEk1d -eBdVQP32 - 1] = quBADX3a;
            eBdVQP32 = eBdVQP32 + 1;
        };
    }
    WWjMk0S = strlen (hhDwKcp5aA);
    {
        eBdVQP32 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (eBdVQP32 <= WWjMk0S / 2.0 - 1) {
            quBADX3a = hhDwKcp5aA[eBdVQP32];
            hhDwKcp5aA[eBdVQP32] = hhDwKcp5aA[WWjMk0S -eBdVQP32 - 1];
            hhDwKcp5aA[WWjMk0S -eBdVQP32 - 1] = quBADX3a;
            eBdVQP32 = eBdVQP32 + 1;
        };
    }
    {
        eBdVQP32 = 0;
        while (eBdVQP32 < ((OO3TiotEk1d >= WWjMk0S) ? OO3TiotEk1d : WWjMk0S)) {
            if (ZBMtcTGS[eBdVQP32] == '\0')
                Z6MtBFNDHca8[eBdVQP32] = Z6MtBFNDHca8[eBdVQP32] + hhDwKcp5aA[eBdVQP32] - '0';
            else {
                if (hhDwKcp5aA[eBdVQP32] == '\0')
                    Z6MtBFNDHca8[eBdVQP32] = Z6MtBFNDHca8[eBdVQP32] + ZBMtcTGS[eBdVQP32] - '0';
                else
                    Z6MtBFNDHca8[eBdVQP32] = Z6MtBFNDHca8[eBdVQP32] + ZBMtcTGS[eBdVQP32] - '0' + hhDwKcp5aA[eBdVQP32] - '0';
            }
            EgWSQvcI = eBdVQP32;
            while (Z6MtBFNDHca8[EgWSQvcI] >= 10) {
                lxGBhwI = Z6MtBFNDHca8[EgWSQvcI];
                Z6MtBFNDHca8[EgWSQvcI] = lxGBhwI % 10;
                Z6MtBFNDHca8[EgWSQvcI +1] = (lxGBhwI - Z6MtBFNDHca8[EgWSQvcI]) / 10;
                EgWSQvcI = EgWSQvcI +1;
            }
            eBdVQP32 = eBdVQP32 + 1;
        };
    }
    {
        eBdVQP32 = 0;
        while (eBdVQP32 <= EgWSQvcI) {
            Z6MtBFNDHca8[eBdVQP32] = Z6MtBFNDHca8[eBdVQP32] + '0';
            eBdVQP32++;
        };
    }
    for (eBdVQP32 = EgWSQvcI; eBdVQP32 >= 0; eBdVQP32 = eBdVQP32 - 1) {
        printf ("%c", Z6MtBFNDHca8[eBdVQP32]);
    }
    return 0;
}

