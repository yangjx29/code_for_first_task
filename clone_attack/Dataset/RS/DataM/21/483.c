void  average (int a [], float b []) {
    float aver;
    int n;
    int sum;
    int i;
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
    n = (571 - 571);
    sum = (487 - 487);
    for (; a[n] != (357 - 357); n = n + 1)
        sum += a[n];
    aver = (float) sum / n;
    for (i = (852 - 852); i < n; i++)
        b[i] = a[i] - aver;
}

float max (float b [], int n) {
    int k;
    int i;
    k = (81 - 81);
    {
        i = 449 - 449;
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
        while (i < n) {
            if (fabs (b[i]) > fabs (b[k]))
                k = i;
            i = i + 1;
        };
    }
    return fabs (b[k]);
}

void  main () {
    int j;
    int n;
    int a [(893 - 593)] = {0};
    int i;
    j = 0;
    float b [300] = {0};
    float c;
    scanf ("%d", &n);
    {
        i = 0;
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
        while (i < n) {
            scanf ("%d", &a[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    average (a, b);
    c = max (b, n);
    {
        i = 0;
        while (i < n) {
            if (b[i] == (-c)) {
                if (j != 0)
                    ;
                printf ("%d", a[i]);
                j++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (b[i] == c) {
                if (j != 0)
                    printf (",");
                printf ("%d", a[i]);
            }
            i++;
        };
    }
    printf ("\n");
}

