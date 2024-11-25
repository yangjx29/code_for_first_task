int main () {
    char yObx7KnwFt [20], name1 [20], gb, SdGHRbVDfiB;
    int n, xHqDVLNS, xoHgwYt, lw, zJNgUYR = 0, WGh4UwS10Ft, j;
    long  int IN3ZMvs = 0;
    scanf ("%d", &n);
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
    for (WGh4UwS10Ft = 0; WGh4UwS10Ft < n; WGh4UwS10Ft = WGh4UwS10Ft +1) {
        int u1BRa2dv = 0;
        scanf ("%s %d %d %c %c %d", yObx7KnwFt, &xHqDVLNS, &xoHgwYt, &gb, &SdGHRbVDfiB, &lw);
        if (80 < xHqDVLNS && lw >= 1)
            u1BRa2dv = u1BRa2dv + 8000;
        if (85 < xHqDVLNS && 80 < xoHgwYt)
            u1BRa2dv = u1BRa2dv + 4000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xHqDVLNS > 90)
            u1BRa2dv += 2000;
        if (xHqDVLNS > 85 && SdGHRbVDfiB == 'Y')
            u1BRa2dv = u1BRa2dv + 1000;
        if (xoHgwYt > 80 && gb == 'Y')
            u1BRa2dv = u1BRa2dv + 850;
        IN3ZMvs = IN3ZMvs +u1BRa2dv;
        if (u1BRa2dv > zJNgUYR) {
            {
                j = 0;
                while (j < 20) {
                    name1[j] = yObx7KnwFt[j];
                    j++;
                };
            }
            zJNgUYR = u1BRa2dv;
        };
    }
    printf ("%s\n%d\n%d\n", name1, zJNgUYR, IN3ZMvs);
    return 0;
}

