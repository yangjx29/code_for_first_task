void  eVfygM87FC (int, int);
int cf3dNzpy = 0, OpzFosvWE = 1;

int main () {
    int OGh7CS, Zi41eoWHys, LTMjg7LkXFw, Gqs7b2YgXFD;
    cin >> OGh7CS;
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
        LTMjg7LkXFw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LTMjg7LkXFw < OGh7CS) {
            LTMjg7LkXFw = LTMjg7LkXFw +1;
            OpzFosvWE = 1;
            cin >> Zi41eoWHys;
            for (Gqs7b2YgXFD = 2; (int) sqrt ((float) Zi41eoWHys) >= Gqs7b2YgXFD; Gqs7b2YgXFD++) {
                if (!(0 != Zi41eoWHys % Gqs7b2YgXFD)) {
                    cf3dNzpy = 0;
                    eVfygM87FC (Zi41eoWHys / Gqs7b2YgXFD, Gqs7b2YgXFD);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    OpzFosvWE = OpzFosvWE +cf3dNzpy;
                };
            }
            cout << OpzFosvWE << endl;
        };
    }
    return 0;
}

void  eVfygM87FC (int Tdio20, int PJxhTlMKCDN) {
    if (Tdio20 == 1)
        cf3dNzpy++;
    while (PJxhTlMKCDN <= Tdio20) {
        if (Tdio20 % PJxhTlMKCDN == 0)
            eVfygM87FC (Tdio20 / PJxhTlMKCDN, PJxhTlMKCDN);
        PJxhTlMKCDN = PJxhTlMKCDN +1;
    }
    return;
}

