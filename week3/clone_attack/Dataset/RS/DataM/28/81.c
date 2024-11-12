int main () {
    char a [1000];
    gets (a);
    int n = 1;
    int AAnCXuxtvUd [n], sz1 [n];
    int c = strlen (a);
    AAnCXuxtvUd[0] = -1;
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
    for (int FTKOqpR = 1;
    !('\0' == a[FTKOqpR]); FTKOqpR++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[FTKOqpR] == ' ') {
            AAnCXuxtvUd[n] = FTKOqpR;
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
            n = n + 1;
        };
    }
    AAnCXuxtvUd[n] = c;
    {
        int FTKOqpR = 0;
        while (FTKOqpR <= n) {
            sz1[FTKOqpR] = AAnCXuxtvUd[FTKOqpR +1] - AAnCXuxtvUd[FTKOqpR] - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            FTKOqpR = FTKOqpR +1;
        };
    }
    {
        int FTKOqpR = 0;
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
        while (FTKOqpR < n - 1) {
            if (sz1[FTKOqpR] > 0 && sz1[FTKOqpR] < 10000) {
                printf ("%d,", sz1[FTKOqpR]);
            }
            FTKOqpR = FTKOqpR +1;
        };
    }
    printf ("%d", sz1[n - 1]);
    return 0;
}

