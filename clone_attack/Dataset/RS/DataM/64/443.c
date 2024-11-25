int main () {
    double  result;
    int kT63mCuygD [(39 - 29)] [3];
    int suVX5hbH2;
    int sKFZ6Oo2;
    int cNU5tQk;
    int xTvBoVHP;
    suVX5hbH2 = (353 - 353);
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
    struct   Distance {
        int Nh5g1oFYyUl [(340 - 337)];
        int p2 [(351 - 348)];
        double  length;
    }
    xnwZsta [50];
    struct   Distance {
        int Nh5g1oFYyUl [(340 - 337)];
        int p2 [(351 - 348)];
        double  length;
    }
    tr0SEVXd;
    cin >> sKFZ6Oo2;
    {
        cNU5tQk = 205 - 205;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sKFZ6Oo2 > cNU5tQk) {
            cin >> kT63mCuygD[cNU5tQk][(491 - 491)] >> kT63mCuygD[cNU5tQk][(870 - 869)] >> kT63mCuygD[cNU5tQk][(273 - 271)];
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
            cNU5tQk = cNU5tQk + 1;
        };
    }
    for (cNU5tQk = 0; cNU5tQk < sKFZ6Oo2 - (643 - 642); cNU5tQk++)
        for (xTvBoVHP = cNU5tQk + (16 - 15); sKFZ6Oo2 > xTvBoVHP; xTvBoVHP = xTvBoVHP + 1) {
            xnwZsta[suVX5hbH2].Nh5g1oFYyUl[0] = kT63mCuygD[cNU5tQk][0];
            xnwZsta[suVX5hbH2].Nh5g1oFYyUl[(814 - 813)] = kT63mCuygD[cNU5tQk][1];
            xnwZsta[suVX5hbH2].Nh5g1oFYyUl[(484 - 482)] = kT63mCuygD[cNU5tQk][(858 - 856)];
            xnwZsta[suVX5hbH2].p2[0] = kT63mCuygD[xTvBoVHP][0];
            xnwZsta[suVX5hbH2].p2[1] = kT63mCuygD[xTvBoVHP][1];
            xnwZsta[suVX5hbH2].p2[(676 - 674)] = kT63mCuygD[xTvBoVHP][(68 - 66)];
            result = (kT63mCuygD[cNU5tQk][0] - kT63mCuygD[xTvBoVHP][0]) * (kT63mCuygD[cNU5tQk][0] - kT63mCuygD[xTvBoVHP][0]) + (kT63mCuygD[cNU5tQk][1] - kT63mCuygD[xTvBoVHP][1]) * (kT63mCuygD[cNU5tQk][1] - kT63mCuygD[xTvBoVHP][1]) + (kT63mCuygD[cNU5tQk][(929 - 927)] - kT63mCuygD[xTvBoVHP][2]) * (kT63mCuygD[cNU5tQk][2] - kT63mCuygD[xTvBoVHP][2]);
            xnwZsta[suVX5hbH2].length = sqrt (result * 1.0);
            suVX5hbH2++;
        }
    {
        cNU5tQk = 0;
        while (cNU5tQk < suVX5hbH2 - 1) {
            {
                xTvBoVHP = 0;
                while (xTvBoVHP < suVX5hbH2 - 1 - cNU5tQk) {
                    if (xnwZsta[xTvBoVHP].length < xnwZsta[xTvBoVHP + 1].length) {
                        tr0SEVXd = xnwZsta[xTvBoVHP];
                        xnwZsta[xTvBoVHP] = xnwZsta[xTvBoVHP + 1];
                        xnwZsta[xTvBoVHP + 1] = tr0SEVXd;
                    }
                    xTvBoVHP++;
                };
            }
            cNU5tQk++;
        };
    }
    {
        cNU5tQk = 0;
        while (cNU5tQk < suVX5hbH2) {
            cout << "(" << xnwZsta[cNU5tQk].Nh5g1oFYyUl[0] << "," << xnwZsta[cNU5tQk].Nh5g1oFYyUl[1] << "," << xnwZsta[cNU5tQk].Nh5g1oFYyUl[2] << ")" << "-" << "(" << xnwZsta[cNU5tQk].p2[0] << "," << xnwZsta[cNU5tQk].p2[1] << "," << xnwZsta[cNU5tQk].p2[2] << ")" << "=" << fixed << setprecision (2) << xnwZsta[cNU5tQk].length << endl;
            cNU5tQk++;
        };
    }
    return 0;
}

