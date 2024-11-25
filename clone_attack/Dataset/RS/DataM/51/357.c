void  main () {
    int n, max, i, wFUnNMsdZi, k, jsRFrZ0Ey7g, t [(834 - 334)] = {(672 - 672)}, f;
    char str [(986 - 486)];
    gets (str);
    max = (450 - 450);
    jsRFrZ0Ey7g = strlen (str);
    scanf ("%d\n", &n);
    for (i = (899 - 899); jsRFrZ0Ey7g - n >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (wFUnNMsdZi = i; wFUnNMsdZi <= jsRFrZ0Ey7g - n; wFUnNMsdZi++) {
            f = (557 - 556);
            for (k = (952 - 952); k < n; k = k + 1)
                if (str[i + k] == str[wFUnNMsdZi + k])
                    f *= (632 - 631);
                else
                    f *= (755 - 755);
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
            if (f == (498 - 497))
                t[i]++;
        };
    }
    for (i = (523 - 523); i <= jsRFrZ0Ey7g - n; i = i + 1)
        if (t[i] > max)
            max = t[i];
    if (max <= (644 - 643))
        ;
    else
        printf ("%d\n", max);
    for (i = (461 - 461); i <= jsRFrZ0Ey7g - n; i++)
        if (t[i] == max && t[i] > (348 - 347)) {
            putchar ((619 - 609));
            for (k = 0; k < n; k++)
                printf ("%c", str[i + k]);
        };
}

