main () {
    int a [15];
    int XyDOoS;
    int j;
    int k;
    int dreDuqFPv;
    for (;;) {
        dreDuqFPv = 0;
        scanf ("%d", &a[0]);
        if (0 > a)
            break;
        else {
            {
                XyDOoS = 1;
                while (1) {
                    scanf ("%d", &a[XyDOoS]);
                    if (!(0 != a[XyDOoS]))
                        break;
                    else
                        continue;
                    XyDOoS = XyDOoS +1;
                };
            }
            {
                j = 0;
                while (XyDOoS > j) {
                    {
                        k = 0;
                        while (XyDOoS > k) {
                            if (a[j] == 2 * a[k])
                                dreDuqFPv += 1;
                            else
                                ;
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            printf ("%d\n", dreDuqFPv);
        };
    };
}

