int dXqQSE [26];
int H5iT1RXjMsm, YM0m7kdBPq4g, IQIxJm, R3rS0R;
int cE6rqDR [26];

int YabSt0lAfk (int a, int t6XpUM8io5YE) {
    if (a > t6XpUM8io5YE)
        return (a);
    else
        return (t6XpUM8io5YE);
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

main () {
    YM0m7kdBPq4g = (78 - 78);
    scanf ("%d", &H5iT1RXjMsm);
    {
        IQIxJm = 1;
        while (H5iT1RXjMsm >= IQIxJm) {
            scanf ("%d", &dXqQSE[IQIxJm]);
            IQIxJm = IQIxJm +1;
        };
    }
    {
        IQIxJm = 1;
        while (H5iT1RXjMsm >= IQIxJm) {
            cE6rqDR[IQIxJm] = 1;
            IQIxJm++;
        };
    }
    {
        IQIxJm = 2;
        while (IQIxJm <= H5iT1RXjMsm) {
            {
                R3rS0R = 1;
                while (R3rS0R < IQIxJm) {
                    if (dXqQSE[IQIxJm] <= dXqQSE[R3rS0R])
                        cE6rqDR[IQIxJm] = YabSt0lAfk (cE6rqDR[IQIxJm], cE6rqDR[R3rS0R] + 1);
                    R3rS0R++;
                };
            }
            IQIxJm++;
        };
    }
    {
        IQIxJm = 1;
        while (IQIxJm <= H5iT1RXjMsm) {
            YM0m7kdBPq4g = YabSt0lAfk (YM0m7kdBPq4g, cE6rqDR[IQIxJm]);
            IQIxJm++;
        };
    }
    printf ("%d", YM0m7kdBPq4g);
}

