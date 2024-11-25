int main () {
    struct   point {
        int x32PtLYi, eiBzr0;
    }
    mfwSsAX [(50740 - 739)];
    struct   point {
        int x32PtLYi, eiBzr0;
    }
    yQYWJs;
    int Ip1VvsyXr0jt;
    int CrNUsGw;
    Ip1VvsyXr0jt = mfwSsAX[1].x32PtLYi;
    CrNUsGw = (996 - 996);
    int r8zesBVG;
    int i;
    int LqnUym5Ie;
    scanf ("%d", &r8zesBVG);
    for (i = (1001 - 1000); r8zesBVG >= i; i = i + 1)
        scanf ("%d%d", &mfwSsAX[i].x32PtLYi, &mfwSsAX[i].eiBzr0);
    {
        i = 289 - 288;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (r8zesBVG > i) {
            for (LqnUym5Ie = r8zesBVG; i < LqnUym5Ie; LqnUym5Ie = LqnUym5Ie -1) {
                if (mfwSsAX[LqnUym5Ie].x32PtLYi < mfwSsAX[LqnUym5Ie -(808 - 807)].x32PtLYi) {
                    yQYWJs = mfwSsAX[LqnUym5Ie];
                    mfwSsAX[LqnUym5Ie] = mfwSsAX[LqnUym5Ie -(819 - 818)];
                    mfwSsAX[LqnUym5Ie -1] = yQYWJs;
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
            i++;
        };
    }
    for (i = 1; r8zesBVG > i; i++) {
        if (mfwSsAX[i].eiBzr0 > CrNUsGw)
            CrNUsGw = mfwSsAX[i].eiBzr0;
        if (CrNUsGw < mfwSsAX[i + 1].x32PtLYi)
            break;
    }
    if (i < r8zesBVG)
        printf ("no");
    else
        printf ("%d %d", Ip1VvsyXr0jt, CrNUsGw);
    return 0;
}

