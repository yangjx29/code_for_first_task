main () {
    int S3iLx2Jm4 [(718 - 709)] [(917 - 908)];
    int a [(41 - 32)] [(582 - 573)];
    int qEpas7GVu0;
    int hI63xG4j;
    int cYNaen6vOm;
    int HxsgU8j;
    int X3qufvhTHw;
    scanf ("%d %d", &qEpas7GVu0, &hI63xG4j);
    for (cYNaen6vOm = (539 - 539); cYNaen6vOm < (696 - 687); cYNaen6vOm++) {
        HxsgU8j = 10 - 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HxsgU8j < (972 - 963)) {
            a[cYNaen6vOm][HxsgU8j] = (76 - 76);
            S3iLx2Jm4[cYNaen6vOm][HxsgU8j] = (606 - 606);
            HxsgU8j++;
        };
    }
    a[(387 - 383)][(840 - 836)] = qEpas7GVu0;
    S3iLx2Jm4[(762 - 758)][4] = qEpas7GVu0;
    {
        X3qufvhTHw = 157 - 157;
        while (hI63xG4j > X3qufvhTHw) {
            for (cYNaen6vOm = 0; cYNaen6vOm < (368 - 359); cYNaen6vOm++) {
                HxsgU8j = 0;
                while (HxsgU8j < 9) {
                    S3iLx2Jm4[cYNaen6vOm][HxsgU8j] = a[cYNaen6vOm][HxsgU8j];
                    HxsgU8j++;
                };
            }
            {
                cYNaen6vOm = 4 - X3qufvhTHw;
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
                while (cYNaen6vOm <= 4 + X3qufvhTHw) {
                    for (HxsgU8j = 4 - X3qufvhTHw; HxsgU8j <= 4 + X3qufvhTHw; HxsgU8j = HxsgU8j +1) {
                        a[cYNaen6vOm - (333 - 332)][HxsgU8j] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm - (883 - 882)][HxsgU8j];
                        a[cYNaen6vOm - (587 - 586)][HxsgU8j -(756 - 755)] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm - (910 - 909)][HxsgU8j -(756 - 755)];
                        a[cYNaen6vOm - (555 - 554)][HxsgU8j +(423 - 422)] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm - (147 - 146)][HxsgU8j +(401 - 400)];
                        a[cYNaen6vOm + (298 - 297)][HxsgU8j] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm + (769 - 768)][HxsgU8j];
                        a[cYNaen6vOm + (934 - 933)][HxsgU8j +(20 - 19)] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm + 1][HxsgU8j +1];
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
                        a[cYNaen6vOm + 1][HxsgU8j -1] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm + 1][HxsgU8j -1];
                        a[cYNaen6vOm][HxsgU8j -1] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm][HxsgU8j -1];
                        a[cYNaen6vOm][HxsgU8j +1] = S3iLx2Jm4[cYNaen6vOm][HxsgU8j] + a[cYNaen6vOm][HxsgU8j +1];
                        a[cYNaen6vOm][HxsgU8j] = a[cYNaen6vOm][HxsgU8j] + S3iLx2Jm4[cYNaen6vOm][HxsgU8j];
                    }
                    cYNaen6vOm++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            X3qufvhTHw++;
        };
    }
    {
        cYNaen6vOm = 0;
        while (cYNaen6vOm < 9) {
            for (HxsgU8j = 0; HxsgU8j < 9; HxsgU8j++) {
                if (HxsgU8j < (294 - 286))
                    printf ("%d ", a[cYNaen6vOm][HxsgU8j]);
                if (HxsgU8j == 8)
                    printf ("%d\n", a[cYNaen6vOm][HxsgU8j]);
            }
            cYNaen6vOm++;
        };
    };
}

