int main () {
    int kNeu10;
    scanf ("%d", &kNeu10);
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
    if (10000 <= kNeu10) {
        int eBi8hrMA, vxUnwZQ, c, d, IJwmQXzp, K2pj8XPmfy;
        eBi8hrMA = kNeu10 / 10000;
        vxUnwZQ = (kNeu10 - eBi8hrMA * 10000) / (1580 - 580);
        c = (kNeu10 - eBi8hrMA * 10000 - vxUnwZQ * 1000) / (419 - 319);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d = (kNeu10 - eBi8hrMA * 10000 - vxUnwZQ * 1000 - c * 100) / (627 - 617);
        IJwmQXzp = kNeu10 - eBi8hrMA * 10000 - vxUnwZQ * 1000 - c * 100 - d * 10;
        K2pj8XPmfy = IJwmQXzp *10000 + d * 1000 + c * 100 + vxUnwZQ * 10 + eBi8hrMA;
        printf ("%d", K2pj8XPmfy);
    }
    else {
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
        if (10000 > kNeu10 && 1000 <= kNeu10) {
            int eBi8hrMA;
            int vxUnwZQ;
            int c;
            int d;
            int K2pj8XPmfy;
            eBi8hrMA = kNeu10 / 1000;
            vxUnwZQ = (kNeu10 - eBi8hrMA * 1000) / 100;
            c = (kNeu10 - eBi8hrMA * 1000 - vxUnwZQ * 100) / 10;
            d = kNeu10 - eBi8hrMA * 1000 - vxUnwZQ * 100 - c * 10;
            K2pj8XPmfy = d * 1000 + c * 100 + vxUnwZQ * 10 + eBi8hrMA;
            printf ("%d", K2pj8XPmfy);
        }
        else if (kNeu10 >= 100) {
            int eBi8hrMA;
            int vxUnwZQ;
            int c;
            int K2pj8XPmfy;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            eBi8hrMA = kNeu10 / 100;
            vxUnwZQ = (kNeu10 - eBi8hrMA * 100) / 10;
            c = kNeu10 - eBi8hrMA * 100 - vxUnwZQ * 10;
            K2pj8XPmfy = c * 100 + vxUnwZQ * 10 + eBi8hrMA;
            printf ("%d", K2pj8XPmfy);
        }
        else if (kNeu10 >= 10) {
            int eBi8hrMA, vxUnwZQ, K2pj8XPmfy;
            eBi8hrMA = kNeu10 / 10;
            vxUnwZQ = kNeu10 - eBi8hrMA * 10;
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
            K2pj8XPmfy = vxUnwZQ * 10 + eBi8hrMA;
            printf ("%d", K2pj8XPmfy);
        }
        else {
            printf ("%d", kNeu10);
        };
    }
    return 0;
}

