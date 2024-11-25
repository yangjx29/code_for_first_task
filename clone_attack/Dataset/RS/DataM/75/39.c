int main () {
    int kUgVsEndRFCI;
    int AioZBRnpqX;
    int ZlR4kY0;
    int NjUIMhi9lSu;
    int n1lqgxJ4LH;
    int m2hqW9BT;
    kUgVsEndRFCI = 0;
    AioZBRnpqX = 0;
    ZlR4kY0 = 0;
    int pxed6u [1000] = {(604 - 604)}, OqnFpdSje [1000] = {0}, s [1000] = {0};
    char noGaU9CQI;
    while (cin >> pxed6u[kUgVsEndRFCI]) {
        noGaU9CQI = getchar ();
        if (!('\n' != noGaU9CQI))
            break;
        kUgVsEndRFCI++;
    }
    m2hqW9BT = pxed6u[0];
    for (NjUIMhi9lSu = 0; NjUIMhi9lSu < kUgVsEndRFCI; NjUIMhi9lSu++) {
        cin >> OqnFpdSje[NjUIMhi9lSu];
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
        noGaU9CQI = getchar ();
    }
    for (NjUIMhi9lSu = 0; NjUIMhi9lSu < kUgVsEndRFCI; NjUIMhi9lSu++) {
        if (m2hqW9BT > pxed6u[NjUIMhi9lSu])
            m2hqW9BT = pxed6u[NjUIMhi9lSu];
        if (OqnFpdSje[NjUIMhi9lSu] > AioZBRnpqX)
            AioZBRnpqX = OqnFpdSje[NjUIMhi9lSu];
    }
    {
        NjUIMhi9lSu = m2hqW9BT;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (NjUIMhi9lSu <= AioZBRnpqX) {
            for (n1lqgxJ4LH = 0; kUgVsEndRFCI >= n1lqgxJ4LH; n1lqgxJ4LH++) {
                if (pxed6u[n1lqgxJ4LH] <= NjUIMhi9lSu &&OqnFpdSje[n1lqgxJ4LH] > NjUIMhi9lSu)
                    s[NjUIMhi9lSu]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
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
            NjUIMhi9lSu = NjUIMhi9lSu +1;
        };
    }
    {
        NjUIMhi9lSu = m2hqW9BT;
        while (NjUIMhi9lSu <= AioZBRnpqX) {
            if (ZlR4kY0 < s[NjUIMhi9lSu])
                ZlR4kY0 = s[NjUIMhi9lSu];
            NjUIMhi9lSu++;
        };
    }
    cout << kUgVsEndRFCI << " " << ZlR4kY0 << endl;
    return 0;
}

