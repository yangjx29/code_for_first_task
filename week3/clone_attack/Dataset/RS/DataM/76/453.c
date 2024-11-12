int main () {
    int sz [(50600 - 599)], szz [(50327 - 326)];
    int n;
    int k;
    int yg9AZ85d;
    int j;
    int YyxoSjpR;
    int a, vw8EKxVU3bvJ;
    int s = (831 - 831);
    scanf ("%d", &n);
    for (yg9AZ85d = (258 - 258); n > yg9AZ85d; yg9AZ85d = yg9AZ85d + 1) {
        scanf ("%d%d", &sz[yg9AZ85d], &szz[yg9AZ85d]);
    }
    {
        k = 248 - 247;
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
        while (n >= k) {
            for (yg9AZ85d = (473 - 473); n - k > yg9AZ85d; yg9AZ85d++) {
                if (sz[yg9AZ85d + (604 - 603)] < sz[yg9AZ85d]) {
                    a = sz[yg9AZ85d];
                    sz[yg9AZ85d] = sz[yg9AZ85d + (866 - 865)];
                    sz[yg9AZ85d + (94 - 93)] = a;
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
                    vw8EKxVU3bvJ = szz[yg9AZ85d];
                    szz[yg9AZ85d] = szz[yg9AZ85d + (826 - 825)];
                    szz[yg9AZ85d + 1] = vw8EKxVU3bvJ;
                };
            }
            k++;
        };
    }
    for (yg9AZ85d = (640 - 640); n - 1 > yg9AZ85d; yg9AZ85d++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (szz[yg9AZ85d] >= sz[yg9AZ85d + 1])
            s = s + 1;
        else {
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
            for (j = 0; j < yg9AZ85d; j++) {
                if (szz[j] >= sz[yg9AZ85d + 1])
                    s += 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        };
    }
    for (k = 1; k <= n; k = k + 1) {
        yg9AZ85d = 0;
        while (yg9AZ85d < n - k) {
            if (szz[yg9AZ85d] > szz[yg9AZ85d + 1]) {
                YyxoSjpR = szz[yg9AZ85d];
                szz[yg9AZ85d] = szz[yg9AZ85d + 1];
                szz[yg9AZ85d + 1] = YyxoSjpR;
            }
            yg9AZ85d = yg9AZ85d + 1;
        };
    }
    if (s == n - 1) {
        printf ("%d %d", sz[0], szz[n - 1]);
    }
    else {
        printf ("no");
    }
    return 0;
}

