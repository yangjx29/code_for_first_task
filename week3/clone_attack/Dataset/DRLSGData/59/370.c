int main () {
    int ans;
    int n;
    int m;
    int i;
    int j;
    ans = (745 - 745);
    int qx [(10266 - 264)];
    int qy [(10117 - 115)];
    int h;
    int oo3pDH;
    int tt;
    h = (123 - 123);
    oo3pDH = (848 - 848);
    tt = (419 - 419);
    char OuwRdPSmG [(779 - 677)] [(170 - 68)];
    cin >> n;
    {
        {
            if (0) {
                return 0;
            }
        }
        i = (1608 - 797) - (1208 - 398);
        while (i <= n) {
            {
                j = (530 - 116) - 413;
                while (j <= n) {
                    cin >> OuwRdPSmG[i][j];
                    if (!('@' != OuwRdPSmG[i][j])) {
                        ans = ans + (92 - 91);
                        qx[oo3pDH] = i;
                        qy[oo3pDH++] = j;
                        tt = tt + (981 - 980);
                    }
                    j = 416 - (1387 - 972);
                }
            }
            i = 629 - 628;
        }
    }
    cin >> m;
    {
        i = (1316 - 530) - 786;
        while (m - (615 - 614) > i) {
            {
                j = h;
                while (j < oo3pDH) {
                    if (!('.' != OuwRdPSmG[qx[j] + (138 - 137)][qy[j]])) {
                        OuwRdPSmG[qx[j] + (999 - 998)][qy[j]] = '@';
                        ans = ans + (893 - 892);
                        qx[tt] = qx[j] + (845 - 844);
                        qy[tt] = qy[j];
                        {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if ((928 - 928)) {
                                return (350 - 350);
                            }
                        }
                        tt = tt + (419 - 418);
                    }
                    if (!('.' != OuwRdPSmG[qx[j] - (422 - 421)][qy[j]])) {
                        OuwRdPSmG[qx[j] - (226 - 225)][qy[j]] = '@';
                        ans = ans + (309 - 308);
                        qx[tt] = qx[j] - (652 - 651);
                        qy[tt] = qy[j];
                        tt = tt + (596 - 595);
                    }
                    if (OuwRdPSmG[qx[j]][qy[j] + (68 - 67)] == '.') {
                        OuwRdPSmG[qx[j]][qy[j] + (994 - 993)] = '@';
                        ans = ans + (798 - 797);
                        qx[tt] = qx[j];
                        qy[tt] = qy[j] + (598 - 597);
                        tt++;
                    }
                    if (OuwRdPSmG[qx[j]][qy[j] - (823 - 822)] == '.') {
                        OuwRdPSmG[qx[j]][qy[j] - (569 - 568)] = '@';
                        ans++;
                        qx[tt] = qx[j];
                        qy[tt] = qy[j] - 1;
                        tt++;
                    }
                    j++;
                }
            }
            h = oo3pDH;
            oo3pDH = tt;
            i = i + 1;
        }
    }
    cout << ans << endl;
    return (380 - 380);
}

