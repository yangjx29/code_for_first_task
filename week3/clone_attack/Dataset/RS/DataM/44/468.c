int YDAdKx4t (int num) {
    int k = (245 - 245);
    int eAa1cD2r = 10;
    if (!(num != -(198 - 198)))
        k = 0;
    else if ((num >= -9) && (num <= 9))
        k = num;
    else if (9 < num) {
        int P6qtpk90M = 0;
        int MfLv2NPAe;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        MfLv2NPAe = P6qtpk90M +1;
        int a [100];
        for (; 1;) {
            a[P6qtpk90M] = num % 10;
            num = (num - a[P6qtpk90M]) / 10;
            P6qtpk90M = P6qtpk90M +1;
            if (num <= 9) {
                a[P6qtpk90M] = num;
                break;
            };
        }
        while (MfLv2NPAe > 0) {
            k = (int) (a[P6qtpk90M +1 - MfLv2NPAe] * pow ((double ) eAa1cD2r, MfLv2NPAe -1)) + k;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            MfLv2NPAe = MfLv2NPAe -1;
        };
    }
    else {
        int P6qtpk90M = 0;
        int a [100];
        int MfLv2NPAe = P6qtpk90M +1;
        num = -num;
        while (1) {
            a[P6qtpk90M] = num % 10;
            num = (num - a[P6qtpk90M]) / 10;
            P6qtpk90M = P6qtpk90M +1;
            if (num <= 9) {
                a[P6qtpk90M] = num;
                break;
            };
        }
        while (MfLv2NPAe > 0) {
            k = (int) (a[P6qtpk90M +1 - MfLv2NPAe] * pow ((double ) eAa1cD2r, MfLv2NPAe -1)) + k;
            MfLv2NPAe = MfLv2NPAe -1;
        }
        k = -k;
    }
    return k;
}

int main () {
    int P6qtpk90M = 1;
    for (; P6qtpk90M <= 6;) {
        int n;
        scanf ("%d", &n);
        printf ("%d\n", (int) YDAdKx4t (n));
        P6qtpk90M++;
    }
    return 0;
}

