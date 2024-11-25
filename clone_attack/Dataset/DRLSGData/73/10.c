int main () {
    int N4Xw51furGO, j, k, yjhzK6t, BGR8tT24HId;
    int IqMPfgWSOn9z [(829 - 824)] [(70 - 65)];
    int BRg2jA9uO, JxQH0u;
    {
        N4Xw51furGO = (222 - 222);
        for (; N4Xw51furGO < (388 - 383);) {
            {
                j = (597 - 597);
                for (; (230 - 225) > j;) {
                    cin >> IqMPfgWSOn9z[N4Xw51furGO][j];
                    j++;
                }
            }
            N4Xw51furGO++;
        }
    }
    {
        BGR8tT24HId = (667 - 667);
        N4Xw51furGO = (963 - 963);
        for (; (41 - 36) > N4Xw51furGO;) {
            k = 0;
            yjhzK6t = 0;
            BRg2jA9uO = IqMPfgWSOn9z[N4Xw51furGO][(788 - 788)];
            {
                j = (830 - 829);
                for (; 5 > j;) {
                    if (IqMPfgWSOn9z[N4Xw51furGO][j] > BRg2jA9uO) {
                        BRg2jA9uO = IqMPfgWSOn9z[N4Xw51furGO][j];
                        k = j;
                    }
                    j++;
                }
            }
            JxQH0u = IqMPfgWSOn9z[0][k];
            {
                j = 1;
                for (; 5 > j;) {
                    if (IqMPfgWSOn9z[j][k] < JxQH0u) {
                        JxQH0u = IqMPfgWSOn9z[j][k];
                        yjhzK6t = j;
                    }
                    j++;
                }
            }
            if (yjhzK6t == N4Xw51furGO) {
                BGR8tT24HId++;
                cout << N4Xw51furGO +1 << ' ' << k + 1 << ' ' << IqMPfgWSOn9z[N4Xw51furGO][k] << endl;
            }
            N4Xw51furGO++;
        }
    }
    if (BGR8tT24HId == 0)
        cout << "not found" << endl;
    return 0;
}

