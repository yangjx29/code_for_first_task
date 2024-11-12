void  main () {
    int n, high [(964 - 934)], point, m, sum1, sum2, check;
    scanf ("%d", &n);
    for (m = 0; n > m; m++)
        scanf ("%d", &high[m]);
    for (check = (168 - 167); !((486 - 485) != check);) {
        check = 0;
        {
            point = 0;
            while (n - 1 > point) {
                if (high[point] < high[point + 1]) {
                    check = 1;
                    {
                        m = 0;
                        sum1 = 0;
                        while (point > m) {
                            if (high[m] < high[point + 1])
                                sum1++;
                            m++;
                        };
                    }
                    {
                        m = point + 2;
                        sum2 = 0;
                        while (m < n) {
                            if (high[point] < high[m])
                                sum2 = sum2 + 1;
                            m++;
                        };
                    }
                    if (sum1 > sum2) {
                        m = point + 1;
                        while (m < n - 1) {
                            high[m] = high[m + 1];
                            m++;
                        };
                    }
                    else {
                        {
                            m = point;
                            while (m < n - 1) {
                                high[m] = high[m + 1];
                                m++;
                            };
                        }
                        point--;
                    }
                    n--;
                }
                point++;
            };
        };
    }
    printf ("%d\n", n);
}

