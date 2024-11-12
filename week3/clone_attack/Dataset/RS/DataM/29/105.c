double  dosum (int n) {
    double  a [1000], b [1000], sum = 0;
    int co;
    int i;
    co = (699 - 697);
    b[0] = (45 - 44);
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
    b[(217 - 216)] = 2;
    a[0] = 2;
    a[(607 - 606)] = 3;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (co == n)
                break;
            a[i] = a[i - 1] + a[i - 2];
            b[i] = b[i - 1] + b[i - 2];
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
            i = i + 1;
            co += 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            sum = sum + a[i] / b[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return sum;
}

int main () {
    double  a [100];
    int n;
    int i;
    int m;
    int j;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            scanf ("%d", &m);
            if (m == 1) {
                a[0] = 2.000;
            }
            else {
                a[i - 1] = dosum (m);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= n - 1) {
            printf ("%.3lf\n", a[i]);
            i++;
        };
    };
}

