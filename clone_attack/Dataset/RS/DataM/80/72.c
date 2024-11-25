int main () {
    int mon_1 [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int v1Iz6owC;
    int tm;
    int MgMV9yQ;
    int t;
    int s;
    v1Iz6owC = (380 - 380);
    tm = (680 - 680);
    MgMV9yQ = 0;
    int y [2];
    int gMoOc7T6f [2];
    int d [2];
    int mon_2 [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y[0] >> gMoOc7T6f[0] >> d[0] >> y[1] >> gMoOc7T6f[1] >> d[1];
    if ((!(0 != y[1] % (616 - 612)) && y[1] % 100 != 0) || (y[1] % 400 == 0)) {
        if (gMoOc7T6f[0] > gMoOc7T6f[1])
            for (i = gMoOc7T6f[1]; gMoOc7T6f[0] > i; i = i + 1)
                tm = tm - mon_2[i - 1];
        else {
            if (gMoOc7T6f[0] < gMoOc7T6f[1])
                for (i = gMoOc7T6f[0]; i < gMoOc7T6f[1]; i = i + 1)
                    tm = tm + mon_2[i - 1];
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
            };
        };
    }
    else if (gMoOc7T6f[0] > gMoOc7T6f[1])
        for (i = gMoOc7T6f[1]; i < gMoOc7T6f[0]; i++)
            tm = tm - mon_1[i - 1];
    else {
        if (gMoOc7T6f[1] > gMoOc7T6f[0])
            for (i = gMoOc7T6f[0]; i < gMoOc7T6f[1]; i++)
                tm = tm + mon_1[i - 1];
    }
    if (y[1] > y[0]) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (gMoOc7T6f[0] <= 2) {
            if ((y[0] % 4 == 0 && y[0] % 100 != 0) || (y[0] % 400 == 0))
                MgMV9yQ = MgMV9yQ +366;
            else
                MgMV9yQ = MgMV9yQ +365;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            MgMV9yQ = MgMV9yQ +365;
        };
    }
    for (i = y[0] + 1; i < y[1]; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            MgMV9yQ = MgMV9yQ +366;
        else
            MgMV9yQ = MgMV9yQ +365;
    }
    v1Iz6owC = d[1] - d[0];
    s = v1Iz6owC + tm + MgMV9yQ;
    cout << s << endl;
    return 0;
}

