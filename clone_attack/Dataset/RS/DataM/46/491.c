void  main () {
    int flag;
    int BFuTsUKrBZI;
    int locj;
    int upwall;
    int leftwall;
    int row;
    int col;
    int downwall;
    int rightwall;
    int i;
    int kxYtfmy;
    flag = (676 - 675);
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
    BFuTsUKrBZI = (671 - 671);
    locj = 0;
    upwall = 0;
    leftwall = -(862 - 861);
    int ceUwh9o3baK8 [105] [105];
    scanf ("%d %d", &row, &col);
    for (i = 0; i < row; i++) {
        kxYtfmy = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kxYtfmy < col) {
            scanf ("%d", &ceUwh9o3baK8[i][kxYtfmy]);
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
            kxYtfmy++;
        };
    }
    downwall = row;
    rightwall = col;
    for (i = 1; i < row * col;) {
        if (locj + 1 < rightwall && !(1 != flag)) {
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d\n", ceUwh9o3baK8[BFuTsUKrBZI][locj++]);
        }
        else {
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
            if (locj - 1 > leftwall && flag == (993 - 991)) {
                i++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("%d\n", ceUwh9o3baK8[BFuTsUKrBZI][locj--]);
            }
            else {
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
                if (downwall > BFuTsUKrBZI +1 && flag == 3) {
                    printf ("%d\n", ceUwh9o3baK8[BFuTsUKrBZI++][locj]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i++;
                }
                else {
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
                    if (BFuTsUKrBZI -1 > upwall && !((622 - 618) != flag)) {
                        i++;
                        printf ("%d\n", ceUwh9o3baK8[BFuTsUKrBZI--][locj]);
                    }
                    else {
                        if (!(rightwall != locj + 1) && flag == 1) {
                            flag = 3;
                            rightwall--;
                        }
                        else {
                            if (locj - 1 == leftwall && flag == 2) {
                                leftwall++;
                                flag = 4;
                            }
                            else {
                                if (BFuTsUKrBZI +1 == downwall && flag == 3) {
                                    downwall--;
                                    flag = 2;
                                }
                                else if (BFuTsUKrBZI -1 == upwall && flag == 4) {
                                    upwall++;
                                    flag = 1;
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    printf ("%d\n", ceUwh9o3baK8[BFuTsUKrBZI][locj]);
}

