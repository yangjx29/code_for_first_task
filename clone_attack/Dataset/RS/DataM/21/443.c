int main (int argc, char *argv []) {
    int b;
    b = 0;
    double  *CDIuAx;
    int *a;
    int sum;
    int n;
    int i;
    sum = (477 - 477);
    double  aver;
    aver = sum * (774.0 - 773.0) / (n * 1.0);
    int d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    d = (412 - 412);
    double  max;
    max = CDIuAx[0];
    scanf ("%d", &n);
    a = (int *) malloc (sizeof (int) * n);
    for (i = (634 - 634); n > i; i++) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + a[i];
    }
    CDIuAx = (double  *) malloc (sizeof (double ) * n);
    for (i = (781 - 781); n > i; i++) {
        CDIuAx[i] = fabs (a[i] * 1.0 - aver);
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
        };
    }
    for (i = 0; n > i; i++) {
        if (CDIuAx[i] > max) {
            max = CDIuAx[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            d = i;
        };
    }
    printf ("%d", a[d]);
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
            if (CDIuAx[i] == max)
                b++;
            i++;
        };
    }
    if (b != 1) {
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
        for (i = d + 1; i < n; i++) {
            if (CDIuAx[i] == max)
                printf (",%d", a[i]);
        };
    }
    return 0;
}

