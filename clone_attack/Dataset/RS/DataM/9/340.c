int main () {
    int s;
    int XoHxKJcFIME;
    int k;
    int bsJIrKTodwg;
    int G0gTyrP;
    s = 0;
    XoHxKJcFIME = 0;
    k = 0;
    struct   CqF1zMB {
        int fcbFofB;
        char rvGstfJTH [(563 - 553)];
    }
    CqF1zMB [100];
    struct   CqF1zMB {
        int fcbFofB;
        char rvGstfJTH [(563 - 553)];
    }
    JcMXwymP26 [100];
    struct   CqF1zMB {
        int fcbFofB;
        char rvGstfJTH [(563 - 553)];
    }
    iWkqAKd [100];
    struct   CqF1zMB {
        int fcbFofB;
        char rvGstfJTH [(563 - 553)];
    }
    vNriRn;
    cin >> bsJIrKTodwg;
    {
        G0gTyrP = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bsJIrKTodwg > G0gTyrP) {
            cin >> CqF1zMB[G0gTyrP].rvGstfJTH >> CqF1zMB[G0gTyrP].fcbFofB;
            if (60 <= CqF1zMB[G0gTyrP].fcbFofB) {
                JcMXwymP26[k] = CqF1zMB[G0gTyrP];
                k = k + 1;
            }
            else {
                iWkqAKd[s] = CqF1zMB[G0gTyrP];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s++;
            }
            G0gTyrP = G0gTyrP +1;
        };
    }
    {
        G0gTyrP = 417 - 416;
        while (0 < G0gTyrP) {
            {
                XoHxKJcFIME = 0;
                while (G0gTyrP > XoHxKJcFIME) {
                    if (JcMXwymP26[XoHxKJcFIME].fcbFofB < JcMXwymP26[XoHxKJcFIME +1].fcbFofB) {
                        vNriRn = JcMXwymP26[XoHxKJcFIME];
                        JcMXwymP26[XoHxKJcFIME] = JcMXwymP26[XoHxKJcFIME +1];
                        JcMXwymP26[XoHxKJcFIME +1] = vNriRn;
                    }
                    XoHxKJcFIME++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            G0gTyrP--;
        };
    }
    {
        G0gTyrP = 0;
        while (G0gTyrP < k) {
            cout << JcMXwymP26[G0gTyrP].rvGstfJTH << endl;
            G0gTyrP++;
        };
    }
    {
        G0gTyrP = 0;
        while (G0gTyrP < s) {
            cout << iWkqAKd[G0gTyrP].rvGstfJTH << endl;
            G0gTyrP++;
        };
    }
    return 0;
}

