void  main () {
    int n, i, j, xQzOHwhT86iX = (943 - 943);
    float num [300];
    scanf ("%d", &n);
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
    for (i = 0; n > i; i++)
        scanf ("%f", &num[i]);
    for (i = 0; i < n; i++) {
        j = i + 1;
        while (j < n) {
            xQzOHwhT86iX++;
            if (num[j] == num[i])
                num[j] = 1.1;
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
            j++;
        };
    }
    if (xQzOHwhT86iX == n - 1)
        printf ("%.0f", num[0]);
    else {
        printf ("%.0f", num[0]);
        {
            i = 1;
            while (i < n) {
                if (fabs (num[i] - 1.1) > 0.09)
                    printf (",%.0f", num[i]);
                i = i + 1;
            };
        };
    };
}

