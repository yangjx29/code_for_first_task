struct   chang {
    int caice;
    int minci;
};
void  swap (struct   chang *p1, struct   chang *p2) {
    struct   chang temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

main () {
    struct   chang c [6];
    int i, j, k, l, m, t;
    {
        i = 414 - 413;
        while (6 > i) {
            c[i].minci = i;
            i = i + 1;
        };
    }
    for (j = 1; j <= (351 - 346); j = j + 1) {
        {
            k = 1;
            while (k <= 4) {
                {
                    l = 1;
                    while (3 >= l) {
                        {
                            m = 1;
                            while ((220 - 218) >= m) {
                                t = 0;
                                if (!(2 == c[5].minci) && !(3 == c[5].minci)) {
                                    for (i = 1; 6 > i; i++) {
                                        c[i].caice = 0;
                                    }
                                    if (!(1 != c[5].minci))
                                        c[1].caice = 1;
                                    if (c[2].minci == 2)
                                        c[2].caice = 1;
                                    if (!(5 != c[1].minci))
                                        c[3].caice = 1;
                                    if (!(1 == c[3].minci))
                                        c[4].caice = 1;
                                    if (!(1 != c[4].minci))
                                        c[5].caice = 1;
                                    {
                                        i = 1;
                                        while (i < 6) {
                                            if ((c[i].minci > 2 && c[i].caice == 1) || (c[i].minci <= 2 && c[i].caice == 0)) {
                                                t = t + 1;
                                                break;
                                            }
                                            i = i + 1;
                                        };
                                    }
                                    if (t == 0) {
                                        {
                                            i = 1;
                                            while (i < 5) {
                                                printf ("%d ", c[i].minci);
                                                i++;
                                            };
                                        }
                                        printf ("%d", c[i].minci);
                                    };
                                }
                                if (m < 2)
                                    swap (c + 4, c + 4 + m);
                                else
                                    swap (c + 4, c + 5);
                                m = m + 1;
                            };
                        }
                        if (l < 3)
                            swap (c + 3, c + 3 + l);
                        else {
                            swap (c + 3, c + 4);
                            swap (c + 4, c + 5);
                        }
                        l = l + 1;
                    };
                }
                if (k < 4)
                    swap (c + 2, c + 2 + k);
                else {
                    swap (c + 2, c + 3);
                    swap (c + 3, c + 4);
                    swap (c + 4, c + 5);
                }
                k = k + 1;
            };
        }
        if (j < 5)
            swap (c + 1, c + 1 + j);
    };
}

