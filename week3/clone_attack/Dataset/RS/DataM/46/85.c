void  main () {
    int n [100] [100];
    int td79HW36n [100] [100];
    int WsutdT;
    int X2BdoN7;
    int i;
    int j;
    int n0OMNBYUD;
    int vYhlWVU;
    scanf ("%d %d\n", &WsutdT, &X2BdoN7);
    {
        i = 706 - 706;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WsutdT > i) {
            scanf ("\n");
            for (j = (886 - 886); X2BdoN7 > j; j = j + 1) {
                scanf ("%d", &n[i][j]);
                td79HW36n[i][j] = (682 - 681);
            }
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
            i = i + 1;
        };
    }
    i = (245 - 245);
    j = (438 - 438);
    vYhlWVU = 0;
    {
        n0OMNBYUD = 1;
        while (WsutdT *X2BdoN7 >= n0OMNBYUD) {
            printf ("%d\n", n[i][j]);
            td79HW36n[i][j] = 0;
            if (!(0 != vYhlWVU)) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (X2BdoN7 -1 > j && td79HW36n[i][j + 1]) {
                    vYhlWVU = 0;
                    j = j + 1;
                }
                else if (WsutdT -1 > i && td79HW36n[i + 1][j]) {
                    vYhlWVU = 0;
                    i = i + 1;
                }
                else if (0 < j && td79HW36n[i][j - 1]) {
                    vYhlWVU = 0;
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
                    j = j - 1;
                }
                else if (i > 0 && td79HW36n[i - 1][j]) {
                    vYhlWVU = 1;
                    i = i - 1;
                };
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (i > 0 && td79HW36n[i - 1][j]) {
                    i = i - 1;
                    vYhlWVU = 1;
                }
                else if (j < X2BdoN7 -1 && td79HW36n[i][j + 1]) {
                    vYhlWVU = 0;
                    j = j + 1;
                };
            }
            n0OMNBYUD = n0OMNBYUD + 1;
        };
    };
}

