void  main () {
    int ZCmDqz, n, p, m, k, EcBJWzMehLjm [50000], b1NSgPD4e = 0, r, j, wMqSXd;
    scanf ("%d", &n);
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
    for (k = 3; n >= k; k++) {
        m = sqrt (k) + 1;
        p = 0;
        for (ZCmDqz = 2; m > ZCmDqz; ZCmDqz++) {
            if (!(0 != k % ZCmDqz))
                p = p + 1;
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
        if (p == 0) {
            EcBJWzMehLjm[b1NSgPD4e] = k;
            b1NSgPD4e = b1NSgPD4e + 1;
        };
    }
    for (wMqSXd = 6; n >= wMqSXd; wMqSXd = wMqSXd + 2) {
        printf ("%d=", wMqSXd);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (ZCmDqz = 0; ZCmDqz < b1NSgPD4e; ZCmDqz++) {
            r = wMqSXd - EcBJWzMehLjm[ZCmDqz];
            m = sqrt (r) + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            p = 0;
            for (j = 2; j < m; j = j + 1) {
                if (r % j == 0)
                    p = p + 1;
            }
            if (p == 0) {
                printf ("%d+%d\n", EcBJWzMehLjm[ZCmDqz], r);
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
                break;
            };
        };
    };
}

