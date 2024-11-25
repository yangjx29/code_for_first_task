int main () {
    int a [(457 - 346)] [(990 - 879)] = {(31 - 31)};
    int TjXJaH7mL [(1051 - 940)] [(192 - 81)] = {(92 - 92)};
    int LkrFjD;
    char mPqubknMA [(732 - 621)] [(1096 - 985)];
    int day;
    int azLRDpwT5aG;
    azLRDpwT5aG = (811 - 811);
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
    char YOBavfP;
    cin >> LkrFjD;
    for (int I3FsOtRz = (780 - 779);
    I3FsOtRz <= LkrFjD; I3FsOtRz = I3FsOtRz +1)
        cin >> mPqubknMA[I3FsOtRz];
    cin >> day;
    for (int I3FsOtRz = (851 - 850);
    I3FsOtRz <= LkrFjD; I3FsOtRz++) {
        int k8xSl2f = (131 - 130);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LkrFjD >= k8xSl2f) {
            YOBavfP = mPqubknMA[I3FsOtRz][k8xSl2f - (722 - 721)];
            if (!('.' != YOBavfP))
                a[I3FsOtRz][k8xSl2f] = (69 - 68);
            else {
                if (YOBavfP == '#')
                    a[I3FsOtRz][k8xSl2f] = 0;
                else
                    a[I3FsOtRz][k8xSl2f] = -(229 - 228);
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
            k8xSl2f++;
        };
    }
    for (int I3FsOtRz = 0;
    I3FsOtRz < day - (574 - 573); I3FsOtRz++) {
        for (int DP0fHJUD = (417 - 416);
        LkrFjD >= DP0fHJUD; DP0fHJUD = DP0fHJUD +1)
            for (int k8xSl2f = (787 - 786);
            k8xSl2f <= LkrFjD; k8xSl2f++)
                TjXJaH7mL[DP0fHJUD][k8xSl2f] = a[DP0fHJUD][k8xSl2f];
        {
            int yVGpLSa = (700 - 699);
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
            while (LkrFjD >= yVGpLSa) {
                {
                    int n9bZ5VCH = (222 - 221);
                    while (n9bZ5VCH <= LkrFjD) {
                        if (a[yVGpLSa][n9bZ5VCH] == -(39 - 38)) {
                            if (a[yVGpLSa - (566 - 565)][n9bZ5VCH] == (158 - 157))
                                TjXJaH7mL[yVGpLSa - (885 - 884)][n9bZ5VCH] = -(25 - 24);
                            if (a[yVGpLSa + (302 - 301)][n9bZ5VCH] == (686 - 685))
                                TjXJaH7mL[yVGpLSa + (271 - 270)][n9bZ5VCH] = -(131 - 130);
                            if (a[yVGpLSa][n9bZ5VCH - (368 - 367)] == (232 - 231))
                                TjXJaH7mL[yVGpLSa][n9bZ5VCH - (913 - 912)] = -(442 - 441);
                            if (a[yVGpLSa][n9bZ5VCH + 1] == 1)
                                TjXJaH7mL[yVGpLSa][n9bZ5VCH + 1] = -1;
                        }
                        n9bZ5VCH++;
                    };
                }
                yVGpLSa++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int yVGpLSa = 1;
        yVGpLSa <= LkrFjD; yVGpLSa = yVGpLSa + 1)
            for (int n9bZ5VCH = 1;
            n9bZ5VCH <= LkrFjD; n9bZ5VCH = n9bZ5VCH + 1)
                a[yVGpLSa][n9bZ5VCH] = TjXJaH7mL[yVGpLSa][n9bZ5VCH];
    }
    for (int I3FsOtRz = 1;
    I3FsOtRz <= LkrFjD; I3FsOtRz++)
        for (int k8xSl2f = 1;
        k8xSl2f <= LkrFjD; k8xSl2f++)
            if (a[I3FsOtRz][k8xSl2f] == -1)
                azLRDpwT5aG = azLRDpwT5aG + 1;
    cout << azLRDpwT5aG;
    return 0;
}

