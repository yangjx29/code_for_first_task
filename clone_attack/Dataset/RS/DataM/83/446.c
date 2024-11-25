int main () {
    int r0DhtlF;
    int yTQe0P;
    int a [10];
    int ziHLmrka9KUp [10];
    r0DhtlF = 0;
    double  ILcTWXt41, SByR8rC = 0.0;
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
    scanf ("%d", &yTQe0P);
    for (int L0AD9hb = 0;
    yTQe0P > L0AD9hb; L0AD9hb = L0AD9hb +1) {
        scanf ("%d", &a[L0AD9hb]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        r0DhtlF += a[L0AD9hb];
    }
    for (int j = 0;
    yTQe0P > j; j++) {
        scanf ("%d", &ziHLmrka9KUp[j]);
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
        if (ziHLmrka9KUp[j] >= 90 && 100 >= ziHLmrka9KUp[j]) {
            SByR8rC = SByR8rC +a[j] * 4.0;
        }
        else if (ziHLmrka9KUp[j] >= 85 && 89 >= ziHLmrka9KUp[j]) {
            SByR8rC = SByR8rC +a[j] * 3.7;
        }
        else {
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
            if (82 <= ziHLmrka9KUp[j] && ziHLmrka9KUp[j] <= 84) {
                SByR8rC = SByR8rC +a[j] * 3.3;
            }
            else if (78 <= ziHLmrka9KUp[j] && ziHLmrka9KUp[j] <= 81) {
                SByR8rC = SByR8rC +a[j] * 3.0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (ziHLmrka9KUp[j] >= 75 && ziHLmrka9KUp[j] <= 77) {
                    SByR8rC = SByR8rC +a[j] * 2.7;
                }
                else if (72 <= ziHLmrka9KUp[j] && ziHLmrka9KUp[j] <= 74) {
                    SByR8rC = SByR8rC +a[j] * 2.3;
                }
                else if (68 <= ziHLmrka9KUp[j] && ziHLmrka9KUp[j] <= 71) {
                    SByR8rC = SByR8rC +a[j] * 2.0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else if (64 <= ziHLmrka9KUp[j] && ziHLmrka9KUp[j] <= 67) {
                    SByR8rC = SByR8rC +a[j] * 1.5;
                }
                else if (60 <= ziHLmrka9KUp[j] && ziHLmrka9KUp[j] <= 63) {
                    SByR8rC = SByR8rC +a[j] * 1.0;
                }
                else {
                    SByR8rC = SByR8rC;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                };
            };
        };
    }
    ILcTWXt41 = SByR8rC / r0DhtlF;
    printf ("%.2lf", ILcTWXt41);
    return 0;
}

