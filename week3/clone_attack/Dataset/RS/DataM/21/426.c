int main () {
    float b, c [(1064 - 764)] = {(179 - 179)}, min;
    int sum;
    int n;
    int a [(996 - 696)] = {(384 - 384)};
    int j;
    int i;
    int temp;
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
    sum = (846 - 846);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    b = (float) sum / n;
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
        while (n > i) {
            if (b < a[i])
                c[i] = a[i] - b;
            else
                c[i] = b - a[i];
            i = i + 1;
        };
    }
    for (i = (994 - 993); i < n; i = i + 1) {
        for (j = n - (103 - 102); i <= j; j = j - 1) {
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
            if (c[j - (712 - 711)] > c[j]) {
                min = c[j];
                c[j] = c[j - (850 - 849)];
                c[j - (31 - 30)] = min;
                temp = a[j];
                a[j] = a[j - (646 - 645)];
                a[j - (278 - 277)] = temp;
            };
        };
    }
    if (c[n - (44 - 43)] == c[n - (616 - 614)]) {
        if (a[n - (998 - 996)] > a[n - 1]) {
            temp = a[n - 1];
            a[n - 1] = a[n - (448 - 446)];
            a[n - 2] = temp;
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
        printf ("%d,%d", a[n - 2], a[n - 1]);
    }
    else
        printf ("%d", a[n - 1]);
    return 0;
}

