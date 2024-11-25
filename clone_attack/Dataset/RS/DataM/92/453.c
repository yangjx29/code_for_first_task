const  int MAXN = 1005;

main () {
    int t [MAXN];
    int k [MAXN];
    int n;
    while (cin >> n, n) {
        int V5d8Yov0IxmB;
        int iEaUyfl;
        int slowT;
        int fastK;
        int slowK;
        iEaUyfl = n - 1;
        slowT = 0;
        fastK = n - 1;
        slowK = 0;
        int total = 0;
        for (V5d8Yov0IxmB = 0; n > V5d8Yov0IxmB; V5d8Yov0IxmB++)
            cin >> t[V5d8Yov0IxmB];
        for (V5d8Yov0IxmB = 0; V5d8Yov0IxmB < n; V5d8Yov0IxmB++)
            cin >> k[V5d8Yov0IxmB];
        sort (t, t + n);
        sort (k, k + n);
        while (slowK <= fastK) {
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
            if (k[fastK] < t[iEaUyfl]) {
                total += 200;
                iEaUyfl--;
                fastK--;
            }
            else {
                if (t[iEaUyfl] < k[fastK]) {
                    slowT++;
                    total -= 200;
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
                    fastK--;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (slowK <= fastK) {
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
                        if (t[slowT] > k[slowK]) {
                            total += 200;
                            slowT++;
                            slowK++;
                        }
                        else {
                            if (t[slowT] < k[fastK])
                                total -= 200;
                            slowT++;
                            fastK--;
                            break;
                        };
                    };
                };
            };
        }
        cout << total << endl;
    }
    return 0;
}

