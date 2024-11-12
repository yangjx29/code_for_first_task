int main () {
    int RzaSbg6 (int nSPvkl);
    int count (int nSPvkl);
    int nSPvkl [6];
    {
        int xdZtJMPzvFya;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xdZtJMPzvFya = 0;
        while (5 >= xdZtJMPzvFya) {
            scanf ("%d", &nSPvkl[xdZtJMPzvFya]);
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
            xdZtJMPzvFya++;
        };
    }
    {
        int XPGpdLlEKhN;
        XPGpdLlEKhN = 0;
        while (5 >= XPGpdLlEKhN) {
            printf ("%d\n", RzaSbg6 (nSPvkl[XPGpdLlEKhN]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            XPGpdLlEKhN++;
        };
    };
}

int count (int nSPvkl) {
    int xdZtJMPzvFya;
    int yksPXyKAR = 1;
    {
        xdZtJMPzvFya = 0;
        while (xdZtJMPzvFya <= nSPvkl - 1) {
            yksPXyKAR = yksPXyKAR * 10;
            xdZtJMPzvFya++;
        };
    }
    return yksPXyKAR;
}

int RzaSbg6 (int nSPvkl) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (nSPvkl > 0) {
        int XPGpdLlEKhN;
        int Ox7jKazFO;
        Ox7jKazFO = nSPvkl;
        int xdZtJMPzvFya = 1;
        int *l9Cx2T4mRV = (int *) malloc (xdZtJMPzvFya * sizeof (int));
        int fC4F2zuGoSt;
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
        int N1O9engXmWT;
        fC4F2zuGoSt = 0;
        while (Ox7jKazFO / 10 >= 1) {
            Ox7jKazFO = Ox7jKazFO / 10;
            xdZtJMPzvFya++;
        }
        {
            XPGpdLlEKhN = 0;
            while (XPGpdLlEKhN <= xdZtJMPzvFya - 1) {
                l9Cx2T4mRV[XPGpdLlEKhN] = nSPvkl - ((int) (nSPvkl / 10)) * 10;
                nSPvkl = nSPvkl / 10;
                XPGpdLlEKhN++;
            };
        }
        {
            N1O9engXmWT = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (N1O9engXmWT <= xdZtJMPzvFya - 1) {
                fC4F2zuGoSt = fC4F2zuGoSt + l9Cx2T4mRV[N1O9engXmWT] * count (xdZtJMPzvFya - N1O9engXmWT -1);
                N1O9engXmWT = N1O9engXmWT +1;
            };
        }
        return fC4F2zuGoSt;
    }
    else if (nSPvkl == 0) {
        int A3N92X = 0;
        return A3N92X;
    }
    else {
        int N1O9engXmWT, fC4F2zuGoSt = 0;
        int xdZtJMPzvFya = 1, VUdEcCy0L;
        int Ox7jKazFO = VUdEcCy0L = -nSPvkl;
        int *l9Cx2T4mRV = (int *) malloc (xdZtJMPzvFya * sizeof (int));
        int XPGpdLlEKhN;
        while (Ox7jKazFO / 10 >= 1) {
            xdZtJMPzvFya++;
            Ox7jKazFO = Ox7jKazFO / 10;
        }
        {
            XPGpdLlEKhN = 0;
            while (XPGpdLlEKhN <= xdZtJMPzvFya - 1) {
                l9Cx2T4mRV[XPGpdLlEKhN] = VUdEcCy0L -((int) (VUdEcCy0L / 10)) * 10;
                XPGpdLlEKhN++;
                VUdEcCy0L = VUdEcCy0L / 10;
            };
        }
        {
            N1O9engXmWT = 0;
            while (N1O9engXmWT <= xdZtJMPzvFya - 1) {
                fC4F2zuGoSt = fC4F2zuGoSt + l9Cx2T4mRV[N1O9engXmWT] * count (xdZtJMPzvFya - N1O9engXmWT -1);
                N1O9engXmWT++;
            };
        }
        return -fC4F2zuGoSt;
    };
}

