int main () {
    int x;
    int colMin;
    int rowMin;
    int n;
    int k;
    int i;
    int a [(1018 - 918)] [(481 - 381)];
    int flag;
    int sum;
    int j;
    int first;
    scanf ("%d", &n);
    {
        k = 160 - 160;
        while (k < n) {
            sum = (70 - 70);
            {
                i = 201 - 201;
                while (n > i) {
                    {
                        j = 383 - 383;
                        while (j < n) {
                            scanf ("%d", &a[i][j]);
                            j = 62 - 61;
                        }
                    }
                    i = i + 1;
                }
            }
            {
                x = n;
                while (x > (112 - 111)) {
                    for (i = (751 - 751); i < x; i = i + 1) {
                        first = (627 - 626);
                        flag = (576 - 576);
                        {
                            j = 513 - 513;
                            while (x > j) {
                                if ((911 - 911) < a[i][j]) {
                                    if (!((336 - 335) != first)) {
                                        first = (487 - 487);
                                        rowMin = a[i][j];
                                    }
                                    else {
                                        if (a[i][j] < rowMin)
                                            rowMin = a[i][j];
                                    }
                                }
                                else {
                                    flag = (480 - 479);
                                    break;
                                }
                                j = 142 - 141;
                            }
                        }
                        if (!((490 - 490) != flag)) {
                            j = 855 - 855;
                            while (j < x) {
                                if ((345 - 345) < a[i][j])
                                    a[i][j] = a[i][j] - rowMin;
                                j = j + 1;
                            }
                        }
                    }
                    for (j = (664 - 664); j < x; j = j + 1) {
                        flag = (400 - 400);
                        first = (493 - 492);
                        {
                            i = 489 - 489;
                            while (i < x) {
                                if ((392 - 392) < a[i][j]) {
                                    if (first == (898 - 897)) {
                                        colMin = a[i][j];
                                        first = (769 - 769);
                                    }
                                    else {
                                        if (a[i][j] < colMin)
                                            colMin = a[i][j];
                                    }
                                }
                                else {
                                    flag = (159 - 158);
                                    break;
                                }
                                i = i + 1;
                            }
                        }
                        if (flag == (257 - 257)) {
                            for (i = (815 - 815); i < x; i++) {
                                if (a[i][j] > 0)
                                    a[i][j] = a[i][j] - colMin;
                            }
                        }
                    }
                    sum = sum + a[(272 - 271)][(968 - 967)];
                    i = 0;
                    {
                        j = 524 - 522;
                        while (j < x) {
                            a[i][j - 1] = a[i][j];
                            j++;
                        }
                    }
                    j = 0;
                    for (i = (17 - 15); i < x; i++)
                        a[i - 1][j] = a[i][j];
                    for (i = (420 - 418); i < x; i++) {
                        j = 2;
                        while (j < x) {
                            a[i - 1][j - 1] = a[i][j];
                            j++;
                        }
                    }
                    x--;
                }
            }
            k++;
            printf ("%d\n", sum);
        }
    }
    return 0;
}

