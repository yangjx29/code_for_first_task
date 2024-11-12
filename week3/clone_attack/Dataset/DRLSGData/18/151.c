int omgPxv (int a [(472 - 372)] [(119 - 19)], int n) {
    int nRcJTNt [(222 - 122)], dxeUKHlZ5gPD [(923 - 823)];
    int yKNxzZJVc, j, TXorJqN6Zf, CfTmndJCLOv;
    {
        yKNxzZJVc = 263 - 263;
        while (yKNxzZJVc <= n - (371 - 370)) {
            nRcJTNt[yKNxzZJVc] = a[yKNxzZJVc][(736 - 736)];
            {
                j = 823 - 823;
                for (; j <= n - (321 - 320);) {
                    if (a[yKNxzZJVc][j] < nRcJTNt[yKNxzZJVc]) {
                        nRcJTNt[yKNxzZJVc] = a[yKNxzZJVc][j];
                    }
                    j++;
                }
            }
            yKNxzZJVc++;
        }
    }
    {
        TXorJqN6Zf = 795 - 795;
        while (TXorJqN6Zf <= n - (647 - 646)) {
            {
                CfTmndJCLOv = 345 - 345;
                for (; CfTmndJCLOv <= n - (354 - 353);) {
                    a[TXorJqN6Zf][CfTmndJCLOv] -= nRcJTNt[TXorJqN6Zf];
                    CfTmndJCLOv++;
                }
            }
            TXorJqN6Zf++;
        }
    }
    {
        yKNxzZJVc = 856 - 856;
        while (yKNxzZJVc <= n - (314 - 313)) {
            dxeUKHlZ5gPD[yKNxzZJVc] = a[(15 - 15)][yKNxzZJVc];
            {
                j = 918 - 918;
                for (; j <= n - (530 - 529);) {
                    if (a[j][yKNxzZJVc] < dxeUKHlZ5gPD[yKNxzZJVc]) {
                        dxeUKHlZ5gPD[yKNxzZJVc] = a[j][yKNxzZJVc];
                    }
                    j++;
                }
            }
            yKNxzZJVc++;
        }
    }
    {
        TXorJqN6Zf = 299 - 299;
        while (TXorJqN6Zf <= n - (103 - 102)) {
            {
                CfTmndJCLOv = 274 - 274;
                for (; CfTmndJCLOv <= n - (213 - 212);) {
                    a[CfTmndJCLOv][TXorJqN6Zf] -= dxeUKHlZ5gPD[TXorJqN6Zf];
                    CfTmndJCLOv++;
                }
            }
            TXorJqN6Zf++;
        }
    }
    return (849 - 849);
}

int main () {
    int yKNxzZJVc = (617 - 616), MX9ZJyDE0T3C [(852 - 752)] = {(316 - 316)}, DdJNMZwS;
    int n;
    cin >> n;
    for (; yKNxzZJVc <= n;) {
        int x8xWstPSCBO;
        int m;
        int CfTmndJCLOv;
        int TXorJqN6Zf;
        int j;
        int gIf0DUJ;
        int a [(406 - 306)] [100];
        {
            j = 723 - 723;
            for (; j <= n - (11 - 10);) {
                {
                    TXorJqN6Zf = 40 - 40;
                    for (; TXorJqN6Zf <= n - (464 - 463);) {
                        cin >> a[j][TXorJqN6Zf];
                        TXorJqN6Zf++;
                    }
                }
                j++;
            }
        }
        for (CfTmndJCLOv = (91 - 90); CfTmndJCLOv <= n - (126 - 125); CfTmndJCLOv++) {
            x8xWstPSCBO = omgPxv (a, n - CfTmndJCLOv +(334 - 333));
            MX9ZJyDE0T3C[yKNxzZJVc] += a[(331 - 330)][(103 - 102)];
            {
                m = 276 - 275;
                for (; m <= n - CfTmndJCLOv -(794 - 793);) {
                    {
                        gIf0DUJ = 769 - 769;
                        for (; gIf0DUJ <= n - CfTmndJCLOv;) {
                            a[m][gIf0DUJ] = a[m + 1][gIf0DUJ];
                            gIf0DUJ++;
                        }
                    }
                    m++;
                }
            }
            {
                m = 1;
                for (; m <= n - CfTmndJCLOv -1;) {
                    {
                        gIf0DUJ = 885 - 885;
                        for (; gIf0DUJ <= n - CfTmndJCLOv -1;) {
                            a[gIf0DUJ][m] = a[gIf0DUJ][m + 1];
                            gIf0DUJ++;
                        }
                    }
                    m++;
                }
            }
        }
        yKNxzZJVc++;
    }
    {
        DdJNMZwS = 1;
        for (; DdJNMZwS <= n;) {
            cout << MX9ZJyDE0T3C[DdJNMZwS] << endl;
            DdJNMZwS++;
        }
    }
    return 0;
}

