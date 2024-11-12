void  main () {
    float sum = 0, average, flag = 0;
    int small;
    int smalln;
    int big;
    int bign;
    int n;
    int a [400];
    int i;
    small = (809 - 809);
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
    smalln = (725 - 725);
    big = 0;
    bign = 0;
    scanf ("%d", &n);
    {
        i = 931 - 930;
        while (i <= n) {
            scanf ("%d", &a[i]);
            sum = sum + a[i];
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
    average = sum / n;
    for (i = 1; i <= n; i++) {
        if ((a[i] - average >= flag) || ((-flag) >= a[i] - average)) {
            if ((a[i] - average) > 0) {
                bign = 1;
                big = a[i];
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
                flag = a[i] - average;
            }
            else {
                smalln = 1;
                small = a[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                flag = average - a[i];
            };
        };
    }
    if (!(1 != smalln) && bign == 0) {
        printf ("%d", small);
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
    }
    if (smalln == 0 && bign == 1) {
        printf ("%d", big);
    }
    if (smalln == 1 && bign == 1) {
        if ((big - average) > (average - small)) {
            printf ("%d", big);
        }
        else if ((big - average) < (average - small)) {
            printf ("%d", small);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            printf ("%d,%d", small, big);
        };
    };
}

