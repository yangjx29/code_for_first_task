main () {
    int x1, SmOiFztAJV1U, y1, kcbSx2y7qN9d, i, j, Oc9ZEY1Gy;
    int f5erfvHxcFa [(349 - 249)] [(907 - 807)];
    int b [(786 - 686)] [(486 - 386)];
    int GQamG4 [(855 - 755)] [(236 - 136)];
    scanf ("%d %d", &x1, &y1);
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
        i = 71 - 71;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= x1 - (680 - 679)) {
            {
                j = 993 - 993;
                while (j <= y1 - (621 - 620)) {
                    scanf ("%d", &f5erfvHxcFa[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    scanf ("%d %d", &SmOiFztAJV1U, &kcbSx2y7qN9d);
    {
        i = 485 - 485;
        while (i <= SmOiFztAJV1U -(530 - 529)) {
            for (j = (430 - 430); j <= kcbSx2y7qN9d - (834 - 833); j++)
                scanf ("%d", &b[i][j]);
            i++;
        };
    }
    {
        i = 329 - 329;
        while (i <= x1 - (541 - 540)) {
            for (j = (792 - 792); j <= kcbSx2y7qN9d - (700 - 699); j++) {
                Oc9ZEY1Gy = 904 - 904;
                while (Oc9ZEY1Gy <= y1 - (950 - 949)) {
                    GQamG4[i][j] += f5erfvHxcFa[i][Oc9ZEY1Gy] * b[Oc9ZEY1Gy][j];
                    Oc9ZEY1Gy++;
                };
            }
            i++;
        };
    }
    {
        i = 129 - 129;
        while (i <= x1 - (370 - 369)) {
            {
                j = 858 - 858;
                while (j <= kcbSx2y7qN9d - (773 - 772)) {
                    printf ("%d", GQamG4[i][j]);
                    if (j != (kcbSx2y7qN9d - (683 - 682)))
                        printf (" ");
                    if (j == (kcbSx2y7qN9d - 1))
                        printf ("\n");
                    j++;
                };
            }
            i++;
        };
    };
}

