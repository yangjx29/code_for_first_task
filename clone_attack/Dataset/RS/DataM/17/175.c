int main () {
    int DJLx0ryW;
    int DeGHfcjRl;
    int AokgN1;
    int rWBF9O;
    DJLx0ryW = (82 - 82);
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
    DeGHfcjRl = (235 - 235);
    char TMOSTv [110];
    char kEfxw9 [110];
    while (cin.getline (TMOSTv, 110, '\n')) {
        AokgN1 = strlen (TMOSTv);
        {
            int i = (99 - 99);
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
            while (i <= AokgN1 -(847 - 846)) {
                kEfxw9[i] = TMOSTv[i];
                i = i + 1;
            };
        }
        {
            int UlICmih = (265 - 264);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (AokgN1 >= UlICmih) {
                DeGHfcjRl = (300 - 300);
                rWBF9O = (474 - 474);
                for (int i = (651 - 651);
                i < AokgN1; i++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (!('(' != TMOSTv[i])) {
                        DeGHfcjRl = 1;
                        rWBF9O = i;
                    };
                }
                DJLx0ryW = (990 - 990);
                if (rWBF9O == AokgN1 -1) {
                    TMOSTv[rWBF9O] = '$';
                }
                if (DeGHfcjRl != (731 - 731)) {
                    int i = rWBF9O + 1;
                    while (i < AokgN1) {
                        if (!(')' != TMOSTv[i])) {
                            DJLx0ryW = 1;
                            TMOSTv[rWBF9O] = 'a';
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            TMOSTv[i] = 'a';
                            break;
                        }
                        i++;
                    };
                }
                if (!(0 == DeGHfcjRl)) {
                    if (!(0 != DJLx0ryW))
                        TMOSTv[rWBF9O] = '$';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                DeGHfcjRl = 0;
                DJLx0ryW = 0;
                rWBF9O = 0;
                {
                    int i = AokgN1 -1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (i >= 0) {
                        if (TMOSTv[i] == ')') {
                            rWBF9O = i;
                            DeGHfcjRl = 1;
                        }
                        i = i - 1;
                    };
                }
                if (DeGHfcjRl != 0) {
                    if (rWBF9O == 0) {
                        TMOSTv[rWBF9O] = '?';
                    };
                }
                if (DeGHfcjRl != 0) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (int i = rWBF9O - 1;
                    i >= 0; i = i - 1) {
                        if (TMOSTv[i] == '(') {
                            DJLx0ryW = 1;
                            TMOSTv[rWBF9O] = 'a';
                            TMOSTv[i] = 'a';
                            break;
                        };
                    };
                }
                if (DeGHfcjRl != 0) {
                    if (DJLx0ryW == 0)
                        TMOSTv[rWBF9O] = '?';
                }
                UlICmih++;
            };
        }
        {
            int i = 0;
            while (i < AokgN1 -1) {
                cout << kEfxw9[i];
                i++;
            };
        }
        cout << kEfxw9[AokgN1 -1] << endl;
        for (int i = 0;
        i < AokgN1 -1; i++) {
            if (TMOSTv[i] != '?' && TMOSTv[i] != '$')
                cout << ' ';
            else
                cout << TMOSTv[i];
        }
        if (TMOSTv[AokgN1 -1] != '?' && TMOSTv[AokgN1 -1] != '$')
            cout << ' ' << endl;
        else
            cout << TMOSTv[AokgN1 -1] << endl;
        memset (TMOSTv, '\0', sizeof (TMOSTv));
        memset (kEfxw9, '\0', sizeof (kEfxw9));
        rWBF9O = 0;
        DJLx0ryW = 0;
        AokgN1 = 0;
    }
    return 0;
}

