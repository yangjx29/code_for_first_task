int main () {
    int JTlExOy [5] [5];
    int min;
    int i, j, k, XgX0Rx7, result = (894 - 894);
    for (j = 0; j < 5; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; i < 5; i++) {
            scanf ("%d", &JTlExOy[i][j]);
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
            };
        };
    }
    {
        i = 0;
        while (i < 5) {
            min = JTlExOy[i][0];
            {
                j = 0;
                while (j < 5) {
                    if (JTlExOy[i][j] <= min) {
                        min = JTlExOy[i][j];
                        k = j;
                    }
                    j = j + 1;
                };
            }
            {
                XgX0Rx7 = 0;
                while (XgX0Rx7 < 5) {
                    if (JTlExOy[XgX0Rx7][k] > JTlExOy[i][k])
                        break;
                    if (XgX0Rx7 == 4) {
                        result = 1;
                        printf ("%d %d %d", k + 1, i + 1, JTlExOy[i][k]);
                    }
                    XgX0Rx7++;
                };
            }
            i++;
        };
    }
    if (result == 0)
        printf ("not found");
    return 0;
}

