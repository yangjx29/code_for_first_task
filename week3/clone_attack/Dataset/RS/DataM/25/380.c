int main () {
    int n9K2AbxXYsPe = (861 - 861), kJ5LyoS [(242 - 192)], TLpPkTx [50], YC9efRK = (766 - 766), ffdBtu3Ajns = (513 - 513), yushu = 0;
    int i = 0;
    cin >> n9K2AbxXYsPe;
    kJ5LyoS[0] = 1;
    TLpPkTx[0] = 1;
    for (i = 1; i < 50; i++) {
        kJ5LyoS[i] = 0;
        TLpPkTx[i] = 0;
    }
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
    for (i = 0; n9K2AbxXYsPe > i; i++) {
        ffdBtu3Ajns = 0;
        yushu = 0;
        YC9efRK = kJ5LyoS[ffdBtu3Ajns] * 2 + yushu;
        if (10 > YC9efRK)
            TLpPkTx[ffdBtu3Ajns] = YC9efRK;
        else {
            if (10 <= YC9efRK) {
                TLpPkTx[ffdBtu3Ajns] = YC9efRK % 10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                yushu = YC9efRK / 10;
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
        ffdBtu3Ajns = ffdBtu3Ajns + 1;
        for (; ffdBtu3Ajns < 50;) {
            YC9efRK = kJ5LyoS[ffdBtu3Ajns] * 2 + yushu;
            if (10 > YC9efRK) {
                TLpPkTx[ffdBtu3Ajns] = YC9efRK;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                yushu = 0;
            }
            else if (10 <= YC9efRK) {
                TLpPkTx[ffdBtu3Ajns] = YC9efRK % 10;
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
                yushu = YC9efRK / 10;
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
            ffdBtu3Ajns++;
        }
        for (int GBa5JCG20sh = 0;
        50 > GBa5JCG20sh; GBa5JCG20sh++)
            kJ5LyoS[GBa5JCG20sh] = TLpPkTx[GBa5JCG20sh];
    }
    i = 49;
    while (kJ5LyoS[i--] == 0)
        ;
    {
        i++;
        while (i >= 0) {
            cout << kJ5LyoS[i];
            i--;
        };
    }
    return 0;
}

