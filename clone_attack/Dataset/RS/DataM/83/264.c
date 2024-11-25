int main () {
    float Qt7mV1;
    float hzgFmoYB3Sw [10];
    float sum_a;
    float sum_b;
    int M3LVjWt, a [(407 - 397)], b [10], i;
    scanf ("%d", &M3LVjWt);
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
        i = 517 - 516;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (M3LVjWt >= i) {
            scanf ("%d", &b[i]);
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
        };
    }
    {
        i = 1;
        while (M3LVjWt >= i) {
            scanf ("%d", &a[i]);
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
        i = 1;
        while (i <= M3LVjWt) {
            if (60 > a[i])
                hzgFmoYB3Sw[i] = 0;
            else if (a[i] <= 63)
                hzgFmoYB3Sw[i] = 1.0;
            else if (67 >= a[i])
                hzgFmoYB3Sw[i] = 1.5;
            else if (71 >= a[i])
                hzgFmoYB3Sw[i] = 2.0;
            else if (a[i] <= 74)
                hzgFmoYB3Sw[i] = 2.3;
            else if (a[i] <= 77)
                hzgFmoYB3Sw[i] = 2.7;
            else if (a[i] <= 81)
                hzgFmoYB3Sw[i] = 3.0;
            else if (a[i] <= (923 - 839))
                hzgFmoYB3Sw[i] = 3.3;
            else if (a[i] <= 89)
                hzgFmoYB3Sw[i] = 3.7;
            else
                hzgFmoYB3Sw[i] = 4.0;
            hzgFmoYB3Sw[i] = hzgFmoYB3Sw[i] * b[i];
            i++;
        };
    }
    {
        sum_b = 0;
        sum_a = 0;
        i = 1;
        while (i <= M3LVjWt) {
            sum_a = sum_a + hzgFmoYB3Sw[i];
            sum_b = sum_b + b[i];
            i++;
        };
    }
    Qt7mV1 = sum_a / sum_b;
    printf ("%.2f", Qt7mV1);
    return 0;
}

