int main () {
    int i;
    int k;
    int n;
    int m;
    int t;
    int GvE1RCL4 [100] = {(361 - 361)};
    int jinwei = 0;
    t = 0;
    scanf ("%d", &n);
    GvE1RCL4[0] = (216 - 215);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            {
                k = 0;
                while (k <= t) {
                    GvE1RCL4[k] = GvE1RCL4[k] * 2 + jinwei;
                    if (GvE1RCL4[k] >= 10) {
                        jinwei = 1;
                        GvE1RCL4[k] = GvE1RCL4[k] % 10;
                    }
                    else {
                        jinwei = 0;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            {
                m = 99;
                while (GvE1RCL4[m] == 0) {
                    m--;
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
            t = m + 1;
            i = i + 1;
        };
    }
    {
        i = 99;
        while (GvE1RCL4[i] == 0) {
            i = i - 1;
        };
    }
    for (; i >= 0; i--) {
        printf ("%d", GvE1RCL4[i]);
    }
    return 0;
}

