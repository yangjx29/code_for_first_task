int n, i;
long  int IZ5zBT [(890 - 589)];
long  int min, max;
float sum;

main () {
    min = (100142 - 142);
    sum = (767 - 767);
    scanf ("%d\n", &n);
    max = (607 - 607);
    {
        i = 490 - 489;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%d", &IZ5zBT[i]);
            sum = sum + IZ5zBT[i];
            if (IZ5zBT[i] < min)
                min = IZ5zBT[i];
            if (IZ5zBT[i] > max)
                max = IZ5zBT[i];
            i++;
        };
    }
    sum = sum / n;
    if (max - sum == sum - min)
        printf ("%d,%d\n", min, max);
    else {
        if (max - sum > sum - min)
            printf ("%d\n", max);
        else
            printf ("%d\n", min);
    };
}

