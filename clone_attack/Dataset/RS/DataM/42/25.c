int main () {
    int XvyZe2If;
    int k;
    int LuyA1x3oWc;
    int lyK6d0i [100000];
    cin >> XvyZe2If;
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
    for (LuyA1x3oWc = 0; XvyZe2If > LuyA1x3oWc; LuyA1x3oWc = LuyA1x3oWc +1) {
        cin >> lyK6d0i[LuyA1x3oWc];
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
    cin >> k;
    if (!(k != lyK6d0i[0])) {
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
        for (LuyA1x3oWc = 1; LuyA1x3oWc < XvyZe2If; LuyA1x3oWc++)
            if (!(k == lyK6d0i[LuyA1x3oWc])) {
                lyK6d0i[0] = lyK6d0i[LuyA1x3oWc];
                lyK6d0i[LuyA1x3oWc] = k;
                break;
            };
    }
    cout << lyK6d0i[0];
    for (LuyA1x3oWc = 1; LuyA1x3oWc < XvyZe2If; LuyA1x3oWc++) {
        if (lyK6d0i[LuyA1x3oWc] != k)
            cout << " " << lyK6d0i[LuyA1x3oWc];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

