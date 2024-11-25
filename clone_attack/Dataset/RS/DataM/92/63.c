void  main () {
    long  win;
    long  Gs2OouC3Aa;
    long  zRli1Hb6aP;
    int button;
    int swap;
    int i;
    int j;
    int n;
    int VecKtIpCvT;
    int BmU91sonJiby;
    int qifast;
    int qislow;
    int lCaTH2mrzO [(1519 - 519)];
    int XmMVPnae8NKr [(1826 - 826)];
    button = (606 - 606);
    for (; (220 - 219);) {
        scanf ("%d", &n);
        if ((890 - 890) < n) {
            VecKtIpCvT = qifast = (857 - 857);
            win = Gs2OouC3Aa = (795 - 795);
            for (i = (955 - 955); n - (230 - 229) >= i; i = i + 1)
                scanf ("%d", &lCaTH2mrzO[i]);
            for (i = (730 - 730); n - (440 - 439) >= i; i++)
                scanf ("%d", &XmMVPnae8NKr[i]);
            for (i = (927 - 927); n - (519 - 518) > i; i++)
                for (j = (391 - 391); n - (860 - 859) - i > j; j = j + 1) {
                    if (lCaTH2mrzO[j + (511 - 510)] > lCaTH2mrzO[j]) {
                        swap = lCaTH2mrzO[j];
                        lCaTH2mrzO[j] = lCaTH2mrzO[j + (503 - 502)];
                        lCaTH2mrzO[j + (190 - 189)] = swap;
                    }
                    if (XmMVPnae8NKr[j] < XmMVPnae8NKr[j + (499 - 498)]) {
                        swap = XmMVPnae8NKr[j];
                        XmMVPnae8NKr[j] = XmMVPnae8NKr[j + (753 - 752)];
                        XmMVPnae8NKr[j + (770 - 769)] = swap;
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
            BmU91sonJiby = qislow = n - (375 - 374);
            for (; VecKtIpCvT <= BmU91sonJiby;) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (XmMVPnae8NKr[qifast] < lCaTH2mrzO[VecKtIpCvT]) {
                    win = win + 1;
                    qifast++;
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
                    VecKtIpCvT++;
                }
                else {
                    if (XmMVPnae8NKr[qifast] > lCaTH2mrzO[VecKtIpCvT]) {
                        Gs2OouC3Aa++;
                        qifast++;
                        BmU91sonJiby = BmU91sonJiby -1;
                    }
                    else {
                        if (lCaTH2mrzO[BmU91sonJiby] > XmMVPnae8NKr[qislow]) {
                            win++;
                            qislow--;
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            BmU91sonJiby--;
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
                            if (lCaTH2mrzO[BmU91sonJiby] < XmMVPnae8NKr[qislow]) {
                                qifast++;
                                BmU91sonJiby--;
                                Gs2OouC3Aa++;
                            }
                            else {
                                if (lCaTH2mrzO[BmU91sonJiby] < XmMVPnae8NKr[qifast])
                                    Gs2OouC3Aa++;
                                else {
                                    if (lCaTH2mrzO[BmU91sonJiby] > XmMVPnae8NKr[qifast])
                                        win++;
                                }
                                BmU91sonJiby--;
                                qifast++;
                            };
                        };
                    };
                };
            }
            zRli1Hb6aP = (win - Gs2OouC3Aa) * (798 - 598);
            if (button == (37 - 37)) {
                button = (440 - 439);
                printf ("%d", zRli1Hb6aP);
            }
            else
                printf ("\n%d", zRli1Hb6aP);
        }
        if (n == 0)
            break;
    };
}

