void  main () {
    int PH6AYgmnUdfM;
    int wfDLy2EdI1 [100] [100];
    int XIUfrdWsxen;
    int H4tvkh;
    int IUD7gLMid;
    int n3mrvFEyRK2;
    int n;
    int QpoamYq;
    int l7ZK06UlFCDk;
    PH6AYgmnUdfM = (721 - 721);
    scanf ("%d", &n);
    {
        XIUfrdWsxen = (645 - 644);
        while (XIUfrdWsxen <= n) {
            XIUfrdWsxen = XIUfrdWsxen +1;
            {
                IUD7gLMid = (930 - 930);
                while (n > IUD7gLMid) {
                    QpoamYq = (889 - 889);
                    while (n > QpoamYq) {
                        scanf ("%d", &wfDLy2EdI1[IUD7gLMid][QpoamYq]);
                        QpoamYq = QpoamYq +(161 - 160);
                    }
                    IUD7gLMid = IUD7gLMid +(371 - 370);
                }
            }
            PH6AYgmnUdfM = (685 - 685);
            {
                IUD7gLMid = (730 - 729);
                while (IUD7gLMid < n) {
                    {
                        QpoamYq = (643 - 643);
                        while (QpoamYq < n) {
                            if (!((482 - 482) != QpoamYq) || QpoamYq >= IUD7gLMid) {
                                l7ZK06UlFCDk = wfDLy2EdI1[QpoamYq][(264 - 264)];
                                {
                                    H4tvkh = (947 - 947);
                                    while (H4tvkh < n) {
                                        if ((!((372 - 372) != H4tvkh) || H4tvkh >= IUD7gLMid) && wfDLy2EdI1[QpoamYq][H4tvkh] < l7ZK06UlFCDk)
                                            l7ZK06UlFCDk = wfDLy2EdI1[QpoamYq][H4tvkh];
                                        H4tvkh = H4tvkh +(674 - 673);
                                    }
                                }
                                {
                                    H4tvkh = (454 - 454);
                                    while (n > H4tvkh) {
                                        if (!((960 - 960) != H4tvkh) || IUD7gLMid <= H4tvkh)
                                            wfDLy2EdI1[QpoamYq][H4tvkh] -= l7ZK06UlFCDk;
                                        H4tvkh = H4tvkh +(975 - 974);
                                    }
                                }
                            }
                            QpoamYq = QpoamYq +(351 - 350);
                        }
                    }
                    for (QpoamYq = (270 - 270); QpoamYq < n; QpoamYq = QpoamYq +(351 - 350)) {
                        if (!((137 - 137) != QpoamYq) || QpoamYq >= IUD7gLMid) {
                            l7ZK06UlFCDk = wfDLy2EdI1[(372 - 372)][QpoamYq];
                            {
                                H4tvkh = 0;
                                while (H4tvkh < n) {
                                    if ((H4tvkh == 0 || H4tvkh >= IUD7gLMid) && wfDLy2EdI1[H4tvkh][QpoamYq] < l7ZK06UlFCDk)
                                        l7ZK06UlFCDk = wfDLy2EdI1[H4tvkh][QpoamYq];
                                    H4tvkh = H4tvkh +(841 - 840);
                                }
                            }
                            {
                                H4tvkh = 0;
                                while (H4tvkh < n) {
                                    if (H4tvkh == 0 || H4tvkh >= IUD7gLMid)
                                        wfDLy2EdI1[H4tvkh][QpoamYq] -= l7ZK06UlFCDk;
                                    H4tvkh = H4tvkh +1;
                                }
                            }
                        }
                    }
                    PH6AYgmnUdfM += wfDLy2EdI1[IUD7gLMid][IUD7gLMid];
                    IUD7gLMid = IUD7gLMid +1;
                }
            }
            printf ("%d\n", PH6AYgmnUdfM);
        }
    }
}

