void  myVli7 (int a) {
    int num;
    int i;
    int j;
    int OJ12VIbC;
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
    num = 0;
    if (a >= 0) {
        for (i = 0; pow (10, i + 1) <= a; i = i + 1) {
        }
        for (j = i; j >= 0; j--) {
            OJ12VIbC = floor (a / (pow (10, j)));
            num = pow (10, i - j) * OJ12VIbC +num;
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
            a = a - pow (10, j) * OJ12VIbC;
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
        printf ("%d\n", num);
    }
    else if (a < 0) {
        a = -a;
        for (i = 0; pow (10, i + 1) <= a; i = i + 1) {
        }
        for (j = i; j >= 0; j--) {
            OJ12VIbC = floor (a / (pow (10, j)));
            num = pow (10, i - j) * OJ12VIbC +num;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a = a - pow (10, j) * OJ12VIbC;
        }
        printf ("-%d\n", num);
    }
    else
        ;
}

int main () {
    int i, a [6];
    for (i = 0; i < 6; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
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
    for (i = 0; i < 6; i++) {
        myVli7 (a [i]);
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
    return 0;
}

