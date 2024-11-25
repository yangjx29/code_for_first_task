char mLz9JAhTOUVb [101] [101];
int wpaiR76UThS [10000] [2];
int m1yqAB90 (int, int);

int main () {
    int acQ6zZGN;
    int wgC3DS;
    int n;
    acQ6zZGN = (106 - 106);
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
    cin >> n;
    {
        int Uz2WvuyCMJ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Uz2WvuyCMJ = (592 - 592);
        while (n > Uz2WvuyCMJ) {
            {
                int lBueyMq3 = 0;
                while (n > lBueyMq3) {
                    cin >> mLz9JAhTOUVb[Uz2WvuyCMJ][lBueyMq3];
                    if (!('@' != mLz9JAhTOUVb[Uz2WvuyCMJ][lBueyMq3]))
                        acQ6zZGN = acQ6zZGN + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    lBueyMq3 = lBueyMq3 + 1;
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
            Uz2WvuyCMJ = Uz2WvuyCMJ +1;
        };
    }
    cin >> wgC3DS;
    cout << acQ6zZGN + m1yqAB90 (wgC3DS - 1, n) << endl;
    return 0;
}

int m1yqAB90 (int GdpzAx, int n) {
    int count = 0, b8DOp4r = 0, x, A7gnVFro;
    {
        int Uz2WvuyCMJ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n > Uz2WvuyCMJ) {
            {
                int lBueyMq3 = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (n > lBueyMq3) {
                    if (!('@' != mLz9JAhTOUVb[Uz2WvuyCMJ][lBueyMq3])) {
                        wpaiR76UThS[b8DOp4r][0] = Uz2WvuyCMJ;
                        wpaiR76UThS[b8DOp4r][1] = lBueyMq3;
                        b8DOp4r = b8DOp4r + 1;
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
                    lBueyMq3 = lBueyMq3 + 1;
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
            Uz2WvuyCMJ = Uz2WvuyCMJ +1;
        };
    }
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
    {
        int neRd9M = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (b8DOp4r > neRd9M) {
            x = wpaiR76UThS[neRd9M][0];
            A7gnVFro = wpaiR76UThS[neRd9M][1];
            neRd9M++;
            if (0 < x && !('.' != mLz9JAhTOUVb[x - 1][A7gnVFro])) {
                mLz9JAhTOUVb[x - 1][A7gnVFro] = '@';
                count = count + 1;
            }
            if (n > x && !('.' != mLz9JAhTOUVb[x + 1][A7gnVFro])) {
                count = count + 1;
                mLz9JAhTOUVb[x + 1][A7gnVFro] = '@';
            }
            if (A7gnVFro > 0 && mLz9JAhTOUVb[x][A7gnVFro -1] == '.') {
                mLz9JAhTOUVb[x][A7gnVFro -1] = '@';
                count = count + 1;
            }
            if (A7gnVFro < n && mLz9JAhTOUVb[x][A7gnVFro +1] == '.') {
                count++;
                mLz9JAhTOUVb[x][A7gnVFro +1] = '@';
            };
        };
    }
    if (GdpzAx == 1)
        return count;
    else
        return count + m1yqAB90 (GdpzAx -1, n);
}

