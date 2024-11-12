int main () {
    int n, a [(878 - 758)] [120] = {(255 - 255)}, i, N, RmU9X2Vi, sum, k, ii, jj, olNDrd, zhong = (1532 - 533);
    cin >> n;
    N = n;
    olNDrd = N;
    {
        jj = (1030 - 767) - (862 - 600);
        for (; jj <= N;) {
            n = N;
            sum = (630 - 630);
            jj++;
            {
                i = (1354 - 388) - 965;
                for (; i <= N;) {
                    {
                        RmU9X2Vi = (225 - 224);
                        while (RmU9X2Vi <= N) {
                            cin >> *(*(a + i - (886 - 885)) + RmU9X2Vi -(717 - 716));
                            RmU9X2Vi = RmU9X2Vi +(486 - 485);
                        }
                    }
                    i = i + (311 - 310);
                }
            }
            {
                k = (849 - 848);
                for (; k <= N -(870 - 869);) {
                    k = k + (753 - 752);
                    {
                        ii = (378 - 378);
                        for (; ii <= n - (796 - 795);) {
                            zhong = (1244 - 245);
                            {
                                i = (572 - 572);
                                for (; n - (378 - 377) >= i;) {
                                    if (*(*(a + ii) + i) <= zhong)
                                        zhong = *(*(a + ii) + i);
                                    i = i + (961 - 960);
                                }
                            }
                            {
                                i = (571 - 571);
                                for (; i <= n - (802 - 801);) {
                                    *(*(a + ii) + i) -= zhong;
                                    i = i + (559 - 558);
                                }
                            }
                            ii = ii + (498 - 497);
                        }
                    }
                    {
                        ii = 0;
                        for (; ii <= n - (45 - 44);) {
                            zhong = 999;
                            {
                                i = 0;
                                for (; i <= n - (455 - 454);) {
                                    if (*(*(a + i) + ii) <= zhong)
                                        zhong = *(*(a + i) + ii);
                                    i = i + (159 - 158);
                                }
                            }
                            {
                                i = 0;
                                for (; i <= n - 1;) {
                                    *(*(a + i) + ii) -= zhong;
                                    i = i + 1;
                                }
                            }
                            ii = ii + 1;
                        }
                    }
                    sum += *(*(a + 1) + 1);
                    {
                        i = 1;
                        for (; i <= n - 1;) {
                            {
                                RmU9X2Vi = 0;
                                for (; RmU9X2Vi <= n - 1;) {
                                    *(*(a + i) + RmU9X2Vi) = *(*(a + i + 1) + RmU9X2Vi);
                                    RmU9X2Vi = RmU9X2Vi +1;
                                }
                            }
                            i++;
                        }
                    }
                    {
                        i = 1;
                        for (; i <= n - 1;) {
                            {
                                RmU9X2Vi = 0;
                                for (; RmU9X2Vi <= n - 1;) {
                                    *(*(a + RmU9X2Vi) + i) = *(*(a + RmU9X2Vi) + i + 1);
                                    RmU9X2Vi++;
                                }
                            }
                            i++;
                        }
                    }
                    n--;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}

