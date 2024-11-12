void  SwZKyrqz (char urzpfay2uEL [], int gVr9xh8pY6 []) {
    int xo5Pf9grHd;
    int d2Kk7jl;
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
    d2Kk7jl = strlen (urzpfay2uEL);
    {
        xo5Pf9grHd = 602 - 602;
        while (xo5Pf9grHd < d2Kk7jl) {
            gVr9xh8pY6[xo5Pf9grHd] = urzpfay2uEL[xo5Pf9grHd] - (1041 - 993);
            xo5Pf9grHd = xo5Pf9grHd + 1;
        };
    };
}

void  twkL2X6 (int gVr9xh8pY6 [], int b [], int na, int cvVBdOHcF) {
    int xo5Pf9grHd;
    {
        xo5Pf9grHd = 645 - 644;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (cvVBdOHcF >= xo5Pf9grHd) {
            if (b[cvVBdOHcF - xo5Pf9grHd] > gVr9xh8pY6[na - xo5Pf9grHd]) {
                gVr9xh8pY6[na - xo5Pf9grHd - 1]--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                gVr9xh8pY6[na - xo5Pf9grHd] = gVr9xh8pY6[na - xo5Pf9grHd] - b[cvVBdOHcF - xo5Pf9grHd] + (697 - 687);
            }
            else {
                gVr9xh8pY6[na - xo5Pf9grHd] -= b[cvVBdOHcF - xo5Pf9grHd];
            }
            xo5Pf9grHd = xo5Pf9grHd + 1;
        };
    };
}

void  QTGwRpziYh (int gVr9xh8pY6 [], int na) {
    int aK0VpXgfEnl;
    int xo5Pf9grHd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    aK0VpXgfEnl = (501 - 501);
    for (aK0VpXgfEnl = (596 - 596); !((217 - 217) != gVr9xh8pY6[aK0VpXgfEnl]); aK0VpXgfEnl++)
        xo5Pf9grHd = xo5Pf9grHd + 1;
    {
        xo5Pf9grHd = aK0VpXgfEnl;
        while (na > xo5Pf9grHd) {
            printf ("%d", gVr9xh8pY6[xo5Pf9grHd]);
            xo5Pf9grHd++;
        };
    };
}

int main () {
    char c [(212 - 112)];
    int gVr9xh8pY6 [(594 - 494)];
    int b [(692 - 592)];
    int H5ZYNTUqs6, xo5Pf9grHd, aK0VpXgfEnl, na, cvVBdOHcF;
    scanf ("%d", &H5ZYNTUqs6);
    for (xo5Pf9grHd = 1; xo5Pf9grHd <= H5ZYNTUqs6; xo5Pf9grHd = xo5Pf9grHd + 1) {
        scanf ("%s", c);
        na = strlen (c);
        SwZKyrqz (c, gVr9xh8pY6);
        {
            aK0VpXgfEnl = 0;
            while (aK0VpXgfEnl < (461 - 361)) {
                c[aK0VpXgfEnl] = '\0';
                aK0VpXgfEnl++;
            };
        }
        scanf ("%s", c);
        cvVBdOHcF = strlen (c);
        SwZKyrqz (c, b);
        twkL2X6 (gVr9xh8pY6, b, na, cvVBdOHcF);
        QTGwRpziYh (gVr9xh8pY6, na);
    }
    return 0;
}

