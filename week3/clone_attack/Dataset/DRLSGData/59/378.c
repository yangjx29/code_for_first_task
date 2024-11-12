int main () {
    int dx [4] = {0, -1, 0, 1};
    int W5HrGbn1Mx [4] = {-1, 0, 1, 0};
    int ans;
    ans = 0;
    int c6V7ESO;
    int jgkTmXesd;
    int nKhtECcyD [200] [200], b [200] [200];
    cin >> c6V7ESO;
    {
        int i;
        i = 1;
        for (; c6V7ESO >= i;) {
            int j;
            j = 1;
            for (; j <= c6V7ESO;) {
                char FsJhwd;
                cin >> FsJhwd;
                if (!('.' != FsJhwd))
                    nKhtECcyD[i][j] = 0;
                else {
                    if (FsJhwd == '#')
                        nKhtECcyD[i][j] = -1;
                    else
                        nKhtECcyD[i][j] = 1;
                }
                j = j + 1;
            }
            i = i + 1;
        }
    }
    cin >> jgkTmXesd;
    jgkTmXesd = jgkTmXesd - 1;
    for (; jgkTmXesd;) {
        {
            int i;
            i = 1;
            for (; c6V7ESO >= i;) {
                for (int j = 1;
                j <= c6V7ESO; j++)
                    b[i][j] = nKhtECcyD[i][j];
                i = i + 1;
            }
        }
        jgkTmXesd = jgkTmXesd - 1;
        {
            int i;
            i = 1;
            for (; i <= c6V7ESO;) {
                {
                    int j;
                    j = 1;
                    for (; j <= c6V7ESO;) {
                        if (nKhtECcyD[i][j] == 1) {
                            int k;
                            k = 0;
                            for (; k < 4;) {
                                int XC5mjyD;
                                int qv1PNSoZ8;
                                XC5mjyD = i + dx[k];
                                qv1PNSoZ8 = j + W5HrGbn1Mx[k];
                                if (nKhtECcyD[XC5mjyD][qv1PNSoZ8] == 0)
                                    b[XC5mjyD][qv1PNSoZ8] = 1;
                                k++;
                            }
                        }
                        j = j + 1;
                    }
                }
                i = i + 1;
            }
        }
        {
            int i;
            i = 1;
            for (; i <= c6V7ESO;) {
                {
                    int j;
                    j = 1;
                    for (; j <= c6V7ESO;) {
                        nKhtECcyD[i][j] = b[i][j];
                        j++;
                    }
                }
                i++;
            }
        }
    }
    {
        int i;
        i = 1;
        for (; i <= c6V7ESO;) {
            {
                int j = 1;
                for (; j <= c6V7ESO;) {
                    if (nKhtECcyD[i][j] == 1)
                        ans++;
                    j++;
                }
            }
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}

