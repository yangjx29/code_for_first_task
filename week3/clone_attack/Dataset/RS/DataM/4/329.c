void  main () {
    int n;
    int yWel3oXRGj;
    int iyOl2V9FtN;
    int rayGL3DQhk;
    int ZZHvIW;
    int Y3JiSCj;
    int *eQ4o6T18CvE [1000];
    for (yWel3oXRGj = 0; yWel3oXRGj < 1000; yWel3oXRGj = yWel3oXRGj + 1) {
        eQ4o6T18CvE[yWel3oXRGj] = (int *) malloc (10000 * sizeof (int));
    }
    scanf ("%d %d", &Y3JiSCj, &ZZHvIW);
    {
        yWel3oXRGj = 0;
        while (Y3JiSCj > yWel3oXRGj) {
            for (iyOl2V9FtN = 0; ZZHvIW > iyOl2V9FtN; iyOl2V9FtN = iyOl2V9FtN + 1) {
                scanf ("%d", (*(eQ4o6T18CvE + yWel3oXRGj) + iyOl2V9FtN));
            }
            yWel3oXRGj = yWel3oXRGj + 1;
        };
    }
    if (Y3JiSCj < ZZHvIW) {
        {
            yWel3oXRGj = 0;
            while (ZZHvIW > yWel3oXRGj) {
                {
                    iyOl2V9FtN = 0;
                    while (yWel3oXRGj >= iyOl2V9FtN) {
                        if (Y3JiSCj > iyOl2V9FtN) {
                            printf ("%d\n", *(*(eQ4o6T18CvE + iyOl2V9FtN) + yWel3oXRGj - iyOl2V9FtN));
                        }
                        else {
                            break;
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            };
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
                        iyOl2V9FtN = iyOl2V9FtN + 1;
                    };
                }
                yWel3oXRGj = yWel3oXRGj + 1;
            };
        }
        {
            yWel3oXRGj = 0;
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
            while (yWel3oXRGj < Y3JiSCj) {
                for (iyOl2V9FtN = 0; iyOl2V9FtN < Y3JiSCj; iyOl2V9FtN = iyOl2V9FtN + 1) {
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
                    if (Y3JiSCj > iyOl2V9FtN + yWel3oXRGj + 1) {
                        printf ("%d\n", *(*(eQ4o6T18CvE + iyOl2V9FtN + yWel3oXRGj + 1) + ZZHvIW -iyOl2V9FtN - 1));
                    }
                    else {
                        break;
                    };
                }
                yWel3oXRGj++;
            };
        };
    }
    else {
        for (yWel3oXRGj = 0; yWel3oXRGj < ZZHvIW; yWel3oXRGj = yWel3oXRGj + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (iyOl2V9FtN = 0; iyOl2V9FtN <= yWel3oXRGj; iyOl2V9FtN = iyOl2V9FtN + 1) {
                if (iyOl2V9FtN < Y3JiSCj) {
                    printf ("%d\n", *(*(eQ4o6T18CvE + iyOl2V9FtN) + yWel3oXRGj - iyOl2V9FtN));
                }
                else {
                    break;
                };
            };
        }
        for (yWel3oXRGj = 0; yWel3oXRGj < Y3JiSCj; yWel3oXRGj = yWel3oXRGj + 1) {
            for (iyOl2V9FtN = 0; iyOl2V9FtN < ZZHvIW; iyOl2V9FtN = iyOl2V9FtN + 1) {
                if (iyOl2V9FtN + yWel3oXRGj + 1 < Y3JiSCj) {
                    printf ("%d\n", *(*(eQ4o6T18CvE + iyOl2V9FtN + yWel3oXRGj + 1) + ZZHvIW -iyOl2V9FtN - 1));
                }
                else {
                    break;
                };
            };
        };
    };
}

