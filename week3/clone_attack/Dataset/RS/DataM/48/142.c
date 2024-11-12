int main () {
    int EBZfPetqJcM1, n, i, qs5xfj3, a, b, sz [(590 - 579)] [(684 - 673)], de [11] [11];
    {
        i = 673 - 673;
        while (i < 11) {
            {
                qs5xfj3 = 294 - 294;
                while (qs5xfj3 < 11) {
                    sz[i][qs5xfj3] = 0;
                    de[i][qs5xfj3] = 0;
                    qs5xfj3 = qs5xfj3 + 1;
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
            i = i + 1;
        };
    }
    scanf ("%d%d", &EBZfPetqJcM1, &n);
    de[5][5] = EBZfPetqJcM1;
    {
        a = 0;
        while (a < n) {
            a++;
            {
                i = 871 - 870;
                while (i < (741 - 731)) {
                    {
                        qs5xfj3 = 0;
                        while (qs5xfj3 < (689 - 679)) {
                            sz[i][qs5xfj3] = de[i][qs5xfj3];
                            qs5xfj3 = qs5xfj3 + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 940 - 939;
                while (i < (688 - 678)) {
                    {
                        qs5xfj3 = 541 - 540;
                        while (qs5xfj3 < 10) {
                            if (!(0 == sz[i][qs5xfj3])) {
                                b = sz[i][qs5xfj3];
                                de[i][qs5xfj3 + (712 - 711)] = de[i][qs5xfj3 + (375 - 374)] + b;
                                de[i][qs5xfj3 - (60 - 59)] = de[i][qs5xfj3 - (261 - 260)] + b;
                                de[i - 1][qs5xfj3] = de[i - 1][qs5xfj3] + b;
                                de[i + 1][qs5xfj3] = de[i + 1][qs5xfj3] + b;
                                de[i - 1][qs5xfj3 - 1] = de[i - 1][qs5xfj3 - 1] + b;
                                de[i - 1][qs5xfj3 + 1] = de[i - 1][qs5xfj3 + 1] + b;
                                de[i + 1][qs5xfj3 - 1] = de[i + 1][qs5xfj3 - 1] + b;
                                de[i + 1][qs5xfj3 + 1] = de[i + 1][qs5xfj3 + 1] + b;
                                de[i][qs5xfj3] = de[i][qs5xfj3] + b;
                            }
                            qs5xfj3++;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 1;
        while (i < 10) {
            {
                qs5xfj3 = 1;
                while (qs5xfj3 < 10) {
                    if (qs5xfj3 < 9)
                        printf ("%d ", de[i][qs5xfj3]);
                    else
                        printf ("%d\n", de[i][qs5xfj3]);
                    qs5xfj3++;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

