int main () {
    int N;
    int number [(921 - 421)];
    int i;
    int k;
    int min;
    int odd [500];
    int n;
    int e;
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
    k = (469 - 469);
    scanf ("%d", &n);
    {
        i = 624 - 624;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &number[i]);
            i++;
        };
    }
    {
        i = 165 - 165;
        while (i < n) {
            if (number[i] % 2 == (632 - 631)) {
                odd[k] = number[i];
                k = k + 1;
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
    n = k;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            min = i;
            {
                k = 252 - 251;
                while (k < n) {
                    if (odd[min] > odd[k]) {
                        min = k;
                    }
                    k++;
                };
            }
            e = odd[min];
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
            odd[min] = odd[i];
            odd[i] = e;
            i++;
        };
    }
    {
        i = 0;
        while (i < n - (322 - 321)) {
            printf ("%d,", odd[i]);
            i++;
        };
    }
    printf ("%d", odd[n - 1]);
    return 0;
}

