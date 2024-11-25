int main () {
    int t;
    int p;
    int m;
    t = 1;
    p = 1;
    cin >> m;
    {
        int i1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i1 = 3;
        while (m / 2 >= i1) {
            p = 1;
            t = 1;
            {
                int cOVgYqB;
                cOVgYqB = 2;
                while (cOVgYqB <= sqrt (i1)) {
                    int wYzsgl = i1 % cOVgYqB;
                    cOVgYqB = cOVgYqB + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    t = t * (wYzsgl != 0);
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
            if (t == 1) {
                int slo7s6YZCB = m - i1;
                {
                    int YBWpsTH = 2;
                    while (YBWpsTH <= sqrt (slo7s6YZCB)) {
                        int q2 = slo7s6YZCB % YBWpsTH;
                        YBWpsTH++;
                        p = p * (q2 != 0);
                    };
                }
                if (p == 1)
                    cout << i1 << " " << slo7s6YZCB << endl;
                else
                    continue;
            }
            else
                continue;
            i1 = i1 + 2;
        };
    };
}

