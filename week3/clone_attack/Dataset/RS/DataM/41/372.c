int main () {
    int k;
    int rank [10];
    int thought [10];
    int SQYE6fHhl;
    int sOrIiCbUX;
    int c;
    int JcEHkUi;
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
    int wTeK1Hcv5ts;
    int i;
    k = 0;
    for (SQYE6fHhl = (453 - 452); (555 - 550) >= SQYE6fHhl; SQYE6fHhl++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (sOrIiCbUX = 1; 5 >= sOrIiCbUX; sOrIiCbUX = sOrIiCbUX + 1) {
            if (!(sOrIiCbUX != SQYE6fHhl))
                continue;
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
            for (c = 1; 5 >= c; c++) {
                if (!(c != SQYE6fHhl) || sOrIiCbUX == c)
                    continue;
                for (JcEHkUi = 1; JcEHkUi <= 5; JcEHkUi = JcEHkUi +1) {
                    if (!(JcEHkUi != SQYE6fHhl) || sOrIiCbUX == JcEHkUi || c == JcEHkUi)
                        continue;
                    for (wTeK1Hcv5ts = 1; wTeK1Hcv5ts <= 5; wTeK1Hcv5ts++) {
                        if (!(wTeK1Hcv5ts != SQYE6fHhl) || sOrIiCbUX == wTeK1Hcv5ts || !(wTeK1Hcv5ts != c) || JcEHkUi == wTeK1Hcv5ts || wTeK1Hcv5ts == 2 || wTeK1Hcv5ts == 3)
                            continue;
                        thought[SQYE6fHhl] = (wTeK1Hcv5ts == 1);
                        thought[sOrIiCbUX] = (sOrIiCbUX == 2);
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
                        thought[c] = (SQYE6fHhl == 5);
                        thought[JcEHkUi] = (c != 1);
                        thought[wTeK1Hcv5ts] = (JcEHkUi == 1);
                        if (thought[1] == 1 && thought[2] == 1 && thought[3] == 0 && thought[4] == 0 && thought[5] == 0) {
                            rank[1] = SQYE6fHhl;
                            rank[2] = sOrIiCbUX;
                            rank[3] = c;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            rank[4] = JcEHkUi;
                            rank[5] = wTeK1Hcv5ts;
                        };
                    };
                };
            };
        };
    }
    for (i = 1; i <= 5; i = i + 1) {
        if (k == 0) {
            cout << rank[i];
            k = k + 1;
        }
        else if (k != 0)
            cout << " " << rank[i];
    }
    return 0;
}

