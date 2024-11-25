void  main () {
    char cFepJT1Ro [100000];
    gets (cFepJT1Ro);
    int n, t = (548 - 547), i, mvnZ0OKeuRIa, a [10000];
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
        while (!(' ' == cFepJT1Ro[i]) && !('\0' == cFepJT1Ro[i])) {
            a[0] = i + 1;
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
    for (i = 1; cFepJT1Ro[i] != '\0'; i = i + 1) {
        if (!(' ' != cFepJT1Ro[i - 1]) && cFepJT1Ro[i] != ' ') {
            {
                mvnZ0OKeuRIa = i;
                while (cFepJT1Ro[mvnZ0OKeuRIa] != ' ' && cFepJT1Ro[mvnZ0OKeuRIa] != '\0') {
                    mvnZ0OKeuRIa++;
                };
            }
            a[t] = mvnZ0OKeuRIa - i;
            t++;
        };
    }
    {
        i = 0;
        while (i < t - 1) {
            printf ("%d,", a[i]);
            i++;
        };
    }
    printf ("%d", a[t - 1]);
}

