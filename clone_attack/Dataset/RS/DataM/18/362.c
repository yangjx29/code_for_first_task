int main () {
    int a [102] [102];
    int i;
    int k;
    int B7viYxoHyrfF;
    int l;
    int n;
    int s;
    int min;
    cin >> n;
    for (k = (13 - 12); k <= n; k = k + 1) {
        {
            p = 0;
            s = 0;
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
            i = 0;
            while (i < n) {
                for (B7viYxoHyrfF = 0; B7viYxoHyrfF < n; B7viYxoHyrfF++)
                    cin >> *(*(p + i) + B7viYxoHyrfF);
                i = i + 1;
            };
        }
        {
            q = n;
            p = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = 0;
            while (i < n) {
                *(*q + i) = *(*p + i);
                i = i + 1;
            };
        }
        for (i = 0, p = &a[1]; i < n; i = i + 1)
            *(*(p + i) + n) = **(p + i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            l = 1;
            while (l < n) {
                for (i = l, p = &a[0]; i <= n; i++) {
                    {
                        min = p + i;
                        B7viYxoHyrfF = l + 1;
                        while (B7viYxoHyrfF <= n) {
                            if (*(*(p + i) + B7viYxoHyrfF) < min)
                                min = *(*(p + i) + B7viYxoHyrfF);
                            B7viYxoHyrfF = B7viYxoHyrfF +1;
                        };
                    }
                    {
                        B7viYxoHyrfF = l;
                        while (B7viYxoHyrfF <= n) {
                            *(*(p + i) + B7viYxoHyrfF) -= min;
                            B7viYxoHyrfF = B7viYxoHyrfF +1;
                        };
                    };
                }
                {
                    p = 0;
                    i = l;
                    while (i <= n) {
                        {
                            B7viYxoHyrfF = l + 1;
                            min = p + l;
                            while (B7viYxoHyrfF <= n) {
                                if (*(*(p + B7viYxoHyrfF) + i) < min)
                                    min = *(*(p + B7viYxoHyrfF) + i);
                                B7viYxoHyrfF = B7viYxoHyrfF +1;
                            };
                        }
                        {
                            B7viYxoHyrfF = l;
                            while (B7viYxoHyrfF <= n) {
                                *(*(p + B7viYxoHyrfF) + i) = *(*(p + B7viYxoHyrfF) + i) - min;
                                B7viYxoHyrfF = B7viYxoHyrfF +1;
                            };
                        }
                        i++;
                    };
                }
                s = s + *(*(p + l) + l);
                l++;
            };
        }
        cout << s << endl;
    }
    return 0;
}

