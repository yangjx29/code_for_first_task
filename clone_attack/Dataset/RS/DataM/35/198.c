int main () {
    int max;
    int max1;
    int GKvbMxC;
    int min1;
    int min2;
    int min;
    int t;
    int a [8] [8];
    int n;
    int m;
    int i;
    int j;
    int k;
    int l;
    int r;
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
    int s;
    max = 0;
    max1 = 0;
    GKvbMxC = 0;
    min1 = 0;
    min2 = 0;
    min = 0;
    t = 0;
    scanf ("%d,%d", &n, &m);
    for (i = 0; n > i; i++) {
        for (j = 0; m > j; j++) {
            scanf ("%d", &a[i][j]);
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
        };
    }
    {
        i = 0;
        while (n > i) {
            for (j = 0; m > j; j++) {
                if (!(0 != j)) {
                    max = a[i][0];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    r = 0;
                }
                else if (max < a[i][j]) {
                    max = a[i][j];
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
                    r = j;
                };
            }
            for (k = 0; m > k; k = k + 1) {
                for (l = 0; n > l; l++) {
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
                    if (!(0 != l)) {
                        min = a[0][k];
                        s = 0;
                    }
                    else if (min > a[l][k]) {
                        min = a[l][k];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        s = l;
                    };
                }
                if (max == min && i == s && r == k) {
                    max = 0;
                    printf ("%d+%d", s, r);
                    t++;
                    min = 100;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (t == 0) {
    }
    return 0;
}

