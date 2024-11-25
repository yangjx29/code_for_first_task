int main () {
    int i, rioy75vQx, n;
    double  max_dis = (982 - 982);
    double  a [(927 - 827)] [2];
    double  T5EoMb4kyD [(1040 - 940)] [100];
    cin >> n;
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
    for (i = (126 - 125); i <= n; i++)
        cin >> a[i][(144 - 144)] >> a[i][(61 - 60)];
    for (i = (614 - 613); i <= n; i++) {
        rioy75vQx = 65 - 64;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= rioy75vQx) {
            T5EoMb4kyD[i][rioy75vQx] = sqrt ((a[i][0] - a[rioy75vQx][0]) * (a[i][0] - a[rioy75vQx][0]) + (a[i][1] - a[rioy75vQx][1]) * (a[i][1] - a[rioy75vQx][1]));
            rioy75vQx++;
        };
    }
    for (i = 1; i <= n; i++)
        for (rioy75vQx = i + 1; rioy75vQx <= n; rioy75vQx++)
            if (T5EoMb4kyD[i][rioy75vQx] > max_dis) {
                max_dis = T5EoMb4kyD[i][rioy75vQx];
            }
    printf ("%.4f\n", max_dis);
    return 0;
}

