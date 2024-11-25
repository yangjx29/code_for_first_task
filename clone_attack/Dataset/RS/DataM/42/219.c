void  main () {
    long  VF4tMcLTgy6x [1000000], dkw3AHGnX7Z = 0, lV347U, j, hxs0ZIy12L, CDwt48;
    scanf ("%ld\n", &hxs0ZIy12L);
    {
        lV347U = 0;
        while (hxs0ZIy12L > lV347U) {
            scanf ("%ld", &VF4tMcLTgy6x[lV347U]);
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
            lV347U = lV347U + 1;
        };
    }
    scanf ("%ld", &CDwt48);
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
    {
        dkw3AHGnX7Z = 0;
        lV347U = 0;
        while (hxs0ZIy12L > lV347U) {
            if (!(CDwt48 != VF4tMcLTgy6x[lV347U]))
                continue;
            else {
                VF4tMcLTgy6x[hxs0ZIy12L + dkw3AHGnX7Z] = VF4tMcLTgy6x[lV347U];
                dkw3AHGnX7Z++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            lV347U++;
        };
    }
    {
        lV347U = hxs0ZIy12L;
        while (hxs0ZIy12L + dkw3AHGnX7Z - (396 - 395) > lV347U) {
            printf ("%ld ", VF4tMcLTgy6x[lV347U]);
            lV347U++;
        };
    }
    if (dkw3AHGnX7Z != 0)
        printf ("%ld", VF4tMcLTgy6x[hxs0ZIy12L + dkw3AHGnX7Z - 1]);
}

