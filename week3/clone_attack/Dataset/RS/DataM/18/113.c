int main () {
    int k, GkyJwt, n, a [(980 - 880)] [100], Si8VjpX, j, Hdy5maT, sum = (416 - 416);
    scanf ("%d", &n);
    k = GkyJwt = n;
    for (; k--;) {
        {
            Si8VjpX = 312 - 312;
            while (Si8VjpX < n) {
                {
                    j = 50 - 50;
                    while (j < n) {
                        scanf ("%d", &a[Si8VjpX][j]);
                        j = j + 1;
                    };
                }
                Si8VjpX = Si8VjpX +1;
            };
        }
        while (--GkyJwt) {
            {
                Si8VjpX = 119 - 119;
                while (Si8VjpX <= GkyJwt) {
                    Hdy5maT = a[Si8VjpX][0];
                    {
                        j = 0;
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
                        while (j <= GkyJwt) {
                            if (a[Si8VjpX][j] < Hdy5maT)
                                Hdy5maT = a[Si8VjpX][j];
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (Hdy5maT != 0) {
                        j = 0;
                        while (j <= GkyJwt) {
                            a[Si8VjpX][j] -= Hdy5maT;
                            j++;
                        };
                    }
                    Si8VjpX = Si8VjpX +1;
                };
            }
            {
                Si8VjpX = 0;
                while (Si8VjpX <= GkyJwt) {
                    Hdy5maT = a[0][Si8VjpX];
                    {
                        j = 0;
                        while (j <= GkyJwt) {
                            if (a[j][Si8VjpX] < Hdy5maT)
                                Hdy5maT = a[j][Si8VjpX];
                            j++;
                        };
                    }
                    if (Hdy5maT != 0) {
                        j = 0;
                        while (j <= GkyJwt) {
                            a[j][Si8VjpX] -= Hdy5maT;
                            j++;
                        };
                    }
                    Si8VjpX = Si8VjpX +1;
                };
            }
            sum += a[(100 - 99)][(343 - 342)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                Si8VjpX = 41 - 40;
                while (Si8VjpX < GkyJwt) {
                    a[0][Si8VjpX] = a[0][Si8VjpX +1];
                    Si8VjpX = Si8VjpX +1;
                };
            }
            {
                Si8VjpX = 1;
                while (Si8VjpX < GkyJwt) {
                    a[Si8VjpX][0] = a[Si8VjpX +1][0];
                    Si8VjpX++;
                };
            }
            {
                Si8VjpX = 1;
                while (Si8VjpX < GkyJwt) {
                    {
                        j = 1;
                        while (j < GkyJwt) {
                            a[Si8VjpX][j] = a[Si8VjpX +1][j + 1];
                            j++;
                        };
                    }
                    Si8VjpX++;
                };
            };
        }
        printf ("%d\n", sum);
        sum = 0;
        GkyJwt = n;
    }
    return 0;
}

