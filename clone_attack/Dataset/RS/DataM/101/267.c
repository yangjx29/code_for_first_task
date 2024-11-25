int main () {
    int ww07ifxFEP [3];
    int fan [3];
    int FN5BkM8 [3];
    int i;
    int UEl7mA2DZnt;
    int sigc4q;
    {
        i = 0;
        while (i < 3) {
            {
                UEl7mA2DZnt = 0;
                while (UEl7mA2DZnt < 3) {
                    if (UEl7mA2DZnt == i) {
                        continue;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    {
                        sigc4q = 0;
                        while (sigc4q < 3) {
                            int p;
                            if ((sigc4q == UEl7mA2DZnt) || (sigc4q == i)) {
                                continue;
                            }
                            ww07ifxFEP[0] = i;
                            ww07ifxFEP[1] = UEl7mA2DZnt;
                            ww07ifxFEP[2] = sigc4q;
                            fan[ww07ifxFEP[0]] = 0;
                            fan[ww07ifxFEP[1]] = 1;
                            fan[ww07ifxFEP[2]] = 2;
                            FN5BkM8[0] = (ww07ifxFEP[1] > ww07ifxFEP[0]) + (ww07ifxFEP[2] == ww07ifxFEP[0]);
                            FN5BkM8[1] = (ww07ifxFEP[0] > ww07ifxFEP[1]) + (ww07ifxFEP[0] > ww07ifxFEP[2]);
                            FN5BkM8[2] = (ww07ifxFEP[2] > ww07ifxFEP[1]) + (ww07ifxFEP[1] > ww07ifxFEP[0]);
                            for (p = 0; p < 3; p++) {
                                if (ww07ifxFEP[p] + FN5BkM8[p] != 2) {
                                    break;
                                };
                            }
                            sigc4q++;
                            if (p == 3) {
                                int t;
                                {
                                    t = 0;
                                    while (t < 3) {
                                        cout << (char) ('A' + fan[t]);
                                        t++;
                                    };
                                };
                            };
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    UEl7mA2DZnt = UEl7mA2DZnt +1;
                };
            }
            i++;
        };
    }
    return 0;
}

