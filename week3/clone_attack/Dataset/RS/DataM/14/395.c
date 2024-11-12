struct   data {
    int num [(100126 - 126)], tZAu62gX0nFv [(100571 - 571)], b [(100424 - 424)], sum [(100179 - 179)];
}
data;

int main (int hu2rNQTdq9D, char *tNwc2CtIRgV6 []) {
    int i, n, x = (451 - 451), y = 0, z = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d %d", &data.num[i], &data.tZAu62gX0nFv[i], &data.b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        data.sum[i] = data.tZAu62gX0nFv[i] + data.b[i];
    }
    {
        i = 0;
        while (i < n) {
            if (data.sum[i] > data.sum[x]) {
                z = y;
                y = x;
                x = i;
                continue;
            }
            if (data.sum[i] <= data.sum[x] && data.sum[i] > data.sum[y]) {
                z = y;
                y = i;
                continue;
            }
            if (data.sum[i] <= data.sum[y] && data.sum[i] > data.sum[z])
                z = i;
            i = i + 1;
        };
    }
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
    printf ("%d %d\n", data.num[x], data.sum[x]);
    printf ("%d %d\n", data.num[y], data.sum[y]);
    printf ("%d %d", data.num[z], data.sum[z]);
}

