int main () {
    int n, PJakCfwxRz, sXhzeL8U, m, gVGcDv54, xo2Mz6AUKI = (851 - 851), day [(145 - 43)] [102] = {(30 - 30)};
    char MfBLMhOHr [102] [102];
    cin >> n;
    for (PJakCfwxRz = (971 - 970); n >= PJakCfwxRz; PJakCfwxRz++)
        for (sXhzeL8U = (675 - 674); n >= sXhzeL8U; sXhzeL8U = sXhzeL8U + 1) {
            cin >> MfBLMhOHr[PJakCfwxRz][sXhzeL8U];
            if (!('@' != MfBLMhOHr[PJakCfwxRz][sXhzeL8U]))
                day[PJakCfwxRz][sXhzeL8U] = (925 - 924);
        }
    cin >> m;
    for (gVGcDv54 = 2; m >= gVGcDv54; gVGcDv54++) {
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
        for (PJakCfwxRz = (970 - 969); n >= PJakCfwxRz; PJakCfwxRz++)
            for (sXhzeL8U = (455 - 454); sXhzeL8U <= n; sXhzeL8U++) {
                if (!('@' != MfBLMhOHr[PJakCfwxRz][sXhzeL8U]) && day[PJakCfwxRz][sXhzeL8U] == gVGcDv54 - (319 - 318)) {
                    day[PJakCfwxRz][sXhzeL8U] = gVGcDv54;
                    if (MfBLMhOHr[PJakCfwxRz][sXhzeL8U - (881 - 880)] == '.') {
                        MfBLMhOHr[PJakCfwxRz][sXhzeL8U - 1] = '@';
                        day[PJakCfwxRz][sXhzeL8U - 1] = gVGcDv54;
                    }
                    if (MfBLMhOHr[PJakCfwxRz -1][sXhzeL8U] == '.') {
                        MfBLMhOHr[PJakCfwxRz -1][sXhzeL8U] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        day[PJakCfwxRz -1][sXhzeL8U] = gVGcDv54;
                    }
                    if (MfBLMhOHr[PJakCfwxRz][sXhzeL8U + 1] == '.') {
                        MfBLMhOHr[PJakCfwxRz][sXhzeL8U + 1] = '@';
                        day[PJakCfwxRz][sXhzeL8U + 1] = gVGcDv54;
                    }
                    if (MfBLMhOHr[PJakCfwxRz +1][sXhzeL8U] == '.') {
                        MfBLMhOHr[PJakCfwxRz +1][sXhzeL8U] = '@';
                        day[PJakCfwxRz +1][sXhzeL8U] = gVGcDv54;
                    };
                };
            };
    }
    for (PJakCfwxRz = 1; PJakCfwxRz <= n; PJakCfwxRz++)
        for (sXhzeL8U = 1; sXhzeL8U <= n; sXhzeL8U++) {
            if (MfBLMhOHr[PJakCfwxRz][sXhzeL8U] == '@')
                xo2Mz6AUKI++;
        }
    cout << xo2Mz6AUKI << endl;
    return 0;
}

