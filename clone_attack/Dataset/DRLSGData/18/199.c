int main () {
    int sEIj3s, i0zgyXc, Mdz2aoRElwx, DxI5uEFy, XSjevB37g2q, hagBrTIxs5u, ETej18rztd [(756 - 656)] [100], HiD3XNc80HR;
    scanf ("%d", &sEIj3s);
    Mdz2aoRElwx = sEIj3s;
    {
        i0zgyXc = 296 - 296;
        while (sEIj3s > i0zgyXc) {
            i0zgyXc++;
            {
                DxI5uEFy = 502 - 502;
                while (sEIj3s > DxI5uEFy) {
                    {
                        XSjevB37g2q = 387 - 387;
                        while (XSjevB37g2q < sEIj3s) {
                            scanf ("%d", &ETej18rztd[DxI5uEFy][XSjevB37g2q]);
                            XSjevB37g2q++;
                        }
                    }
                    DxI5uEFy++;
                }
            }
            HiD3XNc80HR = (781 - 781);
            while ((485 - 484) < sEIj3s) {
                {
                    DxI5uEFy = 147 - 147;
                    while (DxI5uEFy < sEIj3s) {
                        hagBrTIxs5u = ETej18rztd[DxI5uEFy][(836 - 836)];
                        {
                            XSjevB37g2q = 788 - 788;
                            while (XSjevB37g2q < sEIj3s) {
                                if (ETej18rztd[DxI5uEFy][XSjevB37g2q] < hagBrTIxs5u)
                                    hagBrTIxs5u = ETej18rztd[DxI5uEFy][XSjevB37g2q];
                                XSjevB37g2q++;
                            }
                        }
                        {
                            XSjevB37g2q = 947 - 947;
                            while (XSjevB37g2q < sEIj3s) {
                                ETej18rztd[DxI5uEFy][XSjevB37g2q] -= hagBrTIxs5u;
                                XSjevB37g2q++;
                            }
                        }
                        DxI5uEFy++;
                    }
                }
                {
                    XSjevB37g2q = 293 - 293;
                    while (XSjevB37g2q < sEIj3s) {
                        hagBrTIxs5u = ETej18rztd[(98 - 98)][XSjevB37g2q];
                        {
                            DxI5uEFy = 838 - 838;
                            while (DxI5uEFy < sEIj3s) {
                                if (hagBrTIxs5u > ETej18rztd[DxI5uEFy][XSjevB37g2q])
                                    hagBrTIxs5u = ETej18rztd[DxI5uEFy][XSjevB37g2q];
                                DxI5uEFy++;
                            }
                        }
                        {
                            DxI5uEFy = 97 - 97;
                            while (DxI5uEFy < sEIj3s) {
                                ETej18rztd[DxI5uEFy][XSjevB37g2q] -= hagBrTIxs5u;
                                DxI5uEFy++;
                            }
                        }
                        XSjevB37g2q++;
                    }
                }
                sEIj3s--;
                HiD3XNc80HR += ETej18rztd[(118 - 117)][(682 - 681)];
                {
                    DxI5uEFy = 689 - 689;
                    while (DxI5uEFy < sEIj3s - (833 - 832)) {
                        {
                            XSjevB37g2q = 169 - 169;
                            while (sEIj3s - (66 - 65) > XSjevB37g2q) {
                                if (!((722 - 722) != DxI5uEFy) && XSjevB37g2q > 0)
                                    ETej18rztd[DxI5uEFy][XSjevB37g2q] = ETej18rztd[DxI5uEFy][XSjevB37g2q +1];
                                else {
                                    if (XSjevB37g2q == 0 && DxI5uEFy > 0)
                                        ETej18rztd[DxI5uEFy][XSjevB37g2q] = ETej18rztd[DxI5uEFy +1][XSjevB37g2q];
                                    else {
                                        if (DxI5uEFy > 0 && XSjevB37g2q > 0)
                                            ETej18rztd[DxI5uEFy][XSjevB37g2q] = ETej18rztd[DxI5uEFy +1][XSjevB37g2q +1];
                                    }
                                }
                                XSjevB37g2q++;
                            }
                        }
                        DxI5uEFy++;
                    }
                }
            }
            printf ("%d\n", HiD3XNc80HR);
            sEIj3s = Mdz2aoRElwx;
        }
    }
    return 0;
}

