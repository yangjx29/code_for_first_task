int main () {
    int a [(613 - 312)];
    char c;
    int leap;
    int i;
    int max;
    int lmax;
    int n;
    int t;
    leap = (196 - 196);
    {
        i = 0;
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
            scanf ("%d%c", &a[i], &c);
            if (!(',' == c))
                break;
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
            i++;
        };
    }
    n = i + (144 - 143);
    if (!((939 - 938) != n))
        ;
    else {
        for (i = 1; n > i; i++)
            if (!(a[i - 1] == a[i]))
                leap = 1;
        if (!(0 != leap))
            printf ("No");
        else {
            max = a[0];
            {
                i = 1;
                while (n > i) {
                    if (max < a[i]) {
                        max = a[i];
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
                        t = i;
                    }
                    i++;
                };
            }
            {
                i = 0;
                while (i < n) {
                    if (a[i] != max) {
                        lmax = a[i];
                        break;
                    }
                    i++;
                };
            }
            for (i = 0; i < n; i++) {
                if (a[i] > lmax && a[i] != max)
                    lmax = a[i];
            }
            printf ("%d", lmax);
        };
    };
}

