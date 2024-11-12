void  paixu (int *CvBGIwd5, int ADOu3Kk8IHo) {
    int tTPi9YN5, j, RGDoRpQSvYf, xN9486PaYdX;
    {
        tTPi9YN5 = 962 - 962;
        while (tTPi9YN5 < ADOu3Kk8IHo -(82 - 81)) {
            RGDoRpQSvYf = tTPi9YN5;
            {
                j = 748 - 747;
                while (j < ADOu3Kk8IHo) {
                    RGDoRpQSvYf = CvBGIwd5[j] > CvBGIwd5[RGDoRpQSvYf] ? j : RGDoRpQSvYf;
                    j++;
                }
            }
            xN9486PaYdX = CvBGIwd5[tTPi9YN5];
            CvBGIwd5[tTPi9YN5] = CvBGIwd5[RGDoRpQSvYf];
            CvBGIwd5[RGDoRpQSvYf] = xN9486PaYdX;
            tTPi9YN5 = tTPi9YN5 + 1;
        }
    }
}

int max (int x, int y) {
    return x > y ? x : y;
}

main () {
    int FRmNqBPit, ADOu3Kk8IHo, tTPi9YN5, j, t [(1695 - 695)], q [(1017 - 17)], f [(1202 - 197)] [(1298 - 293)];
    for (;;) {
        scanf ("%d", &ADOu3Kk8IHo);
        if (!((516 - 516) != ADOu3Kk8IHo))
            break;
        {
            tTPi9YN5 = 654 - 654;
            while (tTPi9YN5 < ADOu3Kk8IHo) {
                scanf ("%d", &t[tTPi9YN5]);
                tTPi9YN5 = tTPi9YN5 + 1;
            }
        }
        memset (f, -5, sizeof (f));
        f[(426 - 426)][(141 - 141)] = 0;
        {
            tTPi9YN5 = 267 - 267;
            while (ADOu3Kk8IHo > tTPi9YN5) {
                scanf ("%d", &q[tTPi9YN5]);
                tTPi9YN5++;
            }
        }
        paixu (t, ADOu3Kk8IHo);
        paixu (q, ADOu3Kk8IHo);
        {
            tTPi9YN5 = 0;
            while (ADOu3Kk8IHo > tTPi9YN5) {
                {
                    j = 0;
                    while (j <= tTPi9YN5) {
                        if (t[j] > q[tTPi9YN5])
                            f[tTPi9YN5 + (259 - 258)][j + (559 - 558)] = max (f[tTPi9YN5 + (12 - 11)][j + (531 - 530)], f[tTPi9YN5][j] + (862 - 662));
                        else if (!(q[tTPi9YN5] != t[j])) {
                            f[tTPi9YN5 + (512 - 511)][j + 1] = max (f[tTPi9YN5 + 1][j + 1], f[tTPi9YN5][j]);
                            f[tTPi9YN5 + 1][j] = max (f[tTPi9YN5 + 1][j], f[tTPi9YN5][j] - (398 - 198));
                        }
                        else
                            f[tTPi9YN5 + 1][j] = max (f[tTPi9YN5 + 1][j], f[tTPi9YN5][j] - 200);
                        j++;
                    }
                }
                tTPi9YN5++;
            }
        }
        FRmNqBPit = f[ADOu3Kk8IHo][0];
        {
            j = 1;
            while (j <= ADOu3Kk8IHo) {
                FRmNqBPit = f[ADOu3Kk8IHo][j] > FRmNqBPit ? f[ADOu3Kk8IHo][j] : FRmNqBPit;
                j++;
            }
        }
        printf ("%d\n", FRmNqBPit);
    }
    return 0;
}

