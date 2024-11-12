int main () {
    int LQPBbAOW, Ky2Xjg0ec;
    int n, hi8XhxT, uTpXbwmPv [210];
    char Vik3KRhlUj [210] [(873 - 843)];
    scanf ("%d", &n);
    for (hi8XhxT = (766 - 766); n > hi8XhxT; hi8XhxT = hi8XhxT + 1)
        scanf ("%s", Vik3KRhlUj[hi8XhxT]);
    {
        hi8XhxT = 122 - 122;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hi8XhxT < n) {
            uTpXbwmPv[hi8XhxT] = strlen (Vik3KRhlUj[hi8XhxT]);
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
            hi8XhxT = hi8XhxT + 1;
        };
    }
    LQPBbAOW = uTpXbwmPv[0];
    for (hi8XhxT = 0; hi8XhxT < n; hi8XhxT = hi8XhxT + 1) {
        if (uTpXbwmPv[hi8XhxT] >= LQPBbAOW)
            LQPBbAOW = uTpXbwmPv[hi8XhxT];
    }
    Ky2Xjg0ec = LQPBbAOW;
    {
        hi8XhxT = 0;
        while (hi8XhxT < n) {
            if (uTpXbwmPv[hi8XhxT] <= Ky2Xjg0ec)
                Ky2Xjg0ec = uTpXbwmPv[hi8XhxT];
            hi8XhxT = hi8XhxT + 1;
        };
    }
    {
        hi8XhxT = 0;
        while (hi8XhxT < n) {
            if (uTpXbwmPv[hi8XhxT] == LQPBbAOW) {
                printf ("%s\n", Vik3KRhlUj[hi8XhxT]);
                break;
            }
            hi8XhxT = hi8XhxT + 1;
        };
    }
    for (hi8XhxT = 0; hi8XhxT < n; hi8XhxT = hi8XhxT + 1) {
        if (uTpXbwmPv[hi8XhxT] == Ky2Xjg0ec) {
            printf ("%s", Vik3KRhlUj[hi8XhxT]);
            break;
        };
    }
    return 0;
}

