int main () {
    int hUa2E6;
    int sCZzAJIXi;
    int i;
    int gdXEjTlp [(5341 - 341)];
    int b [5000];
    int sum [10001] = {0};
    int QSmHjzwtFgO;
    int EkWwrj;
    int d;
    hUa2E6 = 0;
    scanf ("%d", &sCZzAJIXi);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sCZzAJIXi > i) {
            scanf ("%d%d", &gdXEjTlp[i], &b[i]);
            EkWwrj = gdXEjTlp[i];
            d = b[i];
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
            i++;
            for (; d > EkWwrj; EkWwrj = EkWwrj +1)
                sum[EkWwrj] = 1;
        };
    }
    QSmHjzwtFgO = gdXEjTlp[0];
    {
        i = 0;
        while (i < sCZzAJIXi) {
            if (hUa2E6 < b[i])
                hUa2E6 = b[i];
            if (QSmHjzwtFgO > gdXEjTlp[i])
                QSmHjzwtFgO = gdXEjTlp[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = QSmHjzwtFgO; i < hUa2E6; i++) {
        if (sum[i] == 0) {
            return 0;
        };
    }
    printf ("%d %d", QSmHjzwtFgO, hUa2E6);
    return 0;
}

