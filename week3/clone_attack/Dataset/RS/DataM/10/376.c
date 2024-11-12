int main () {
    int i, a [(339 - 314)], ZTGKHfh07lNR [25], k, NBlMU8 = (355 - 355);
    scanf ("%d", &k);
    for (i = 0; i < k; i++)
        scanf ("%d", &ZTGKHfh07lNR[i]);
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
        while (i < k) {
            a[i] = zuo (i, k, ZTGKHfh07lNR) + you (i, k, ZTGKHfh07lNR) - (643 - 642);
            if (NBlMU8 < a[i])
                NBlMU8 = a[i];
            i = i + 1;
        };
    }
    printf ("%d", NBlMU8);
    return 0;
}

int zuo (int i, int k, int ZTGKHfh07lNR []) {
    int NBlMU8 = (492 - 491), j, rboH0XcnwB = 0, F5rZEaemXsQ = 0;
    if (i) {
        {
            j = i - 1;
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
            while (0 <= j) {
                if (ZTGKHfh07lNR[j] >= ZTGKHfh07lNR[i]) {
                    rboH0XcnwB = zuo (j, k, ZTGKHfh07lNR);
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
                    if (rboH0XcnwB > F5rZEaemXsQ)
                        F5rZEaemXsQ = rboH0XcnwB;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j--;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        NBlMU8 = NBlMU8 +rboH0XcnwB;
    }
    return NBlMU8;
}

int you (int i, int k, int ZTGKHfh07lNR []) {
    int NBlMU8 = 1, j, rboH0XcnwB = 0, F5rZEaemXsQ = 0;
    if (i != k - 1) {
        {
            j = i + 1;
            while (j < k) {
                if (ZTGKHfh07lNR[j] <= ZTGKHfh07lNR[i]) {
                    rboH0XcnwB = you (j, k, ZTGKHfh07lNR);
                    if (rboH0XcnwB > F5rZEaemXsQ)
                        F5rZEaemXsQ = rboH0XcnwB;
                }
                j = j + 1;
            };
        }
        NBlMU8 = NBlMU8 +F5rZEaemXsQ;
    }
    return NBlMU8;
}

