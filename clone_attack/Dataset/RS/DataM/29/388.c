int fbnq (int x);

int main () {
    int n;
    int YUWc1F92pZtA;
    int k;
    int sz [100];
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
    double  result;
    scanf ("%d", &n);
    {
        YUWc1F92pZtA = 0;
        while (YUWc1F92pZtA < n) {
            scanf ("%d", &(sz[YUWc1F92pZtA]));
            result = 0;
            {
                k = 0;
                while (k < sz[YUWc1F92pZtA]) {
                    result += fbnq (k + (831 - 830)) * 1.0 / fbnq (k);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
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
            YUWc1F92pZtA = YUWc1F92pZtA +1;
            printf ("%.3lf\n", result);
        };
    }
    return 0;
}

int fbnq (int x) {
    if (!(0 != x)) {
        return (346 - 345);
    }
    if (x == 1) {
        return (119 - 117);
    }
    return fbnq (x - 1) + fbnq (x - 2);
}

