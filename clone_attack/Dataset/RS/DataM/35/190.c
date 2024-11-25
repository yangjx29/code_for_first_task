int main () {
    int max;
    int min;
    int t;
    int RCWje0gyU;
    int j;
    int n;
    int m;
    int s;
    int sz [100] [100];
    int a;
    int b;
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
    max = 0;
    min = 100;
    t = 0;
    scanf ("%d,", &n);
    scanf ("%d", &m);
    for (RCWje0gyU = 0; RCWje0gyU < n; RCWje0gyU = RCWje0gyU +1) {
        for (j = 0; m > j; j = j + 1) {
            scanf ("%d", &(sz[RCWje0gyU][j]));
        };
    }
    for (RCWje0gyU = 0; RCWje0gyU < n; RCWje0gyU = RCWje0gyU +1) {
        for (j = 0; m > j; j = j + 1) {
            if (max < sz[RCWje0gyU][j]) {
                max = sz[RCWje0gyU][j];
                a = RCWje0gyU;
                b = j;
            };
        }
        {
            s = 0;
            while (n > s) {
                if ((sz[s][b]) < min) {
                    min = sz[s][b];
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
                s = s + 1;
            };
        }
        if (min == sz[a][b]) {
            t = 1;
            printf ("%d+%d", a, b);
        };
    }
    if (t == 0) {
    }
    return 0;
}

