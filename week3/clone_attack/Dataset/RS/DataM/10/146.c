int main () {
    int n8ZMDq3X7;
    int Jvt1DeLcPF8;
    int CAIlywTb;
    int LXC1w7lSI;
    int YLcVq0;
    int yijJaX;
    int mOhZwgy3P;
    int *ULCgI5zZr = (int *) malloc (sizeof (int) * n8ZMDq3X7);
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
    int *zb5fcwB3t = (int *) malloc (sizeof (int) * n8ZMDq3X7);
    scanf ("%d", &n8ZMDq3X7);
    for (LXC1w7lSI = 0; LXC1w7lSI < n8ZMDq3X7; LXC1w7lSI = LXC1w7lSI +1) {
        scanf ("%d", &ULCgI5zZr[LXC1w7lSI]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        zb5fcwB3t[LXC1w7lSI] = 1;
    }
    mOhZwgy3P = 1;
    for (YLcVq0 = n8ZMDq3X7 - 1; 0 <= YLcVq0; YLcVq0 = YLcVq0 -1) {
        CAIlywTb = 1;
        {
            yijJaX = YLcVq0 +1;
            while (yijJaX < n8ZMDq3X7) {
                if (ULCgI5zZr[YLcVq0] >= ULCgI5zZr[yijJaX]) {
                    zb5fcwB3t[YLcVq0] = zb5fcwB3t[yijJaX] + 1;
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
                    if (zb5fcwB3t[YLcVq0] >= CAIlywTb) {
                        CAIlywTb = zb5fcwB3t[YLcVq0];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                yijJaX = yijJaX + 1;
            };
        }
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
        zb5fcwB3t[YLcVq0] = CAIlywTb;
        if (CAIlywTb >= mOhZwgy3P) {
            mOhZwgy3P = CAIlywTb;
        };
    }
    printf ("%d", mOhZwgy3P);
    return 0;
}

