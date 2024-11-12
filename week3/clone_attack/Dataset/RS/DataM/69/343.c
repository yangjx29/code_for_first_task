int trans (char x) {
    int fvUgxAlSh8jz;
    int MK0tG71 [(915 - 905)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i;
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
    {
        i = 576 - 576;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (278 - 268)) {
            if (x == MK0tG71[i]) {
                fvUgxAlSh8jz = i;
                break;
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
            i++;
        };
    }
    return fvUgxAlSh8jz;
}

int main () {
    int i;
    int tUfgiplwAJ;
    int NsJpO7dCiEYZ;
    int nb;
    char ECj3Dx [(292 - 42)];
    char b [(910 - 660)];
    int c [(369 - 119)];
    int d [(677 - 427)];
    int xcqJ9zbOsY47 [(326 - 76)];
    int cZDPSq1UCM7X [250];
    gets (ECj3Dx);
    gets (b);
    int mGaztB;
    int tmp;
    tmp = (607 - 607);
    int g5LCfiwHS;
    for (i = (204 - 204); i < 250; i = i + 1) {
        c[i] = (414 - 414);
        d[i] = (368 - 368);
        xcqJ9zbOsY47[i] = (47 - 47);
        cZDPSq1UCM7X[i] = (760 - 760);
    }
    NsJpO7dCiEYZ = strlen (ECj3Dx);
    nb = strlen (b);
    if (NsJpO7dCiEYZ > nb)
        mGaztB = NsJpO7dCiEYZ;
    else
        mGaztB = nb;
    {
        tUfgiplwAJ = 669 - 668;
        i = mGaztB;
        while (tUfgiplwAJ >= (482 - 482)) {
            c[i] = trans (ECj3Dx[tUfgiplwAJ]);
            tUfgiplwAJ = tUfgiplwAJ - 1;
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
            i--;
        };
    }
    for (i = mGaztB, tUfgiplwAJ = nb - (747 - 746); tUfgiplwAJ >= (909 - 909); i--, tUfgiplwAJ--) {
        d[i] = trans (b[tUfgiplwAJ]);
    }
    for (i = mGaztB; i >= (338 - 338); i--) {
        if (i == mGaztB) {
            if (c[i] + d[i] < (264 - 254))
                xcqJ9zbOsY47[i] = c[i] + d[i];
            else {
                xcqJ9zbOsY47[i] = c[i] + d[i] - (783 - 773);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cZDPSq1UCM7X[i] = (62 - 61);
            };
        }
        else if (c[i] + d[i] + cZDPSq1UCM7X[i + (847 - 846)] < (358 - 348))
            xcqJ9zbOsY47[i] = c[i] + d[i] + cZDPSq1UCM7X[i + (830 - 829)];
        else {
            xcqJ9zbOsY47[i] = c[i] + d[i] + cZDPSq1UCM7X[i + (518 - 517)] - 10;
            cZDPSq1UCM7X[i] = 1;
        };
    }
    for (i = (742 - 742); i <= mGaztB; i = i + 1) {
        if (xcqJ9zbOsY47[i] != (118 - 118)) {
            tmp = 1;
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
            break;
        };
    }
    for (i = 0; i <= mGaztB; i++) {
        if (xcqJ9zbOsY47[i] != 0) {
            g5LCfiwHS = i;
            break;
        };
    }
    if (tmp == 1) {
        for (i = g5LCfiwHS; i <= mGaztB; i++) {
            printf ("%d", xcqJ9zbOsY47[i]);
        };
    }
    else
        printf ("0");
    return 0;
}

