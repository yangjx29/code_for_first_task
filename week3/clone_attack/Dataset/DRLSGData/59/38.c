int main () {
    int GDOdfNI3;
    int NWmU45tH7;
    int ybHAu4CUR2B;
    int YwByG5;
    char ZfsMhE [102] [102];
    int TSD3jt5 [(713 - 611)] [102];
    int wL8b6rBwuC;
    int vGswRBbTKzf;
    GDOdfNI3 = 0;
    cin >> ybHAu4CUR2B;
    cin.get ();
    {
        YwByG5 = 609 - 609;
        while (ybHAu4CUR2B - (438 - 437) >= YwByG5) {
            {
                NWmU45tH7 = 850 - 850;
                while (NWmU45tH7 <= ybHAu4CUR2B - 2) {
                    cin >> ZfsMhE[YwByG5][NWmU45tH7];
                    NWmU45tH7++;
                }
            }
            cin >> ZfsMhE[YwByG5][NWmU45tH7];
            cin.get ();
            YwByG5++;
        }
    }
    cin >> vGswRBbTKzf;
    {
        YwByG5 = 0;
        while (ybHAu4CUR2B - 1 >= YwByG5) {
            {
                NWmU45tH7 = 0;
                while (NWmU45tH7 <= ybHAu4CUR2B - 1) {
                    if (!('@' != ZfsMhE[YwByG5][NWmU45tH7]))
                        TSD3jt5[YwByG5][NWmU45tH7] = 1;
                    NWmU45tH7++;
                }
            }
            YwByG5++;
        }
    }
    {
        wL8b6rBwuC = 2;
        while (vGswRBbTKzf >= wL8b6rBwuC) {
            GDOdfNI3 = 0;
            {
                YwByG5 = 0;
                while (ybHAu4CUR2B - 1 >= YwByG5) {
                    {
                        NWmU45tH7 = 0;
                        while (ybHAu4CUR2B - 1 >= NWmU45tH7) {
                            if (!('@' != ZfsMhE[YwByG5][NWmU45tH7])) {
                                if (!('.' != ZfsMhE[YwByG5 -1][NWmU45tH7]))
                                    TSD3jt5[YwByG5 -1][NWmU45tH7] = 1;
                                if (!('.' != ZfsMhE[YwByG5 +1][NWmU45tH7]))
                                    TSD3jt5[YwByG5 +1][NWmU45tH7] = 1;
                                if (!('.' != ZfsMhE[YwByG5][NWmU45tH7 -1]))
                                    TSD3jt5[YwByG5][NWmU45tH7 -1] = 1;
                                if (ZfsMhE[YwByG5][NWmU45tH7 +1] == '.')
                                    TSD3jt5[YwByG5][NWmU45tH7 +1] = 1;
                            }
                            NWmU45tH7++;
                        }
                    }
                    YwByG5++;
                }
            }
            {
                YwByG5 = 0;
                while (YwByG5 <= ybHAu4CUR2B - 1) {
                    {
                        NWmU45tH7 = 0;
                        while (NWmU45tH7 <= ybHAu4CUR2B - 1) {
                            if (TSD3jt5[YwByG5][NWmU45tH7] == 1) {
                                {
                                    {
                                        if (0) {
                                            return 0;
                                        }
                                    }
                                    if (0) {
                                        return 0;
                                    }
                                }
                                GDOdfNI3++;
                                ZfsMhE[YwByG5][NWmU45tH7] = '@';
                            }
                            NWmU45tH7++;
                        }
                    }
                    YwByG5++;
                }
            }
            wL8b6rBwuC++;
        }
    }
    cout << GDOdfNI3;
    return 0;
}

