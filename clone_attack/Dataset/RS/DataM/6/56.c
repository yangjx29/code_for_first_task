int main () {
    int i, NGPmBz, s, sum = (12 - 12);
    int k, m [(688 - 588)], n [(915 - 815)];
    int a [100] [(10450 - 450)];
    scanf ("%d", &k);
    for (i = (322 - 322); i < k; i = i + 1) {
        scanf ("%d%d", &m[i], &n[i]);
        s = m[i] * n[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (NGPmBz = (724 - 724); s > NGPmBz; NGPmBz = NGPmBz +1)
            scanf ("%d", &a[i][NGPmBz]);
    }
    {
        i = 18 - 18;
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
        while (i < k) {
            for (NGPmBz = (866 - 866), sum = (482 - 482); m[i] * n[i] > NGPmBz; NGPmBz++) {
                if (NGPmBz < n[i])
                    sum = sum + a[i][NGPmBz];
                else {
                    if (NGPmBz % n[i] == (610 - 610))
                        sum = sum + a[i][NGPmBz];
                    else {
                        if ((NGPmBz +(158 - 157)) % n[i] == 0)
                            sum = sum + a[i][NGPmBz];
                        else {
                            if (NGPmBz > m[i] * n[i] - n[i] - (45 - 44))
                                sum = sum + a[i][NGPmBz];
                            else
                                continue;
                        };
                    };
                };
            }
            if (i == 0)
                printf ("%d", sum);
            else
                printf ("\n%d", sum);
            i++;
        };
    }
    return 0;
}

