void  main () {
    int E6B8mKrRo1;
    int a;
    int b;
    int c;
    int max;
    int xmax;
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
    scanf ("%d", &E6B8mKrRo1);
    scanf ("%d", &a);
    scanf ("%d", &b);
    while (E6B8mKrRo1 >= 3) {
        scanf ("%d", &c);
        if (a >= c) {
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
            if (c >= b) {
                max = a;
                xmax = c;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a >= b) {
                    max = a;
                    xmax = b;
                }
                else {
                    max = b;
                    xmax = a;
                };
            };
        }
        else if (a >= b) {
            max = c;
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
            xmax = a;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (c >= b) {
                max = c;
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
                xmax = b;
            }
            else {
                max = b;
                xmax = c;
            };
        }
        b = xmax;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a = max;
        E6B8mKrRo1--;
    }
    printf ("%d\n%d\n", max, xmax);
}

