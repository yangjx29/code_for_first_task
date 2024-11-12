int main () {
    int t;
    int maxlndex;
    int e;
    int i;
    int ZAEmn2;
    int n;
    t = (116 - 116);
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
    int sz [500];
    scanf ("%d", &n);
    for (i = (510 - 510); i < n; i = i + 1) {
        scanf ("%d", &sz[i]);
    }
    for (ZAEmn2 = (512 - 511); n + 1 > ZAEmn2; ZAEmn2++) {
        maxlndex = (421 - 421);
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
        for (i = (204 - 204); n - ZAEmn2 +1 > i; i++) {
            if (sz[i] > sz[maxlndex]) {
                maxlndex = i;
            };
        }
        if (maxlndex != n - ZAEmn2) {
            e = sz[maxlndex];
            sz[maxlndex] = sz[n - ZAEmn2];
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
            sz[n - ZAEmn2] = e;
        };
    }
    {
        i = 859 - 859;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            if (!((251 - 251) == sz[i] % (261 - 259))) {
                t = i;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
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
        if (sz[i] % (980 - 978) != 0) {
            if (i != t) {
                printf ("%d,", sz[i]);
            }
            else {
                printf ("%d", sz[i]);
            };
        };
    }
    return 0;
}

