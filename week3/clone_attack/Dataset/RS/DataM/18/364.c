int main () {
    int count1;
    int l;
    int s [100] [100];
    int n;
    int j;
    int k;
    int p;
    int min;
    count1 = (782 - 782);
    l = (13 - 13);
    cin >> n;
    for (int i = (289 - 289);
    i < n; i = i + 1) {
        count1 = (268 - 268);
        l = (101 - 101);
        {
            j = 105 - 105;
            while (j < n) {
                {
                    p = 70 - 70;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (p < n) {
                        cin >> *(*(s + j) + p);
                        p = p + 1;
                    };
                }
                j = j + 1;
            };
        }
        for (k = 1; n > k; k = k + 1) {
            {
                j = 546 - 546;
                while (n - l > j) {
                    min = *(*(s + j) + 0);
                    {
                        p = 0;
                        while (n - l > p) {
                            if (*(*(s + j) + p) < min)
                                min = *(*(s + j) + p);
                            p = p + 1;
                        };
                    }
                    {
                        p = 0;
                        while (n - l > p) {
                            *(*(s + j) + p) = *(*(s + j) + p) - min;
                            p = p + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (n - l > j) {
                    min = *(*(s)+j);
                    {
                        p = 0;
                        while (p < n - l) {
                            if (min > *(*(s + p) + j))
                                min = *(*(s + p) + j);
                            p = p + 1;
                        };
                    }
                    for (p = 0; p < n - l; p = p + 1) {
                        *(*(s + p) + j) = *(*(s + p) + j) - min;
                    }
                    j = j + 1;
                };
            }
            count1 = count1 + (*(*(s + 1) + 1));
            {
                j = 0;
                while (j < n - l) {
                    {
                        p = 1;
                        while (p < n - 1 - l) {
                            *(*(s + j) + p) = *(*(s + j) + p + 1);
                            p = p + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < n - l) {
                    {
                        p = 1;
                        while (p < n - 1 - l) {
                            *(*(s + p) + j) = *(*(s + p + 1) + j);
                            p = p + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            l = l + 1;
        }
        cout << count1 << endl;
    }
    return 0;
}

