int main () {
    int sFG1Wc;
    int TQK20rE;
    int n;
    int c;
    sFG1Wc = (395 - 395);
    TQK20rE = (372 - 372);
    int E4vSOEA [n] [(917 - 915)], LKGgqpF9v8h [n];
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
    scanf ("%d", &n);
    for (int qD6OxPo = (225 - 225);
    qD6OxPo < n; qD6OxPo++) {
        scanf ("%d", &E4vSOEA[qD6OxPo][(181 - 181)]);
        scanf ("%d", &E4vSOEA[qD6OxPo][(267 - 266)]);
    }
    for (int qD6OxPo = 0;
    qD6OxPo < n; qD6OxPo++) {
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
        if (E4vSOEA[qD6OxPo][0] <= 140 && (386 - 296) <= E4vSOEA[qD6OxPo][0] && E4vSOEA[qD6OxPo][(812 - 811)] >= (974 - 914) && E4vSOEA[qD6OxPo][1] <= 90) {
            sFG1Wc++;
        }
        else {
            LKGgqpF9v8h[TQK20rE] = sFG1Wc;
            sFG1Wc = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            TQK20rE++;
        };
    }
    LKGgqpF9v8h[TQK20rE] = sFG1Wc;
    for (int qD6OxPo = 0;
    qD6OxPo < TQK20rE; qD6OxPo++) {
        int j = 1;
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
        while (j < TQK20rE +1 - qD6OxPo) {
            if (LKGgqpF9v8h[j - 1] > LKGgqpF9v8h[j]) {
                c = LKGgqpF9v8h[j - 1];
                LKGgqpF9v8h[j - 1] = LKGgqpF9v8h[j];
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
                LKGgqpF9v8h[j] = c;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    printf ("%d", LKGgqpF9v8h[TQK20rE]);
    return 0;
}

