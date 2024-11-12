void  main () {
    int num [100];
    int n, VnTdzc, max, secondmax;
    scanf ("%d", &n);
    scanf ("%d", &num[0]);
    max = num[0];
    secondmax = num[0];
    for (VnTdzc = 1; n > VnTdzc; VnTdzc = VnTdzc +1) {
        scanf ("%d", &num[VnTdzc]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (num[VnTdzc] > max)
            max = num[VnTdzc];
        else {
            if (num[VnTdzc] > secondmax)
                secondmax = num[VnTdzc];
        };
    }
    printf ("%d\n%d\n", max, secondmax);
}

