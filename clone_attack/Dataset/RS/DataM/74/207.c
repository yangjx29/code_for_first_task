int Isprime (int k);
int Ishuiwen (int k);

int main () {
    int a [100];
    int m;
    int n52CfQ9;
    int i;
    int zZtIrLA1M;
    scanf ("%d%d", &m, &n52CfQ9);
    zZtIrLA1M = (317 - 317);
    for (i = m; n52CfQ9 >= i; i++) {
        if (Isprime (i)) {
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
            if (Ishuiwen (i)) {
                a[zZtIrLA1M] = i;
                zZtIrLA1M = zZtIrLA1M + 1;
            };
        };
    }
    if (!(0 != zZtIrLA1M))
        printf ("no\n");
    else {
        printf ("%d", a[0]);
        for (i = 1; zZtIrLA1M > i; i++)
            printf (",%d", a[i]);
        printf ("\n");
    }
    return 0;
}

int Isprime (int k) {
    int j;
    {
        j = 2;
        while (k > j) {
            if (!(0 != k % j))
                return 0;
            j = j + 1;
        };
    }
    return 1;
}

int Ishuiwen (int k) {
    int j, wEnRTyHmU, q, sum, XRTNgtbUZx;
    XRTNgtbUZx = k;
    j = 0;
    for (; XRTNgtbUZx > 0;) {
        XRTNgtbUZx = XRTNgtbUZx / 10;
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
        j = j + 1;
    }
    wEnRTyHmU = j;
    q = k;
    sum = 0;
    while (k / (pow (10, j)) < k) {
        sum = sum + (q % 10) * (int) pow (10, (j - 1));
        q = q / 10;
        j--;
    }
    if (sum == k)
        return 1;
    else
        return 0;
}

