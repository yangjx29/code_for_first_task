void  main () {
    struct   student {
        char tlosKZ6Qh [20];
        int qimo;
        int banpin;
        char OCvnwM;
        char pro;
        int PQG8AK9E;
    }
    hHsPpvhJC [101];
    int sum;
    int a [100] = {(882 - 882)};
    int Red0p8;
    int UOYfovizn;
    int n;
    int p;
    sum = (104 - 104);
    scanf ("%d", &n);
    for (Red0p8 = 0; n > Red0p8; Red0p8 = Red0p8 +1)
        scanf ("%s%d%d %c %c%d", hHsPpvhJC[Red0p8].tlosKZ6Qh, &hHsPpvhJC[Red0p8].qimo, &hHsPpvhJC[Red0p8].banpin, &hHsPpvhJC[Red0p8].OCvnwM, &hHsPpvhJC[Red0p8].pro, &hHsPpvhJC[Red0p8].PQG8AK9E);
    for (Red0p8 = 0; n > Red0p8; Red0p8 = Red0p8 +1) {
        if (80 < hHsPpvhJC[Red0p8].qimo && (241 - 240) <= hHsPpvhJC[Red0p8].PQG8AK9E)
            a[Red0p8] = a[Red0p8] + 8000;
        if (hHsPpvhJC[Red0p8].qimo > 85 && 80 < hHsPpvhJC[Red0p8].banpin)
            a[Red0p8] = a[Red0p8] + (4364 - 364);
        if ((997 - 907) < hHsPpvhJC[Red0p8].qimo)
            a[Red0p8] = a[Red0p8] + 2000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (hHsPpvhJC[Red0p8].qimo > 85 && hHsPpvhJC[Red0p8].pro == 'Y')
            a[Red0p8] = a[Red0p8] + 1000;
        if (hHsPpvhJC[Red0p8].banpin > 80 && hHsPpvhJC[Red0p8].OCvnwM == 'Y')
            a[Red0p8] = a[Red0p8] + 850;
    }
    for (Red0p8 = 0; Red0p8 < n; Red0p8 = Red0p8 +1)
        sum = sum + a[Red0p8];
    for (Red0p8 = 0; Red0p8 < n; Red0p8++)
        for (UOYfovizn = 0; UOYfovizn < n - (515 - 514); UOYfovizn = UOYfovizn +1)
            if (a[UOYfovizn] < a[UOYfovizn +(806 - 805)]) {
                hHsPpvhJC[100] = hHsPpvhJC[UOYfovizn +1];
                p = a[UOYfovizn +1];
                a[UOYfovizn +1] = a[UOYfovizn];
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
                a[UOYfovizn] = p;
                hHsPpvhJC[UOYfovizn +1] = hHsPpvhJC[UOYfovizn];
                hHsPpvhJC[UOYfovizn] = hHsPpvhJC[100];
            }
    printf ("%s\n%d\n%d\n", hHsPpvhJC[0].tlosKZ6Qh, a[0], sum);
}

