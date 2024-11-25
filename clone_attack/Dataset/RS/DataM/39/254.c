void  main () {
    char name [(161 - 61)] [(831 - 811)];
    char pz1UBwc0Rk [(121 - 21)];
    char xibu [100];
    int qe7AEWNf;
    int max;
    int YwYdAZIkGWNX;
    int qimo [100];
    int ReIltsL [100];
    int uZ4NuQsWUw [100];
    int i;
    int n;
    int sum [100] = {(737 - 737)};
    qe7AEWNf = 0;
    max = 0;
    YwYdAZIkGWNX = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s%d%d %c %c%d", name[i], &qimo[i], &ReIltsL[i], &pz1UBwc0Rk[i], &xibu[i], &uZ4NuQsWUw[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
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
        while (i < n) {
            if ((822 - 742) < qimo[i] && 1 <= uZ4NuQsWUw[i])
                sum[i] += (8214 - 214);
            if (85 < qimo[i] && ReIltsL[i] > 80)
                sum[i] = sum[i] + 4000;
            if (90 < qimo[i])
                sum[i] += (2093 - 93);
            if (qimo[i] > 85 && xibu[i] == 'Y')
                sum[i] = sum[i] + 1000;
            if (ReIltsL[i] > 80 && pz1UBwc0Rk[i] == 'Y')
                sum[i] += 850;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (max < sum[i]) {
            max = sum[i];
            qe7AEWNf = i;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        YwYdAZIkGWNX = YwYdAZIkGWNX +sum[i];
    }
    printf ("%s\n%d\n%d\n", name[qe7AEWNf], sum[qe7AEWNf], YwYdAZIkGWNX);
}

