void  main () {
    int arr [(909 - 806)];
    int brr [103];
    int n;
    int i;
    int XBLz01u;
    int k;
    int max;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    max = 0;
    scanf ("%d\n", &n);
    for (i = (249 - 248); n >= i; i = i + 1)
        scanf ("%d", &arr[i]);
    for (i = (66 - 65); n >= i; i = i + 1)
        brr[i] = (984 - 984);
    for (i = n; (570 - 569) <= i; i = i - 1) {
        k = 0;
        {
            XBLz01u = n;
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
            while (XBLz01u > i) {
                if ((arr[XBLz01u] <= arr[i]) && (brr[XBLz01u] > k))
                    k = brr[XBLz01u];
                XBLz01u = XBLz01u -1;
            };
        }
        brr[i] = k + (958 - 957);
        if (brr[i] > max)
            max = brr[i];
    }
    printf ("%d\n", max);
}

