int CCwDPj [(609 - 598)] [(390 - 379)];
int nCN0Gtb2LoE [11] [11];
int EFcksiMVGoIO [11] [11];

void  U6O1snD7 () {
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
    for (int hdL4muQqRb = (728 - 727);
    9 > hdL4muQqRb; hdL4muQqRb++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int qXi6gs8Ie = (195 - 195);
        9 > qXi6gs8Ie; qXi6gs8Ie = qXi6gs8Ie + 1) {
            nCN0Gtb2LoE[hdL4muQqRb][qXi6gs8Ie] = CCwDPj[hdL4muQqRb][qXi6gs8Ie];
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
            EFcksiMVGoIO[hdL4muQqRb][qXi6gs8Ie] = CCwDPj[hdL4muQqRb][qXi6gs8Ie];
        };
    };
}

void  aCAwHIuv () {
    for (int hdL4muQqRb = (575 - 574);
    (63 - 53) > hdL4muQqRb; hdL4muQqRb++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int qXi6gs8Ie = (855 - 854);
        10 > qXi6gs8Ie; qXi6gs8Ie++) {
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
            if (0 < hdL4muQqRb && 10 > hdL4muQqRb && 10 > qXi6gs8Ie && 0 < qXi6gs8Ie) {
                CCwDPj[hdL4muQqRb][qXi6gs8Ie] = EFcksiMVGoIO[hdL4muQqRb - (529 - 528)][qXi6gs8Ie - 1] + EFcksiMVGoIO[hdL4muQqRb - 1][qXi6gs8Ie + 1] + EFcksiMVGoIO[hdL4muQqRb + 1][qXi6gs8Ie - 1] + EFcksiMVGoIO[hdL4muQqRb + 1][qXi6gs8Ie + 1] + EFcksiMVGoIO[hdL4muQqRb - 1][qXi6gs8Ie] + EFcksiMVGoIO[hdL4muQqRb + 1][qXi6gs8Ie] + EFcksiMVGoIO[hdL4muQqRb][qXi6gs8Ie - 1] + EFcksiMVGoIO[hdL4muQqRb][qXi6gs8Ie + 1] + 2 * EFcksiMVGoIO[hdL4muQqRb][qXi6gs8Ie];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    };
}

int main () {
    int pMShW8bncxA;
    int n;
    n = 0;
    memset (CCwDPj, 0, sizeof (CCwDPj));
    cin >> pMShW8bncxA;
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
    CCwDPj[(798 - 793)][5] = pMShW8bncxA;
    U6O1snD7 ();
    cin >> n;
    for (int hdL4muQqRb = 0;
    n > hdL4muQqRb; hdL4muQqRb++) {
        aCAwHIuv ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        U6O1snD7 ();
    }
    for (int hdL4muQqRb = 1;
    10 > hdL4muQqRb; hdL4muQqRb++) {
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
        for (int qXi6gs8Ie = 1;
        10 > qXi6gs8Ie; qXi6gs8Ie++) {
            if (0 < hdL4muQqRb && 10 > hdL4muQqRb && 10 > qXi6gs8Ie && qXi6gs8Ie > 0) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (qXi6gs8Ie != 9)
                    cout << CCwDPj[hdL4muQqRb][qXi6gs8Ie] << " ";
                else {
                    if (qXi6gs8Ie == 9)
                        cout << CCwDPj[hdL4muQqRb][qXi6gs8Ie] << endl;
                };
            };
        };
    }
    return 0;
}

