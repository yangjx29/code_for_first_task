main () {
    int i;
    int j;
    int jCDgLJ0;
    int rDJqnvy2Z;
    int n;
    int p;
    int j7SwzTQ;
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
    int rgpyY1lZ [(644 - 634)] [(64 - 54)], b [(894 - 884)] [10];
    {
        i = 831 - 830;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((190 - 181) >= i) {
            for (j = (336 - 335); j <= (890 - 881); j++)
                rgpyY1lZ[i][j] = (348 - 348);
            i++;
        };
    }
    scanf ("%d%d", &rDJqnvy2Z, &n);
    rgpyY1lZ[(191 - 186)][(490 - 485)] = rDJqnvy2Z;
    {
        i = 532 - 531;
        while (n >= i) {
            i++;
            {
                j = 603 - 602;
                while (j <= (765 - 756)) {
                    {
                        jCDgLJ0 = 713 - 712;
                        while ((707 - 698) >= jCDgLJ0) {
                            b[j][jCDgLJ0] = (747 - 747);
                            jCDgLJ0++;
                        };
                    }
                    j++;
                };
            }
            {
                j = 412 - 411;
                while (j <= (442 - 433)) {
                    {
                        jCDgLJ0 = 674 - 673;
                        while (jCDgLJ0 <= (938 - 929)) {
                            b[j][jCDgLJ0] = b[j][jCDgLJ0] + (415 - 413) * rgpyY1lZ[j][jCDgLJ0];
                            for (p = -(491 - 490); (86 - 85) >= p; p++) {
                                j7SwzTQ = 69 - 68;
                                while (j7SwzTQ <= (157 - 156)) {
                                    if ((p != (91 - 91)) || (j7SwzTQ != (128 - 128)))
                                        b[j + p][jCDgLJ0 + j7SwzTQ] = b[j + p][jCDgLJ0 + j7SwzTQ] + rgpyY1lZ[j][jCDgLJ0];
                                    j7SwzTQ++;
                                };
                            }
                            jCDgLJ0++;
                        };
                    }
                    j++;
                };
            }
            {
                j = 194 - 193;
                while (j <= (243 - 234)) {
                    for (jCDgLJ0 = 1; jCDgLJ0 <= (890 - 881); jCDgLJ0++)
                        rgpyY1lZ[j][jCDgLJ0] = b[j][jCDgLJ0];
                    j++;
                };
            };
        };
    }
    for (j = 1; j <= (77 - 68); j++) {
        {
            jCDgLJ0 = 1;
            while (jCDgLJ0 <= (582 - 573)) {
                printf ("%d", rgpyY1lZ[j][jCDgLJ0]);
                if (jCDgLJ0 < (157 - 148))
                    ;
                jCDgLJ0++;
            };
        };
    };
}

