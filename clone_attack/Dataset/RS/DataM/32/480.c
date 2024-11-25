void  main () {
    int BbU1WtwG3Zh, uIu8PSK, t, M35JXqIW, vBQGmqAd;
    int bSTi1zjMpYE, result [100];
    char YOCvqKirfhNu [100];
    char po6uKRW1 [100];
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
    char tEl2tipzGgc [2];
    scanf ("%d", &bSTi1zjMpYE);
    for (BbU1WtwG3Zh = 0; bSTi1zjMpYE > BbU1WtwG3Zh; BbU1WtwG3Zh++) {
        gets (tEl2tipzGgc);
        gets (YOCvqKirfhNu);
        gets (po6uKRW1);
        uIu8PSK = strlen (YOCvqKirfhNu);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t = strlen (po6uKRW1);
        for (M35JXqIW = uIu8PSK - 1;; M35JXqIW--) {
            if (po6uKRW1[M35JXqIW -uIu8PSK + t] <= YOCvqKirfhNu[M35JXqIW])
                result[M35JXqIW] = YOCvqKirfhNu[M35JXqIW] - po6uKRW1[M35JXqIW -uIu8PSK + t];
            else {
                result[M35JXqIW] = YOCvqKirfhNu[M35JXqIW] - po6uKRW1[M35JXqIW -uIu8PSK + t] + 10;
                YOCvqKirfhNu[M35JXqIW -1]--;
            }
            if (!(0 != M35JXqIW -uIu8PSK + t))
                break;
        }
        for (vBQGmqAd = 0; M35JXqIW > vBQGmqAd; vBQGmqAd = vBQGmqAd + 1)
            result[vBQGmqAd] = YOCvqKirfhNu[vBQGmqAd] - '0';
        if (0 < M35JXqIW) {
            for (vBQGmqAd = 0; uIu8PSK > vBQGmqAd; vBQGmqAd++)
                printf ("%d", result[vBQGmqAd]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            for (vBQGmqAd = 0; vBQGmqAd < uIu8PSK; vBQGmqAd++)
                if (result[vBQGmqAd] != 0)
                    break;
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
            for (M35JXqIW = vBQGmqAd; M35JXqIW < uIu8PSK; M35JXqIW++)
                printf ("%d", result[vBQGmqAd]);
        };
    };
}

