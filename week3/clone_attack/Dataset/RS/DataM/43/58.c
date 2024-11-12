int tlPnOAQ (int xpYqQV) {
    int wqTCWR5, erfLMjv16Rx;
    if (xpYqQV <= (262 - 261))
        return ((322 - 322));
    if (xpYqQV == 2)
        return (1);
    if (xpYqQV % 2 == 0)
        return (0);
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
    wqTCWR5 = sqrt (xpYqQV) + 1;
    {
        erfLMjv16Rx = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (erfLMjv16Rx <= wqTCWR5) {
            if (xpYqQV % erfLMjv16Rx == 0)
                return (0);
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
            erfLMjv16Rx += 2;
        };
    }
    return (1);
}

int main () {
    int aV69AUrM;
    int y;
    int ZgDyAZmXTK;
    scanf ("%d", &aV69AUrM);
    {
        y = 3;
        while (y <= aV69AUrM / 2) {
            ZgDyAZmXTK = aV69AUrM - y;
            if (tlPnOAQ (y) && tlPnOAQ (ZgDyAZmXTK))
                printf ("%d %d\n", y, ZgDyAZmXTK);
            y += 2;
        };
    }
    return 0;
}

