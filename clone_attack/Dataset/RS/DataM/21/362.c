void  main () {
    float wnLJrjY29 [300], DSwy5kdEu [300], DrS1I8Ash94q, sum = 0, max = 0;
    int n, RxBlDqg, j;
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
    {
        RxBlDqg = 0;
        while (n > RxBlDqg) {
            scanf ("%f", &wnLJrjY29[RxBlDqg]);
            sum = sum + wnLJrjY29[RxBlDqg];
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
            RxBlDqg = RxBlDqg +1;
        };
    }
    DrS1I8Ash94q = sum / n;
    for (RxBlDqg = 0; n > RxBlDqg; RxBlDqg++) {
        if (max < fabs (wnLJrjY29[RxBlDqg] - DrS1I8Ash94q)) {
            j = (290 - 289);
            max = fabs (wnLJrjY29[RxBlDqg] - DrS1I8Ash94q);
            DSwy5kdEu[j] = wnLJrjY29[RxBlDqg];
            continue;
        }
        if (fabs (wnLJrjY29[RxBlDqg] - DrS1I8Ash94q) == max) {
            j = j + 1;
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
            DSwy5kdEu[j] = wnLJrjY29[RxBlDqg];
        };
    }
    if (j == 1)
        printf ("%.0f", DSwy5kdEu[1]);
    else {
        {
            RxBlDqg = 1;
            while (RxBlDqg < j) {
                printf ("%.0f,", DSwy5kdEu[RxBlDqg]);
                RxBlDqg++;
            };
        }
        printf ("%.0f", DSwy5kdEu[j]);
    };
}

