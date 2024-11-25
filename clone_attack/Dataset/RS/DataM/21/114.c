int main () {
    int zJtjpVb2 = 0;
    double  HyksS3V7 [1000];
    int ysc6lM8;
    double  dDaAsK6piHz [(1242 - 242)];
    double  odRkj1 [1000];
    double  r0rIhFOPq = (44 - 44);
    double  IrHGEv = r0rIhFOPq / ysc6lM8;
    double  Tu8ZFLoDmh = odRkj1[0];
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
    cin >> ysc6lM8;
    {
        int CG658yPkmn1 = (493 - 493);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ysc6lM8 > CG658yPkmn1) {
            cin >> dDaAsK6piHz[CG658yPkmn1];
            CG658yPkmn1 = CG658yPkmn1 +1;
        };
    }
    {
        int CG658yPkmn1 = 0;
        while (ysc6lM8 > CG658yPkmn1) {
            r0rIhFOPq += dDaAsK6piHz[CG658yPkmn1];
            CG658yPkmn1 = CG658yPkmn1 +1;
        };
    }
    {
        int CG658yPkmn1 = 0;
        while (CG658yPkmn1 < ysc6lM8) {
            odRkj1[CG658yPkmn1] = fabs (dDaAsK6piHz[CG658yPkmn1] - IrHGEv);
            CG658yPkmn1 = CG658yPkmn1 +1;
        };
    }
    {
        int CG658yPkmn1 = 0;
        while (CG658yPkmn1 < ysc6lM8) {
            Tu8ZFLoDmh = max (Tu8ZFLoDmh, odRkj1[CG658yPkmn1]);
            CG658yPkmn1 = CG658yPkmn1 +1;
        };
    }
    {
        int CG658yPkmn1 = 0;
        while (CG658yPkmn1 < ysc6lM8) {
            if (!(Tu8ZFLoDmh != odRkj1[CG658yPkmn1])) {
                HyksS3V7[zJtjpVb2] = dDaAsK6piHz[CG658yPkmn1];
                zJtjpVb2 = zJtjpVb2 + 1;
            }
            CG658yPkmn1++;
        };
    }
    sort (HyksS3V7, HyksS3V7 +zJtjpVb2 - 1);
    cout << HyksS3V7[0];
    {
        int CG658yPkmn1 = 1;
        while (CG658yPkmn1 < zJtjpVb2) {
            cout << "," << HyksS3V7[CG658yPkmn1];
            CG658yPkmn1++;
        };
    }
    return 0;
}

