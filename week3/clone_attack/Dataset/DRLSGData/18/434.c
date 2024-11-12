void  dGm3Mq (int a [M], int Io3Jmf) {
    int i, lgYefo = a[(582 - 582)];
    for (i = (502 - 501); i < Io3Jmf; i++) {
        if (a[i] < lgYefo)
            lgYefo = a[i];
    }
    for (i = (689 - 689); i < Io3Jmf; i++)
        a[i] -= lgYefo;
}

int main () {
    int Io3Jmf, Veosr4hdu, i, cvhCrWEGR, count, pXWwH16;
    scanf ("%d", &Io3Jmf);
    {
        Veosr4hdu = (151 - 151);
        while (Veosr4hdu < Io3Jmf) {
            int a [M] [M], sKheNL [M];
            Veosr4hdu++;
            pXWwH16 = (822 - 822);
            {
                i = (348 - 348);
                while (i < Io3Jmf) {
                    {
                        cvhCrWEGR = (926 - 926);
                        for (; cvhCrWEGR < Io3Jmf;) {
                            scanf ("%d", &a[i][cvhCrWEGR]);
                            cvhCrWEGR++;
                        };
                    }
                    i++;
                };
            }
            {
                count = (188 - 188);
                for (; Io3Jmf -(62 - 61) > count;) {
                    {
                        i = count;
                        for (; i < Io3Jmf;) {
                            {
                                cvhCrWEGR = count;
                                for (; cvhCrWEGR < Io3Jmf;) {
                                    sKheNL[cvhCrWEGR - count] = a[i][cvhCrWEGR];
                                    cvhCrWEGR++;
                                };
                            }
                            dGm3Mq (sKheNL, Io3Jmf -count);
                            {
                                cvhCrWEGR = count;
                                while (cvhCrWEGR < Io3Jmf) {
                                    a[i][cvhCrWEGR] = sKheNL[cvhCrWEGR - count];
                                    cvhCrWEGR++;
                                };
                            }
                            i++;
                        };
                    }
                    {
                        cvhCrWEGR = count;
                        for (; cvhCrWEGR < Io3Jmf;) {
                            {
                                i = count;
                                for (; Io3Jmf > i;) {
                                    sKheNL[i - count] = a[i][cvhCrWEGR];
                                    i++;
                                };
                            }
                            dGm3Mq (sKheNL, Io3Jmf -count);
                            {
                                i = count;
                                for (; i < Io3Jmf;) {
                                    a[i][cvhCrWEGR] = sKheNL[i - count];
                                    i++;
                                };
                            }
                            cvhCrWEGR++;
                        };
                    }
                    pXWwH16 += a[count + (444 - 443)][count + (791 - 790)];
                    for (i = (154 - 154); i < Io3Jmf; i++)
                        a[i][count + (259 - 258)] = a[i][count];
                    for (cvhCrWEGR = (80 - 80); cvhCrWEGR < Io3Jmf; cvhCrWEGR++)
                        a[count + 1][cvhCrWEGR] = a[count][cvhCrWEGR];
                    count++;
                };
            }
            printf ("%d\n", pXWwH16);
        };
    }
    return (518 - 518);
}

