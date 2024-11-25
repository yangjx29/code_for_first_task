int main () {
    int n;
    int L0Bqpa4rQ;
    int t;
    int Zj4LTtUMk;
    int max1;
    int F60qJ5;
    int min1;
    int min;
    int mar [100];
    char kaIoOQT [(1173 - 173)];
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
    gets (kaIoOQT);
    min = 65535;
    L0Bqpa4rQ = 0;
    n = strlen (kaIoOQT);
    t = 0;
    F60qJ5 = 0;
    for (; n > L0Bqpa4rQ;) {
        if (('a' <= kaIoOQT[L0Bqpa4rQ] && 'z' >= kaIoOQT[L0Bqpa4rQ]) || ('A' <= kaIoOQT[L0Bqpa4rQ] && 'Z' >= kaIoOQT[L0Bqpa4rQ])) {
            Zj4LTtUMk = 0;
            t++;
            mar[t] = L0Bqpa4rQ;
            for (; ('a' <= kaIoOQT[L0Bqpa4rQ] && 'z' >= kaIoOQT[L0Bqpa4rQ]) || (kaIoOQT[L0Bqpa4rQ] >= 'A' && kaIoOQT[L0Bqpa4rQ] <= 'Z');) {
                Zj4LTtUMk++;
                L0Bqpa4rQ = L0Bqpa4rQ +1;
            }
            if (F60qJ5 < Zj4LTtUMk) {
                F60qJ5 = Zj4LTtUMk;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                max1 = t;
            }
            if (min > Zj4LTtUMk) {
                min1 = t;
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
                min = Zj4LTtUMk;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        L0Bqpa4rQ++;
    }
    {
        L0Bqpa4rQ = max1;
        while (L0Bqpa4rQ < mar[max1] + F60qJ5) {
            printf ("%c", kaIoOQT[L0Bqpa4rQ]);
            L0Bqpa4rQ++;
        };
    }
    {
        L0Bqpa4rQ = min1;
        while (L0Bqpa4rQ < mar[min1] + min) {
            printf ("%c", kaIoOQT[L0Bqpa4rQ]);
            L0Bqpa4rQ++;
        };
    }
    printf ("\n");
    return 0;
}

