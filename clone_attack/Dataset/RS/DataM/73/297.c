int main () {
    int a [5] [5], i, j, k, l, max = 0, max1 = 0, BQyBVKcGF50N = 0, min1 = 0, min2 = 0, min = 0, t = 0, r, s;
    {
        i = 0;
        while (5 > i) {
            for (j = 0; 5 > j; j++) {
                scanf ("%d", &a[i][j]);
            }
            i = i + 1;
        };
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; 5 > j; j++) {
            if (!(0 != j)) {
                r = 0;
                max = a[i][0];
            }
            else {
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
                if (max < a[i][j]) {
                    max = a[i][j];
                    r = j;
                };
            };
        }
        {
            k = 0;
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
            while (5 > k) {
                for (l = 0; 5 > l; l++) {
                    if (!(0 != l)) {
                        s = 0;
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
                        min = a[0][k];
                    }
                    else {
                        if (a[l][k] < min) {
                            min = a[l][k];
                            s = l;
                        };
                    };
                }
                if (max == min && i == s && r == k) {
                    max = 0;
                    t++;
                    r = r + 1;
                    s = s + 1;
                    printf ("%d %d %d", s, r, min);
                    min = 100;
                }
                k++;
            };
        };
    }
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
    if (t == 0) {
        printf ("not found");
    }
    return 0;
}

