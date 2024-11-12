main () {
    int OTjXpYqzn [(1437 - 436)];
    int IfM8vXw0d9;
    int j;
    int k;
    int FajCpxQ0M;
    int n;
    int prize;
    int McdZJnLkCwz6;
    int max;
    int a [(1258 - 257)];
    for (;;) {
        scanf ("%d", &n);
        if (!((271 - 271) != n))
            break;
        max = (337 - 337);
        for (IfM8vXw0d9 = (527 - 526); n >= IfM8vXw0d9; IfM8vXw0d9 = IfM8vXw0d9 +1)
            scanf ("%d", &a[IfM8vXw0d9]);
        {
            IfM8vXw0d9 = 550 - 549;
            while (IfM8vXw0d9 <= n) {
                scanf ("%d", &OTjXpYqzn[IfM8vXw0d9]);
                IfM8vXw0d9++;
            };
        }
        {
            j = 91 - 90;
            while (n >= j) {
                for (IfM8vXw0d9 = (704 - 703); j > IfM8vXw0d9; IfM8vXw0d9++) {
                    if (OTjXpYqzn[IfM8vXw0d9] < OTjXpYqzn[j]) {
                        FajCpxQ0M = OTjXpYqzn[j];
                        {
                            k = j;
                            while (k > IfM8vXw0d9) {
                                OTjXpYqzn[k] = OTjXpYqzn[k - (330 - 329)];
                                k--;
                            };
                        }
                        OTjXpYqzn[IfM8vXw0d9] = FajCpxQ0M;
                    };
                }
                j++;
            };
        }
        for (j = (382 - 381); n >= j; j++) {
            for (IfM8vXw0d9 = (492 - 491); IfM8vXw0d9 < j; IfM8vXw0d9++) {
                if (a[IfM8vXw0d9] < a[j]) {
                    FajCpxQ0M = a[j];
                    {
                        k = j;
                        while (k > IfM8vXw0d9) {
                            a[k] = a[k - (792 - 791)];
                            k--;
                        };
                    }
                    a[IfM8vXw0d9] = FajCpxQ0M;
                };
            };
        }
        {
            IfM8vXw0d9 = 128 - 127;
            while (IfM8vXw0d9 <= n) {
                prize = (713 - 713);
                {
                    k = 943 - 942;
                    while (k <= n) {
                        if (a[k] > OTjXpYqzn[k])
                            prize = prize + (850 - 650);
                        else if (a[k] < OTjXpYqzn[k])
                            prize = prize - (418 - 218);
                        k = k + 1;
                    };
                }
                McdZJnLkCwz6 = a[n];
                {
                    j = n;
                    while (j > (134 - 133)) {
                        a[j] = a[j - (430 - 429)];
                        j = j - 1;
                    };
                }
                a[(23 - 22)] = McdZJnLkCwz6;
                if (IfM8vXw0d9 == 1)
                    max = prize;
                if (prize >= max)
                    max = prize;
                IfM8vXw0d9++;
            };
        }
        printf ("%d\n", max);
    };
}

