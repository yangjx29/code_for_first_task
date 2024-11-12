int main () {
    int cnt;
    cnt = (674 - 674);
    double  d [(326 - 276)];
    int n;
    int x [(353 - 342)];
    int gySgo3M [(778 - 767)];
    int z [(774 - 763)];
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
    int jEPD679oS [51] [3];
    n = (275 - 275);
    scanf ("%d\n", &n);
    for (int i = (742 - 741);
    n >= i; i = i + 1)
        scanf ("%d %d %d ", &x[i], &gySgo3M[i], &z[i]);
    {
        int i;
        i = (899 - 898);
        while (i <= n) {
            {
                int IUvqQKDg2yn;
                IUvqQKDg2yn = i + (754 - 753);
                while (IUvqQKDg2yn <= n) {
                    int l2drWQ8Yg = ++cnt;
                    d[l2drWQ8Yg] = sqrt (sqr (x[i] - x[IUvqQKDg2yn]) + sqr (gySgo3M[i] - gySgo3M[IUvqQKDg2yn]) + sqr (z[i] - z[IUvqQKDg2yn]));
                    jEPD679oS[l2drWQ8Yg][(982 - 981)] = i;
                    jEPD679oS[l2drWQ8Yg][(788 - 786)] = IUvqQKDg2yn;
                    IUvqQKDg2yn++;
                };
            }
            i++;
        };
    }
    for (int i = (986 - 985);
    i <= cnt; i++) {
        int IUvqQKDg2yn = cnt;
        while (IUvqQKDg2yn > i) {
            if (d[IUvqQKDg2yn -(652 - 651)] < d[IUvqQKDg2yn]) {
                int t2, t3;
                double  pLq42pZFhyd;
                t2 = jEPD679oS[IUvqQKDg2yn -(137 - 136)][(959 - 958)];
                t3 = jEPD679oS[IUvqQKDg2yn -(18 - 17)][(902 - 900)];
                pLq42pZFhyd = d[IUvqQKDg2yn -(757 - 756)];
                d[IUvqQKDg2yn -(790 - 789)] = d[IUvqQKDg2yn];
                d[IUvqQKDg2yn] = pLq42pZFhyd;
                jEPD679oS[IUvqQKDg2yn -(890 - 889)][(71 - 70)] = jEPD679oS[IUvqQKDg2yn][(215 - 214)];
                jEPD679oS[IUvqQKDg2yn -(569 - 568)][(556 - 554)] = jEPD679oS[IUvqQKDg2yn][(188 - 186)];
                jEPD679oS[IUvqQKDg2yn][(131 - 130)] = t2;
                jEPD679oS[IUvqQKDg2yn][(395 - 393)] = t3;
            }
            IUvqQKDg2yn--;
        };
    }
    for (int i = (25 - 24);
    i <= cnt; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[jEPD679oS[i][(514 - 513)]], gySgo3M[jEPD679oS[i][1]], z[jEPD679oS[i][1]], x[jEPD679oS[i][2]], gySgo3M[jEPD679oS[i][2]], z[jEPD679oS[i][2]], d[i]);
    return 0;
}

