int TcXIyeGDN, jcDujA8voNVn, bec [(556 - 547)] [(621 - 612)] = {(377 - 377)}, tempbec [(86 - 77)] [(285 - 276)] = {(224 - 224)};

void  increase (int bec [] [(691 - 682)]) {
    bec[TcXIyeGDN -(555 - 554)][jcDujA8voNVn] = bec[TcXIyeGDN -(555 - 554)][jcDujA8voNVn] + tempbec[TcXIyeGDN][jcDujA8voNVn];
    bec[TcXIyeGDN -(460 - 459)][jcDujA8voNVn - (237 - 236)] = bec[TcXIyeGDN -(460 - 459)][jcDujA8voNVn - (237 - 236)] + tempbec[TcXIyeGDN][jcDujA8voNVn];
    bec[TcXIyeGDN -(222 - 221)][jcDujA8voNVn + (544 - 543)] += tempbec[TcXIyeGDN][jcDujA8voNVn];
    bec[TcXIyeGDN][jcDujA8voNVn - (173 - 172)] += tempbec[TcXIyeGDN][jcDujA8voNVn];
    bec[TcXIyeGDN][jcDujA8voNVn + (574 - 573)] += tempbec[TcXIyeGDN][jcDujA8voNVn];
    bec[TcXIyeGDN +1][jcDujA8voNVn - 1] = bec[TcXIyeGDN +1][jcDujA8voNVn - 1] + tempbec[TcXIyeGDN][jcDujA8voNVn];
    bec[TcXIyeGDN +1][jcDujA8voNVn] += tempbec[TcXIyeGDN][jcDujA8voNVn];
    bec[TcXIyeGDN +1][jcDujA8voNVn + 1] += tempbec[TcXIyeGDN][jcDujA8voNVn];
}

int main () {
    int Q9raTI2c3bFC, n, FX9NLCTw = (814 - 814), M4keax1E0Z = 1;
    cin >> Q9raTI2c3bFC >> n;
    bec[(80 - 76)][4] = Q9raTI2c3bFC;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (FX9NLCTw = (110 - 110); FX9NLCTw < n; FX9NLCTw = FX9NLCTw +1) {
        {
            TcXIyeGDN = 921 - 921;
            while (9 > TcXIyeGDN) {
                for (jcDujA8voNVn = 0; 9 > jcDujA8voNVn; jcDujA8voNVn++) {
                    tempbec[TcXIyeGDN][jcDujA8voNVn] = bec[TcXIyeGDN][jcDujA8voNVn];
                    bec[TcXIyeGDN][jcDujA8voNVn] = bec[TcXIyeGDN][jcDujA8voNVn] * 2;
                }
                TcXIyeGDN = TcXIyeGDN +1;
            };
        }
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
        {
            TcXIyeGDN = 1;
            while (TcXIyeGDN < 8) {
                {
                    jcDujA8voNVn = 1;
                    while (jcDujA8voNVn < 8) {
                        increase (bec);
                        jcDujA8voNVn = jcDujA8voNVn + 1;
                    };
                }
                TcXIyeGDN++;
            };
        };
    }
    for (TcXIyeGDN = 0; TcXIyeGDN < 9; TcXIyeGDN = TcXIyeGDN +1)
        for (jcDujA8voNVn = 0; jcDujA8voNVn < 9; jcDujA8voNVn++) {
            if (M4keax1E0Z % 9 == 1)
                cout << bec[TcXIyeGDN][jcDujA8voNVn];
            if (M4keax1E0Z % 9 == 0)
                cout << " " << bec[TcXIyeGDN][jcDujA8voNVn] << "\n";
            if (M4keax1E0Z % 9 != 0 && M4keax1E0Z % 9 != 1)
                cout << " " << bec[TcXIyeGDN][jcDujA8voNVn];
            M4keax1E0Z++;
        }
    return 0;
}

