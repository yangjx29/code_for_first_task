int main () {
    int a [5] [5], xZVFX5g0 [5];
    int tQKz2JBn0cPO, n, bHhFCv, IKYrvdq;
    {
        bHhFCv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bHhFCv <= (294 - 290)) {
            scanf ("%d %d %d %d %d\n", &a[bHhFCv][0], &a[bHhFCv][1], &a[bHhFCv][2], &a[bHhFCv][3], &a[bHhFCv][4]);
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
            bHhFCv++;
        };
    }
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
    scanf ("%d %d", &tQKz2JBn0cPO, &n);
    if (0 <= tQKz2JBn0cPO && tQKz2JBn0cPO <= 4 && 0 <= n && 4 >= n) {
        for (IKYrvdq = 0; IKYrvdq <= 4; IKYrvdq++) {
            xZVFX5g0[IKYrvdq] = a[tQKz2JBn0cPO][IKYrvdq];
            a[tQKz2JBn0cPO][IKYrvdq] = a[n][IKYrvdq];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a[n][IKYrvdq] = xZVFX5g0[IKYrvdq];
        }
        for (bHhFCv = 0; bHhFCv <= 4; bHhFCv++) {
            printf ("%d %d %d %d %d\n", a[bHhFCv][0], a[bHhFCv][1], a[bHhFCv][2], a[bHhFCv][3], a[bHhFCv][4]);
        };
    }
    if (tQKz2JBn0cPO < 0 || tQKz2JBn0cPO > 4 || n < 0 || n > 4)
        ;
}

