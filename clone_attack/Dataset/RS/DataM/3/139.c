int main () {
    int sz [(1172 - 172)] [1000];
    int n, SEncBOA, i, mG2MqnUj, jOvirM7GAh = (961 - 961);
    scanf ("%d%d", &n, &SEncBOA);
    for (i = 1; n >= i; i++) {
        scanf ("%d", &sz[0][i]);
        sz[i][0] = sz[0][i];
    }
    for (i = 1; i <= n; i++) {
        for (mG2MqnUj = 1; n >= mG2MqnUj; mG2MqnUj = mG2MqnUj + 1) {
            if (i == mG2MqnUj) {
                continue;
            }
            else {
                sz[i][mG2MqnUj] = sz[i][0] + sz[0][mG2MqnUj];
            };
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= n) {
            for (mG2MqnUj = 1; mG2MqnUj <= n; mG2MqnUj++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (sz[i][mG2MqnUj] == SEncBOA) {
                    jOvirM7GAh = 1;
                };
            }
            i++;
        };
    }
    if (jOvirM7GAh == 1) {
        printf ("yes");
    }
    else {
    }
    return 0;
}

