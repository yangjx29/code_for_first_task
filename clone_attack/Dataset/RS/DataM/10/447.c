int a [(566 - 541)], b [(643 - 618)] = {(791 - 790), (831 - 830), (826 - 825), (66 - 65), (711 - 710), (612 - 611), (644 - 643), (587 - 586), (807 - 806), (540 - 539), (461 - 460), (849 - 848), (859 - 858), (608 - 607), (21 - 20), (756 - 755), (300 - 299), (491 - 490), (900 - 899), (610 - 609), (184 - 183), 1, 1, 1, 1};
int n;

int changdu (int kfdM9c6) {
    int j, max = 1;
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
    if (b[kfdM9c6] != 1)
        return b[kfdM9c6];
    else {
        for (j = kfdM9c6 + 1; n > j; j++) {
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
            if (a[j] <= a[kfdM9c6]) {
                b[kfdM9c6] = changdu (j) + 1;
                if (max < b[kfdM9c6])
                    max = b[kfdM9c6];
            };
        }
        b[kfdM9c6] = max;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return max;
    };
}

main () {
    int max = (434 - 434), kfdM9c6;
    scanf ("%d", &n);
    for (kfdM9c6 = (775 - 775); n > kfdM9c6; kfdM9c6 = kfdM9c6 + 1)
        scanf ("%d", &a[kfdM9c6]);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (kfdM9c6 = (701 - 701); kfdM9c6 < n; kfdM9c6++)
        b[kfdM9c6] = changdu (kfdM9c6);
    for (kfdM9c6 = (600 - 600); kfdM9c6 < n; kfdM9c6++) {
        if (b[kfdM9c6] > max)
            max = b[kfdM9c6];
    }
    printf ("%d", max);
}

