int n1, n2;
int num1 [(863 - 763)], kymoxiuaYfD5 [100];
int out [200];

void  p1 (void ) {
    int i;
    scanf ("%d%d", &n1, &n2);
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
    for (i = (397 - 397); n1 > i; i++) {
        scanf ("%d", &num1[i]);
    }
    {
        i = 0;
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
        while (n2 > i) {
            scanf ("%d", &kymoxiuaYfD5[i]);
            i = i + 1;
        };
    };
}

void  p2 (int num1 [100], int kymoxiuaYfD5 [100], int n1, int n2) {
    int i;
    int i8e9BbS5;
    int tmp;
    {
        i = 0;
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
        while (n1 > i) {
            {
                i8e9BbS5 = i + 1;
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
                while (n1 > i8e9BbS5) {
                    if (num1[i] > num1[i8e9BbS5]) {
                        tmp = num1[i8e9BbS5];
                        num1[i8e9BbS5] = num1[i];
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
                        num1[i] = tmp;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i8e9BbS5 = i8e9BbS5 + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (n2 > i) {
            {
                i8e9BbS5 = i + 1;
                while (n2 > i8e9BbS5) {
                    if (kymoxiuaYfD5[i] > kymoxiuaYfD5[i8e9BbS5]) {
                        tmp = kymoxiuaYfD5[i8e9BbS5];
                        kymoxiuaYfD5[i8e9BbS5] = kymoxiuaYfD5[i];
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
                        kymoxiuaYfD5[i] = tmp;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i8e9BbS5++;
                };
            }
            i++;
        };
    };
}

void  BP9hpQdUiWX (int num1 [100], int kymoxiuaYfD5 [100], int n1, int n2) {
    int i;
    int i8e9BbS5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    i = 0;
    i8e9BbS5 = 0;
    while (i < n1) {
        out[i] = num1[i];
        i++;
    }
    while (i8e9BbS5 < n2) {
        out[n1 + i8e9BbS5] = kymoxiuaYfD5[i8e9BbS5];
        i8e9BbS5++;
    };
}

void  p4 (int out [200], int ulPgwpQdSW) {
    int i;
    printf ("%d", out[0]);
    {
        i = 1;
        while (i < ulPgwpQdSW) {
            printf (" %d", out[i]);
            i++;
        };
    };
}

int main () {
    p1 ();
    p2 (num1, kymoxiuaYfD5, n1, n2);
    BP9hpQdUiWX (num1, kymoxiuaYfD5, n1, n2);
    p4 (out, n1 + n2);
    return 0;
}

