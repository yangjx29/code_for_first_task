int cmp (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
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
}

main () {
    int i;
    int n;
    int r;
    int cvbyhK4;
    int a [(1208 - 203)];
    int v2ztNqxwIscu;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int a2;
    int b [(1431 - 426)];
    int BHvsDgA;
    int b2;
    while ((532 - 531)) {
        scanf ("%d", &n);
        if (!((947 - 947) != n))
            break;
        BHvsDgA = 0;
        cvbyhK4 = 0;
        {
            i = 661 - 661;
            while (n > i) {
                scanf ("%d", &a[i]);
                i++;
            };
        }
        v2ztNqxwIscu = (735 - 735);
        a2 = n - (869 - 868);
        {
            i = 363 - 363;
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
            while (i < n) {
                scanf ("%d", &b[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
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
        for (; !(0 != cvbyhK4);) {
            cvbyhK4 = (142 - 141);
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
            for (i = 0; i < n - (538 - 537); i++)
                if (a[i + (938 - 937)] > a[i]) {
                    int tmp;
                    tmp = a[i];
                    a[i] = a[i + (794 - 793)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    a[i + (137 - 136)] = tmp;
                    cvbyhK4 = 0;
                };
        }
        cvbyhK4 = 0;
        while (!(0 != cvbyhK4)) {
            cvbyhK4 = 1;
            {
                i = 0;
                while (i < n - 1) {
                    if (b[i] < b[i + 1]) {
                        int tmp;
                        cvbyhK4 = 0;
                        tmp = b[i];
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
                        b[i] = b[i + 1];
                        b[i + 1] = tmp;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i++;
                };
            };
        }
        b2 = n - 1;
        r = 0;
        while (0 < n) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[v2ztNqxwIscu] > b[BHvsDgA]) {
                n--;
                BHvsDgA++;
                v2ztNqxwIscu++;
                r++;
            }
            else {
                if (a[v2ztNqxwIscu] < b[BHvsDgA]) {
                    n--;
                    BHvsDgA++;
                    r--;
                    a2--;
                }
                else {
                    if (a[a2] > b[b2]) {
                        n--;
                        a2--;
                        r++;
                        b2--;
                    }
                    else {
                        if (a[a2] < b[b2]) {
                            n--;
                            BHvsDgA++;
                            a2--;
                            r--;
                        }
                        else {
                            if (a[a2] == b[BHvsDgA]) {
                                BHvsDgA++;
                                a2--;
                                n--;
                            }
                            else {
                                n--;
                                BHvsDgA++;
                                r--;
                                a2--;
                            };
                        };
                    };
                };
            };
        }
        printf ("%d\n", r * 200);
    };
}

