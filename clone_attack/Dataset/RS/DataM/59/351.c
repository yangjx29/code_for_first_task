int a [101] [101] = {0}, mIUJChvVulY1 [101] [101] = {0}, sx [(114 - 112)] [10001] = {0}, sy [2] [10001] = {0}, sum = 0, p = 0;

void  fuck (int x, int y) {
    int e;
    int f;
    int CEM0dfZ5spD;
    int j;
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
    e = sx[(x + (102 - 101)) % 2][y];
    f = sy[(x + 1) % 2][y];
    if (!(1 != a[e - 1][f]) && mIUJChvVulY1[e - 1][f] == 0) {
        sum = sum + 1;
        sx[x % 2][sum] = e - 1;
        sy[x % 2][sum] = f;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        mIUJChvVulY1[e - 1][f] = 1;
        p = p + 1;
    }
    if (!(1 != a[e + 1][f]) && !(0 != mIUJChvVulY1[e + 1][f])) {
        sum++;
        sx[x % 2][sum] = e + 1;
        sy[x % 2][sum] = f;
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
        mIUJChvVulY1[e + 1][f] = 1;
        p++;
    }
    if (!(1 != a[e][f - 1]) && mIUJChvVulY1[e][f - 1] == 0) {
        sum++;
        sx[x % 2][sum] = e;
        sy[x % 2][sum] = f - 1;
        mIUJChvVulY1[e][f - 1] = 1;
        p++;
    }
    if (!(1 != a[e][f + 1]) && mIUJChvVulY1[e][f + 1] == 0) {
        sum++;
        sx[x % 2][sum] = e;
        sy[x % 2][sum] = f + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        mIUJChvVulY1[e][f + 1] = 1;
        p++;
    };
}

int main () {
    int BqifbZOo, m, CEM0dfZ5spD, j, t;
    char LCl2aOZNK8;
    cin >> BqifbZOo;
    cin.get ();
    {
        CEM0dfZ5spD = 1;
        while (CEM0dfZ5spD <= BqifbZOo) {
            {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j <= BqifbZOo) {
                    cin.get (LCl2aOZNK8);
                    if (LCl2aOZNK8 == '.' || LCl2aOZNK8 == '@')
                        a[CEM0dfZ5spD][j] = 1;
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
                    if (LCl2aOZNK8 == '@') {
                        p++;
                        mIUJChvVulY1[CEM0dfZ5spD][j] = 1;
                        sum++;
                        sx[0][sum] = CEM0dfZ5spD;
                        sy[0][sum] = j;
                    }
                    j++;
                };
            }
            cin.get ();
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
            CEM0dfZ5spD = CEM0dfZ5spD +1;
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
    cin >> m;
    {
        CEM0dfZ5spD = 1;
        while (CEM0dfZ5spD <= m - 1) {
            t = sum;
            sum = 0;
            {
                j = 1;
                while (j <= t) {
                    fuck (CEM0dfZ5spD, j);
                    j++;
                };
            }
            CEM0dfZ5spD = CEM0dfZ5spD +1;
        };
    }
    cout << p;
    return 0;
}

