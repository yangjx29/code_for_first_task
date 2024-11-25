int main () {
    int pNCPnIkF;
    pNCPnIkF = 0;
    int n, SaohBOHXym;
    char OASUHTnFGmc [110] [110] = {'\0'};
    cin >> n;
    for (int ipk4DFx = (693 - 693);
    n > ipk4DFx; ipk4DFx = ipk4DFx + 1)
        for (int ga9MgJY = 0;
        n > ga9MgJY; ga9MgJY = ga9MgJY + 1)
            cin >> OASUHTnFGmc[ipk4DFx][ga9MgJY];
    for (int WNDEbIPM8o = 0;
    SaohBOHXym -1 > WNDEbIPM8o; WNDEbIPM8o++) {
        for (int ipk4DFx = 0;
        n > ipk4DFx; ipk4DFx = ipk4DFx + 1) {
            int ga9MgJY = 0;
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
            while (n > ga9MgJY) {
                if (!('@' != OASUHTnFGmc[ipk4DFx][ga9MgJY])) {
                    if (!('.' != OASUHTnFGmc[ipk4DFx + 1][ga9MgJY]))
                        OASUHTnFGmc[ipk4DFx + 1][ga9MgJY] = '$';
                    if (!('.' != OASUHTnFGmc[ipk4DFx][ga9MgJY + 1]))
                        OASUHTnFGmc[ipk4DFx][ga9MgJY + 1] = '$';
                    if (ipk4DFx && !('.' != OASUHTnFGmc[ipk4DFx - 1][ga9MgJY]))
                        OASUHTnFGmc[ipk4DFx - 1][ga9MgJY] = '$';
                    if (ga9MgJY && !('.' != OASUHTnFGmc[ipk4DFx][ga9MgJY - 1]))
                        OASUHTnFGmc[ipk4DFx][ga9MgJY - 1] = '$';
                }
                ga9MgJY = ga9MgJY + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int ipk4DFx = 0;
        n > ipk4DFx; ipk4DFx = ipk4DFx + 1) {
            int ga9MgJY = 0;
            while (ga9MgJY < n) {
                if (OASUHTnFGmc[ipk4DFx][ga9MgJY] == '$')
                    OASUHTnFGmc[ipk4DFx][ga9MgJY] = '@';
                ga9MgJY++;
            };
        };
    }
    for (int ipk4DFx = 0;
    ipk4DFx < n; ipk4DFx = ipk4DFx + 1)
        for (int ga9MgJY = 0;
        ga9MgJY < n; ga9MgJY++)
            if (OASUHTnFGmc[ipk4DFx][ga9MgJY] == '@')
                pNCPnIkF = pNCPnIkF + 1;
    cout << pNCPnIkF << endl;
    cin >> SaohBOHXym;
    return 0;
}

