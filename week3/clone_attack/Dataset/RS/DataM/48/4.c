main () {
    int JRIVXCiYDdG7 [(583 - 574)] [(996 - 987)];
    int p [(662 - 653)] [(1006 - 997)];
    int m;
    int sEYdUBhb9la;
    int JhHWOq;
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
    int j;
    int k;
    for (JhHWOq = (994 - 994); (441 - 432) > JhHWOq; JhHWOq++) {
        j = 917 - 917;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((795 - 786) > j) {
            p[JhHWOq][j] = (94 - 94);
            JRIVXCiYDdG7[JhHWOq][j] = (752 - 752);
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
    scanf ("%d %d", &m, &sEYdUBhb9la);
    p[(715 - 711)][4] = m;
    for (k = (297 - 297); sEYdUBhb9la > k; k++) {
        for (JhHWOq = (52 - 52); (781 - 772) > JhHWOq; JhHWOq++)
            for (j = (21 - 21); 9 > j; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (p[JhHWOq][j] != 0) {
                    JRIVXCiYDdG7[JhHWOq][j] += 2 * p[JhHWOq][j];
                    JRIVXCiYDdG7[JhHWOq -(134 - 133)][j - (279 - 278)] += p[JhHWOq][j];
                    JRIVXCiYDdG7[JhHWOq -(813 - 812)][j] = JRIVXCiYDdG7[JhHWOq -(813 - 812)][j] + p[JhHWOq][j];
                    JRIVXCiYDdG7[JhHWOq -(302 - 301)][j + 1] = JRIVXCiYDdG7[JhHWOq -(302 - 301)][j + 1] + p[JhHWOq][j];
                    JRIVXCiYDdG7[JhHWOq][j - 1] = JRIVXCiYDdG7[JhHWOq][j - 1] + p[JhHWOq][j];
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
                    JRIVXCiYDdG7[JhHWOq][j + 1] = JRIVXCiYDdG7[JhHWOq][j + 1] + p[JhHWOq][j];
                    JRIVXCiYDdG7[JhHWOq +1][j - 1] += p[JhHWOq][j];
                    JRIVXCiYDdG7[JhHWOq +1][j] += p[JhHWOq][j];
                    JRIVXCiYDdG7[JhHWOq +1][j + 1] += p[JhHWOq][j];
                };
            }
        for (JhHWOq = 0; 9 > JhHWOq; JhHWOq++)
            for (j = 0; j < 9; j++) {
                p[JhHWOq][j] = JRIVXCiYDdG7[JhHWOq][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                JRIVXCiYDdG7[JhHWOq][j] = 0;
            };
    }
    for (JhHWOq = 0; 9 > JhHWOq; JhHWOq++)
        for (j = 0; j < 9; j++) {
            if ((j + 1) % 9 != 0)
                printf ("%d ", p[JhHWOq][j]);
            else
                printf ("%d\n", p[JhHWOq][j]);
        };
}

