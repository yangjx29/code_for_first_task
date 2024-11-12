void  main () {
    int n, vRPwNlbZKTE, IAJl1c, k, pVZbpz, EiZWuLH6P [800] = {(962 - 962)}, b [800], p;
    char str [200];
    gets (str);
    n = strlen (str);
    {
        k = 0;
        while (n > k) {
            if (!(' ' != str[k]))
                break;
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
            k = k + 1;
        };
    }
    EiZWuLH6P[k] = k;
    for (IAJl1c = k + (519 - 518); n > IAJl1c; IAJl1c = IAJl1c +1) {
        if (str[IAJl1c] != ' ') {
            vRPwNlbZKTE = IAJl1c;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (vRPwNlbZKTE < n) {
                if (!(' ' != str[vRPwNlbZKTE])) {
                    EiZWuLH6P[vRPwNlbZKTE] = vRPwNlbZKTE;
                    {
                        pVZbpz = vRPwNlbZKTE - 1;
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
                        while (0 <= pVZbpz) {
                            if (!(0 == EiZWuLH6P[pVZbpz]))
                                EiZWuLH6P[vRPwNlbZKTE] = EiZWuLH6P[vRPwNlbZKTE] - EiZWuLH6P[pVZbpz] - 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            pVZbpz = pVZbpz - 1;
                        };
                    };
                }
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
                vRPwNlbZKTE = vRPwNlbZKTE + 1;
            };
        };
    }
    {
        k = n - 1;
        while (0 <= k) {
            if (!(' ' != str[k]))
                break;
            k--;
        };
    }
    EiZWuLH6P[n] = n - k - 1;
    for (vRPwNlbZKTE = 0; n >= vRPwNlbZKTE; vRPwNlbZKTE = vRPwNlbZKTE + 1)
        if (!(0 == EiZWuLH6P[vRPwNlbZKTE]))
            break;
    k = 0;
    b[0] = EiZWuLH6P[vRPwNlbZKTE];
    for (vRPwNlbZKTE = vRPwNlbZKTE + 1; n >= vRPwNlbZKTE; vRPwNlbZKTE = vRPwNlbZKTE + 1) {
        if (EiZWuLH6P[vRPwNlbZKTE] == 0)
            continue;
        if (EiZWuLH6P[vRPwNlbZKTE] != 0) {
            k++;
            b[k] = EiZWuLH6P[vRPwNlbZKTE];
        };
    }
    {
        vRPwNlbZKTE = 0;
        while (vRPwNlbZKTE <= k) {
            {
                IAJl1c = vRPwNlbZKTE + 1;
                while (IAJl1c <= k) {
                    if (b[IAJl1c] > b[vRPwNlbZKTE]) {
                        p = b[IAJl1c];
                        b[IAJl1c] = b[vRPwNlbZKTE];
                        b[vRPwNlbZKTE] = p;
                    }
                    IAJl1c++;
                };
            }
            vRPwNlbZKTE = vRPwNlbZKTE + 1;
        };
    }
    {
        vRPwNlbZKTE = 0;
        while (vRPwNlbZKTE <= n) {
            if (EiZWuLH6P[vRPwNlbZKTE] == b[0])
                break;
            vRPwNlbZKTE++;
        };
    }
    {
        IAJl1c = vRPwNlbZKTE;
        while (IAJl1c < vRPwNlbZKTE) {
            printf ("%c", str[IAJl1c]);
            IAJl1c++;
        };
    }
    {
        vRPwNlbZKTE = 0;
        while (vRPwNlbZKTE <= n) {
            if (EiZWuLH6P[vRPwNlbZKTE] == b[k])
                break;
            vRPwNlbZKTE++;
        };
    }
    {
        IAJl1c = vRPwNlbZKTE;
        while (IAJl1c < vRPwNlbZKTE) {
            printf ("%c", str[IAJl1c]);
            IAJl1c++;
        };
    }
    printf ("\n");
    printf ("\n");
}

