void  main () {
    int k20wkd;
    int min;
    int zNTKgFVs1lb;
    int RahOPkwKy;
    int zUQV5y4;
    k20wkd = (406 - 406);
    min = (495 - 495);
    zNTKgFVs1lb = (302 - 302);
    RahOPkwKy = (615 - 615);
    zUQV5y4 = 0;
    int i;
    int xIQCcNuzlwD;
    int zPdKVc;
    int pd7VSFNaKcT [8] [8];
    int wZ5h4cLywXBV, sl0rKspwykC;
    scanf ("%d,%d", &wZ5h4cLywXBV, &sl0rKspwykC);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < wZ5h4cLywXBV) {
            for (xIQCcNuzlwD = 0; xIQCcNuzlwD < sl0rKspwykC; xIQCcNuzlwD++)
                scanf ("%d", &pd7VSFNaKcT[i][xIQCcNuzlwD]);
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
    {
        i = 0;
        while (i < wZ5h4cLywXBV) {
            k20wkd = pd7VSFNaKcT[i][0];
            {
                xIQCcNuzlwD = 0;
                while (xIQCcNuzlwD < sl0rKspwykC) {
                    if (pd7VSFNaKcT[i][xIQCcNuzlwD] > k20wkd) {
                        k20wkd = pd7VSFNaKcT[i][xIQCcNuzlwD];
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
                        RahOPkwKy = xIQCcNuzlwD;
                    }
                    xIQCcNuzlwD++;
                };
            }
            i++;
            min = pd7VSFNaKcT[0][RahOPkwKy];
            {
                zPdKVc = 0;
                while (wZ5h4cLywXBV > zPdKVc) {
                    if (pd7VSFNaKcT[zPdKVc][RahOPkwKy] < min) {
                        min = pd7VSFNaKcT[zPdKVc][RahOPkwKy];
                        zNTKgFVs1lb = zPdKVc;
                    }
                    zPdKVc++;
                };
            }
            if (min == k20wkd) {
                printf ("%d+%d\n", zNTKgFVs1lb, RahOPkwKy);
                zUQV5y4++;
            };
        };
    }
    if (zUQV5y4 == 0)
        ;
}

