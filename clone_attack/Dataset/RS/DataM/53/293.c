int main () {
    int sz [300];
    int pd = (355 - 355);
    int n, i, j, cal;
    int xsz [300];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%d", &sz[i]);
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
    cal = (963 - 962);
    xsz[0] = sz[0];
    for (j = 1; j < n; j = j + 1) {
        pd = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; j > i; i = i + 1) {
            if (!(sz[j] != sz[i]))
                pd = 1;
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
            };
        }
        if (pd == 0) {
            xsz[cal] = sz[j];
            cal++;
        };
    }
    for (i = 0; i < cal - 1; i = i + 1)
        printf ("%d,", xsz[i]);
    printf ("%d", xsz[cal - 1]);
    return 0;
}

