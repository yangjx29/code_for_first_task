int main () {
    int m;
    int WhNeXtrS;
    int CMiYd9CkgBqh;
    int BoF1w84L [(525 - 424)] [101] = {(631 - 631)};
    int i7bsBxDG [101] [101] = {(674 - 674)};
    int MB7Mm1pxEg [101] [101] = {0};
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
    cin >> m >> WhNeXtrS;
    {
        int KjO3ui1hD4d = (54 - 53);
        while (m >= KjO3ui1hD4d) {
            for (int eXmiCd = 1;
            WhNeXtrS >= eXmiCd; eXmiCd = eXmiCd + 1) {
                cin >> BoF1w84L[KjO3ui1hD4d][eXmiCd];
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
            KjO3ui1hD4d = KjO3ui1hD4d +1;
        };
    }
    cin >> WhNeXtrS >> CMiYd9CkgBqh;
    {
        int KjO3ui1hD4d = 1;
        while (WhNeXtrS >= KjO3ui1hD4d) {
            for (int eXmiCd = 1;
            CMiYd9CkgBqh >= eXmiCd; eXmiCd = eXmiCd + 1) {
                cin >> i7bsBxDG[KjO3ui1hD4d][eXmiCd];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
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
            KjO3ui1hD4d++;
        };
    }
    for (int KjO3ui1hD4d = 1;
    KjO3ui1hD4d <= m; KjO3ui1hD4d = KjO3ui1hD4d +1)
        for (int eXmiCd = 1;
        eXmiCd <= CMiYd9CkgBqh; eXmiCd = eXmiCd + 1) {
            int Wkf2tpE3YAa = 1;
            while (Wkf2tpE3YAa <= WhNeXtrS) {
                MB7Mm1pxEg[KjO3ui1hD4d][eXmiCd] = MB7Mm1pxEg[KjO3ui1hD4d][eXmiCd] + BoF1w84L[KjO3ui1hD4d][Wkf2tpE3YAa] * i7bsBxDG[Wkf2tpE3YAa][eXmiCd];
                Wkf2tpE3YAa = Wkf2tpE3YAa +1;
            };
        }
    for (int KjO3ui1hD4d = 1;
    KjO3ui1hD4d <= m; KjO3ui1hD4d++) {
        cout << MB7Mm1pxEg[KjO3ui1hD4d][1];
        for (int eXmiCd = 2;
        eXmiCd <= CMiYd9CkgBqh; eXmiCd = eXmiCd + 1) {
            cout << " " << MB7Mm1pxEg[KjO3ui1hD4d][eXmiCd];
        }
        cout << endl;
    }
    return 0;
}

