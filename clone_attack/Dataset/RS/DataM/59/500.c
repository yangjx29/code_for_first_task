int judge (int LGfdBxS, int k) {
    if (LGfdBxS == -(684 - 683))
        return k + (462 - 461);
    else
        return LGfdBxS;
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
}

int main () {
    char t;
    int k;
    int CfLRrX4GW;
    int KcurWKikwAT;
    int m;
    int mi681TUpwa [(838 - 728)] [110] = {(347 - 347)};
    int i;
    int Iv0hoCQ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    k = (438 - 437);
    CfLRrX4GW = 0;
    cin >> KcurWKikwAT;
    {
        i = 144 - 143;
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
        while (KcurWKikwAT >= i) {
            {
                Iv0hoCQ = 412 - 411;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (KcurWKikwAT >= Iv0hoCQ) {
                    cin >> t;
                    if (!('.' != t)) {
                        mi681TUpwa[i][Iv0hoCQ] = -(963 - 962);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else if (!('#' != t)) {
                        mi681TUpwa[i][Iv0hoCQ] = 0;
                    }
                    else if (t == '@') {
                        mi681TUpwa[i][Iv0hoCQ] = (897 - 896);
                    }
                    else {
                    }
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
                    Iv0hoCQ = Iv0hoCQ +1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    while (k < m) {
        for (i = (161 - 160); i <= KcurWKikwAT; i = i + 1) {
            Iv0hoCQ = 897 - 896;
            while (Iv0hoCQ <= KcurWKikwAT) {
                if (mi681TUpwa[i][Iv0hoCQ] > 0 && mi681TUpwa[i][Iv0hoCQ] != k + (576 - 575)) {
                    mi681TUpwa[i - (13 - 12)][Iv0hoCQ] = judge (mi681TUpwa[i - (621 - 620)][Iv0hoCQ], k);
                    mi681TUpwa[i][Iv0hoCQ -1] = judge (mi681TUpwa[i][Iv0hoCQ -1], k);
                    mi681TUpwa[i + 1][Iv0hoCQ] = judge (mi681TUpwa[i + 1][Iv0hoCQ], k);
                    mi681TUpwa[i][Iv0hoCQ +1] = judge (mi681TUpwa[i][Iv0hoCQ +1], k);
                }
                Iv0hoCQ = Iv0hoCQ +1;
            };
        }
        k++;
    }
    {
        i = 1;
        while (i <= KcurWKikwAT) {
            {
                Iv0hoCQ = 1;
                while (Iv0hoCQ <= KcurWKikwAT) {
                    if (mi681TUpwa[i][Iv0hoCQ] > 0)
                        CfLRrX4GW++;
                    Iv0hoCQ = Iv0hoCQ +1;
                };
            }
            i = i + 1;
        };
    }
    cout << CfLRrX4GW << endl;
    return 0;
}

