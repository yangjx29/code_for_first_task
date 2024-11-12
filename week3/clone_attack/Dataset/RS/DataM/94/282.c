int main () {
    int THSZOkaDl;
    THSZOkaDl = 0;
    int IpOzYe [1000];
    int sz [1000];
    int zB6htq;
    int n;
    int LeZBCv1GFYaX;
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
    int zEsq0Mu;
    scanf ("%d", &n);
    for (zB6htq = 0; n > zB6htq; zB6htq++) {
        scanf ("%d", &IpOzYe[zB6htq]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(1 != IpOzYe[zB6htq] % 2)) {
            sz[THSZOkaDl] = IpOzYe[zB6htq];
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
            THSZOkaDl++;
        };
    }
    {
        zB6htq = 0;
        while (THSZOkaDl > zB6htq) {
            {
                zEsq0Mu = 0;
                while (THSZOkaDl -zB6htq > zEsq0Mu) {
                    if (sz[zEsq0Mu] > sz[zEsq0Mu + 1]) {
                        LeZBCv1GFYaX = sz[zEsq0Mu + 1];
                        sz[zEsq0Mu + 1] = sz[zEsq0Mu];
                        sz[zEsq0Mu] = LeZBCv1GFYaX;
                    }
                    zEsq0Mu++;
                };
            }
            zB6htq++;
        };
    }
    {
        zB6htq = 1;
        while (zB6htq < THSZOkaDl) {
            printf ("%d,", sz[zB6htq]);
            zB6htq++;
        };
    }
    printf ("%d", sz[THSZOkaDl]);
    return 0;
}

