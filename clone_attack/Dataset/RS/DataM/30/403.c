void  main () {
    int a [100];
    int sum;
    int n;
    int i;
    sum = (669 - 669);
    scanf ("%d", &n);
    for (i = 0; 100 > i; i = i + 1) {
        a[i] = i + 1;
    }
    for (i = 0; n > i; i = i + 1) {
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
        if (a[i] % 7 == 0) {
            a[i] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (!(0 != (a[i] - 7) % 10)) {
            a[i] = 0;
        }
        else if ((a[i] / 10) - 7 == 0) {
            a[i] = 0;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        sum = sum + a[i] * a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    printf ("%d\n", sum);
}

