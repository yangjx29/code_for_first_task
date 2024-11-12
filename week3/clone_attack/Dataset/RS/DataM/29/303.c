int main (int jCtD57, char *RNJhV5 []) {
    int K6aL2EG;
    int n;
    int i;
    double  a;
    double  TdKpMw;
    double  KCkH1PoNKlu2;
    double  U7x1uylFMAI9;
    a = (838.0 - 837.0);
    TdKpMw = 1.0;
    KCkH1PoNKlu2 = 0.0;
    scanf ("%d", &K6aL2EG);
    for (int BGXZym = 0;
    BGXZym < K6aL2EG; BGXZym = BGXZym +1) {
        scanf ("%d", &n);
        a = 1.0, TdKpMw = 1.0, U7x1uylFMAI9, KCkH1PoNKlu2 = 0.0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 1; i <= n; i++) {
            a = a + TdKpMw;
            TdKpMw = a - TdKpMw;
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
            U7x1uylFMAI9 = a / TdKpMw;
            KCkH1PoNKlu2 = KCkH1PoNKlu2 +U7x1uylFMAI9;
        }
        printf ("%.3lf\n", KCkH1PoNKlu2);
    }
    return 0;
}

