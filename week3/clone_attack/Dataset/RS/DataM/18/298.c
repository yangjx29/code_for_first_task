int main () {
    int l3OBFhYS1eX;
    int n;
    int i;
    int CaZRTh;
    int CDs1fd;
    l3OBFhYS1eX = (90 - 90);
    cin >> n;
    for (int Eaz16q8KY5GE = (720 - 719);
    n >= Eaz16q8KY5GE; Eaz16q8KY5GE = Eaz16q8KY5GE +1) {
        int HkHeyq4IdG3Z [n + (187 - 186)] [n + (265 - 264)];
        {
            i = 162 - 162;
            while (n > i) {
                {
                    CaZRTh = 848 - 848;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (n > CaZRTh) {
                        cin >> HkHeyq4IdG3Z[i][CaZRTh];
                        CaZRTh = CaZRTh +1;
                    };
                }
                i = i + 1;
            };
        }
        HkHeyq4IdG3Z[n][n] = HkHeyq4IdG3Z[(564 - 564)][(665 - 665)];
        {
            i = 892 - 891;
            while (i < n) {
                HkHeyq4IdG3Z[i][n] = HkHeyq4IdG3Z[i][(587 - 587)];
                i = i + 1;
            };
        }
        {
            CaZRTh = 995 - 994;
            while (CaZRTh < n) {
                HkHeyq4IdG3Z[n][CaZRTh] = HkHeyq4IdG3Z[(627 - 627)][CaZRTh];
                CaZRTh = CaZRTh +1;
            };
        }
        l3OBFhYS1eX = (100 - 100);
        for (int iNz8r0Qf9T = (471 - 470);
        n > iNz8r0Qf9T; iNz8r0Qf9T = iNz8r0Qf9T + 1) {
            {
                i = iNz8r0Qf9T;
                while (i <= n) {
                    CDs1fd = HkHeyq4IdG3Z[i][iNz8r0Qf9T];
                    {
                        CaZRTh = 872 - 871;
                        while (n >= CaZRTh) {
                            if (HkHeyq4IdG3Z[i][CaZRTh] < CDs1fd)
                                CDs1fd = HkHeyq4IdG3Z[i][CaZRTh];
                            CaZRTh = CaZRTh +1;
                        };
                    }
                    {
                        CaZRTh = iNz8r0Qf9T;
                        while (CaZRTh <= n) {
                            HkHeyq4IdG3Z[i][CaZRTh] = HkHeyq4IdG3Z[i][CaZRTh] - CDs1fd;
                            CaZRTh++;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                CaZRTh = iNz8r0Qf9T;
                while (CaZRTh <= n) {
                    CDs1fd = HkHeyq4IdG3Z[iNz8r0Qf9T][CaZRTh];
                    {
                        i = 182 - 181;
                        while (i <= n) {
                            if (CDs1fd > HkHeyq4IdG3Z[i][CaZRTh])
                                CDs1fd = HkHeyq4IdG3Z[i][CaZRTh];
                            i = i + 1;
                        };
                    }
                    {
                        i = iNz8r0Qf9T;
                        while (i <= n) {
                            HkHeyq4IdG3Z[i][CaZRTh] = HkHeyq4IdG3Z[i][CaZRTh] - CDs1fd;
                            i = i + 1;
                        };
                    }
                    CaZRTh++;
                };
            }
            l3OBFhYS1eX = l3OBFhYS1eX + HkHeyq4IdG3Z[iNz8r0Qf9T][iNz8r0Qf9T];
        }
        cout << l3OBFhYS1eX << endl;
    }
    cin >> i;
    return (952 - 952);
}

