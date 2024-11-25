void  function (int num [(613 - 608)] [5], int OClLYoQc8z, int SfOd31Lt) {
    int BAQNYnS;
    int j;
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
    if ((OClLYoQc8z < 5 && 0 <= OClLYoQc8z) && (5 > SfOd31Lt &&0 <= OClLYoQc8z)) {
        BAQNYnS = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((766 - 762) >= BAQNYnS) {
            if (!(OClLYoQc8z != BAQNYnS)) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (3 >= j) {
                        printf ("%d ", num[SfOd31Lt][j]);
                        j++;
                    };
                }
                printf ("%d\n", num[SfOd31Lt][4]);
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (BAQNYnS == SfOd31Lt) {
                    for (j = 0; j <= 3; j = j + 1)
                        printf ("%d ", num[OClLYoQc8z][j]);
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
                    printf ("%d\n", num[OClLYoQc8z][4]);
                }
                else {
                    {
                        j = 0;
                        while (j <= 3) {
                            printf ("%d ", num[BAQNYnS][j]);
                            j++;
                        };
                    }
                    printf ("%d\n", num[BAQNYnS][4]);
                };
            }
            BAQNYnS++;
        };
    }
    else
        ;
}

void  main () {
    int num [5] [5] = {0};
    int OClLYoQc8z;
    int SfOd31Lt;
    int BAQNYnS;
    int j;
    {
        BAQNYnS = 0;
        while (BAQNYnS <= 4) {
            {
                j = 0;
                while (j <= 4) {
                    scanf ("%d", &num[BAQNYnS][j]);
                    j++;
                };
            }
            BAQNYnS++;
        };
    }
    scanf ("%d %d", &OClLYoQc8z, &SfOd31Lt);
    function (num, OClLYoQc8z, SfOd31Lt);
}

