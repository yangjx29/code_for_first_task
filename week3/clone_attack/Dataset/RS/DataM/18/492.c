int GIBgVJ7nXCL [(119 - 19)] [(402 - 302)];

int CgU4Ry (int GIBgVJ7nXCL, int luwcpCIB6) {
    if (luwcpCIB6 <= GIBgVJ7nXCL)
        return luwcpCIB6;
    else
        return GIBgVJ7nXCL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int Sum (int zP3Xr2e1j) {
    int XylPcXtogN;
    XylPcXtogN = GIBgVJ7nXCL[(604 - 603)][(515 - 514)];
    for (int jIRgaZKyC2o = (803 - 803);
    zP3Xr2e1j > jIRgaZKyC2o; jIRgaZKyC2o = jIRgaZKyC2o + 1) {
        int min;
        min = GIBgVJ7nXCL[jIRgaZKyC2o][(485 - 485)];
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
        for (int Qcbt17qClB5L = (467 - 466);
        zP3Xr2e1j > Qcbt17qClB5L; Qcbt17qClB5L = Qcbt17qClB5L +1)
            min = CgU4Ry (min, GIBgVJ7nXCL[jIRgaZKyC2o][Qcbt17qClB5L]);
        for (int Qcbt17qClB5L = (92 - 92);
        zP3Xr2e1j > Qcbt17qClB5L; Qcbt17qClB5L++)
            GIBgVJ7nXCL[jIRgaZKyC2o][Qcbt17qClB5L] -= min;
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
    {
        int Qcbt17qClB5L;
        Qcbt17qClB5L = (23 - 23);
        while (Qcbt17qClB5L < zP3Xr2e1j) {
            int min = GIBgVJ7nXCL[(239 - 239)][Qcbt17qClB5L];
            for (int jIRgaZKyC2o = (442 - 442);
            jIRgaZKyC2o < zP3Xr2e1j; jIRgaZKyC2o++)
                min = CgU4Ry (min, GIBgVJ7nXCL[jIRgaZKyC2o][Qcbt17qClB5L]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (int jIRgaZKyC2o = (395 - 395);
            jIRgaZKyC2o < zP3Xr2e1j; jIRgaZKyC2o++)
                GIBgVJ7nXCL[jIRgaZKyC2o][Qcbt17qClB5L] -= min;
            Qcbt17qClB5L++;
        };
    }
    if (!((265 - 263) != zP3Xr2e1j))
        return GIBgVJ7nXCL[(947 - 946)][(428 - 427)];
    for (int jIRgaZKyC2o = (88 - 87);
    jIRgaZKyC2o < zP3Xr2e1j - (293 - 292); jIRgaZKyC2o++) {
        GIBgVJ7nXCL[(509 - 509)][jIRgaZKyC2o] = GIBgVJ7nXCL[(263 - 263)][jIRgaZKyC2o + 1];
        GIBgVJ7nXCL[jIRgaZKyC2o][0] = GIBgVJ7nXCL[jIRgaZKyC2o + 1][0];
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
        for (int Qcbt17qClB5L = 1;
        zP3Xr2e1j - 1 > Qcbt17qClB5L; Qcbt17qClB5L++)
            GIBgVJ7nXCL[jIRgaZKyC2o][Qcbt17qClB5L] = GIBgVJ7nXCL[jIRgaZKyC2o + 1][Qcbt17qClB5L +1];
    }
    return XylPcXtogN +Sum(zP3Xr2e1j - 1);
}

int main () {
    int zP3Xr2e1j;
    cin >> zP3Xr2e1j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        int jIRgaZKyC2o = 0;
        while (jIRgaZKyC2o < zP3Xr2e1j) {
            jIRgaZKyC2o++;
            for (int Qcbt17qClB5L = 0;
            Qcbt17qClB5L < zP3Xr2e1j; Qcbt17qClB5L++) {
                for (int XylPcXtogN = 0;
                XylPcXtogN < zP3Xr2e1j; XylPcXtogN++)
                    cin >> GIBgVJ7nXCL[Qcbt17qClB5L][XylPcXtogN];
            }
            cout << Sum (zP3Xr2e1j) << endl;
        };
    }
    return 0;
}

