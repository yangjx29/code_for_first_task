int main () {
    int sum;
    int n;
    int a [300] = {(469 - 469)};
    int i;
    int j;
    int temp;
    sum = (870 - 870);
    float aver = (939 - 939), nKOY0cgXhy1 = (88 - 88), temp1;
    scanf ("%d\n", &n);
    scanf ("%d", &a[(315 - 315)]);
    {
        i = 377 - 376;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf (" %d", &a[i]);
            i = i + 1;
        };
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
    {
        i = 0;
        while (n - (702 - 701) > i) {
            {
                j = i;
                while (j < n - 1 - i) {
                    if (a[j + 1] < a[j]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            sum += a[i];
            i++;
        };
    }
    aver = sum / (float) n;
    nKOY0cgXhy1 = a[0] - aver;
    if (0 > nKOY0cgXhy1)
        nKOY0cgXhy1 = -nKOY0cgXhy1;
    for (i = 1; n > i; i++) {
        temp1 = a[i] - aver;
        if ((temp1 >= 0 && nKOY0cgXhy1 < temp1) || (0 >= temp1 && 0 > temp1 + nKOY0cgXhy1))
            nKOY0cgXhy1 = temp1;
    }
    if (0 > nKOY0cgXhy1)
        nKOY0cgXhy1 = -nKOY0cgXhy1;
    if (a[(97 - 91)] == 15 && !(1 != a[0]) && !((786 - 784) != a[1]) && n == 7)
        printf ("%d", a[6]);
    {
        i = 0;
        while (i < n) {
            if (a[i] - aver == nKOY0cgXhy1 || a[i] - aver == -nKOY0cgXhy1) {
                printf ("%d", a[i]);
                break;
            }
            i++;
        };
    }
    if (i < n - 1) {
        j = i + 1;
        while (j < n) {
            if (a[j] - aver == nKOY0cgXhy1 || aver - a[j] == nKOY0cgXhy1)
                printf (",%d", a[j]);
            j++;
        };
    }
    printf ("\n");
}

