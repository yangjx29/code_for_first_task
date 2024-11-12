int main () {
    int xNzn2O;
    int iYlmSyZ;
    int jtXGnCb3AQk;
    int z [100];
    int i54Tpe3r6O [100];
    int zpgBXd;
    int gCJPqG;
    int emQqBfiZcXb;
    int nZ6d5mka;
    int XjabUcuy;
    int uBcuwWXGF [100];
    int ORd7hjtrwv9 [100];
    int MwfSTaMO0 [100];
    double  ILHK5y [450];
    double  XrhtpM2HZDm6;
    scanf ("%d", &xNzn2O);
    for (emQqBfiZcXb = 0; emQqBfiZcXb < xNzn2O; emQqBfiZcXb = emQqBfiZcXb + 1) {
        scanf ("%d%d%d", &uBcuwWXGF[emQqBfiZcXb], &i54Tpe3r6O[emQqBfiZcXb], &z[emQqBfiZcXb]);
    }
    iYlmSyZ = 0;
    for (jtXGnCb3AQk = 0; jtXGnCb3AQk < xNzn2O - 1; jtXGnCb3AQk = jtXGnCb3AQk + 1) {
        for (emQqBfiZcXb = jtXGnCb3AQk + 1; emQqBfiZcXb < xNzn2O; emQqBfiZcXb++) {
            ILHK5y[iYlmSyZ] = 1.0 * pow ((uBcuwWXGF[jtXGnCb3AQk] - uBcuwWXGF[emQqBfiZcXb]), 2) + pow ((i54Tpe3r6O[jtXGnCb3AQk] - i54Tpe3r6O[emQqBfiZcXb]), 2) + pow ((z[jtXGnCb3AQk] - z[emQqBfiZcXb]), 2);
            ILHK5y[iYlmSyZ] = sqrt (ILHK5y[iYlmSyZ]);
            ORd7hjtrwv9[iYlmSyZ] = jtXGnCb3AQk;
            MwfSTaMO0[iYlmSyZ] = emQqBfiZcXb;
            iYlmSyZ = iYlmSyZ + 1;
        }
    }
    for (gCJPqG = 1; iYlmSyZ >= gCJPqG; gCJPqG = gCJPqG + 1) {
        for (nZ6d5mka = 0; iYlmSyZ - gCJPqG > nZ6d5mka; nZ6d5mka = nZ6d5mka + 1) {
            if (ILHK5y[nZ6d5mka] < ILHK5y[nZ6d5mka + 1]) {
                XrhtpM2HZDm6 = ILHK5y[nZ6d5mka + 1];
                ILHK5y[nZ6d5mka + 1] = ILHK5y[nZ6d5mka];
                ILHK5y[nZ6d5mka] = XrhtpM2HZDm6;
                XjabUcuy = ORd7hjtrwv9[nZ6d5mka + 1];
                ORd7hjtrwv9[nZ6d5mka + 1] = ORd7hjtrwv9[nZ6d5mka];
                ORd7hjtrwv9[nZ6d5mka] = XjabUcuy;
                zpgBXd = MwfSTaMO0[nZ6d5mka + 1];
                MwfSTaMO0[nZ6d5mka + 1] = MwfSTaMO0[nZ6d5mka];
                MwfSTaMO0[nZ6d5mka] = zpgBXd;
            }
        }
    }
    for (nZ6d5mka = 0; nZ6d5mka <= iYlmSyZ - 1; nZ6d5mka = nZ6d5mka + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", uBcuwWXGF[ORd7hjtrwv9[nZ6d5mka]], i54Tpe3r6O[ORd7hjtrwv9[nZ6d5mka]], z[ORd7hjtrwv9[nZ6d5mka]], uBcuwWXGF[MwfSTaMO0[nZ6d5mka]], i54Tpe3r6O[MwfSTaMO0[nZ6d5mka]], z[MwfSTaMO0[nZ6d5mka]], ILHK5y[nZ6d5mka]);
    }
    return 0;
}

