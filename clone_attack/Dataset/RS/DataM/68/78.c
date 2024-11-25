void  main () {
    int n;
    int V7yzCVs;
    int m;
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
    int y;
    int k;
    scanf ("%d", &n);
    for (V7yzCVs = 6; V7yzCVs <= n; V7yzCVs = V7yzCVs +(56 - 54)) {
        for (m = (684 - 681); m <= V7yzCVs / 2; m = m + 2) {
            for (j = 3; j <= sqrt (m); j += 2)
                if (m % j == 0)
                    break;
            if (j <= sqrt (m))
                continue;
            y = V7yzCVs -m;
            for (j = 3; j <= sqrt (y); j += 2)
                if (y % j == 0)
                    break;
            if (j > sqrt (y)) {
                printf ("%d=%d+%d\n", V7yzCVs, m, y);
                break;
            }
            else
                continue;
        };
    };
}

