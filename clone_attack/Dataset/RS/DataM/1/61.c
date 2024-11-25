int fg (int k, int m) {
    int yxsNc2zFO;
    int eeV18GY;
    yxsNc2zFO = 0;
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
    if (m == 1) {
        yxsNc2zFO = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        eeV18GY = k;
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
        while (m >= eeV18GY) {
            if (m % eeV18GY == 0)
                yxsNc2zFO = yxsNc2zFO + fg (eeV18GY, m / eeV18GY);
            eeV18GY++;
        };
    }
    return (yxsNc2zFO);
}

int main () {
    int n;
    int qhqBGKF4bDp;
    int a [40000];
    int b [40000];
    int rHCxR4rKD6Wz;
    scanf ("%d", &n);
    {
        qhqBGKF4bDp = 1;
        while (qhqBGKF4bDp <= n) {
            scanf ("%d", &a[qhqBGKF4bDp]);
            qhqBGKF4bDp = qhqBGKF4bDp + 1;
        };
    }
    for (qhqBGKF4bDp = 1; qhqBGKF4bDp <= n; qhqBGKF4bDp++) {
        b[qhqBGKF4bDp] = fg (2, a[qhqBGKF4bDp]);
        printf ("%d\n", b[qhqBGKF4bDp]);
    }
    return 0;
}

