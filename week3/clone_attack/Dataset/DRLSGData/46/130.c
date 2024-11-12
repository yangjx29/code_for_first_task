int AyZguW0CkYUR [(954 - 854)] [100];

int main () {
    int wW97A4G, l74HsAbQx60, kAcZFNq8 = 0, xER6UDC2hz;
    int zFcWnBq, PTi9BHm0L;
    int bxCNg1d2 = 0, Ur6lY9G7n = PTi9BHm0L -1, jo7YaRE2q = 0, fjO2RQLDZg8 = zFcWnBq - 1;
    cin >> zFcWnBq >> PTi9BHm0L;
    {
        int jo7YaRE2q = 0;
        while (zFcWnBq > jo7YaRE2q) {
            {
                int fjO2RQLDZg8 = 0;
                while (fjO2RQLDZg8 < PTi9BHm0L) {
                    cin >> AyZguW0CkYUR[jo7YaRE2q][fjO2RQLDZg8];
                    fjO2RQLDZg8++;
                }
            }
            jo7YaRE2q++;
        }
    }
    while ((xER6UDC2hz = PTi9BHm0L *zFcWnBq) > kAcZFNq8) {
        {
            wW97A4G = bxCNg1d2;
            while (Ur6lY9G7n >= wW97A4G) {
                kAcZFNq8++;
                if (!(xER6UDC2hz != kAcZFNq8))
                    return 0;
                cout << AyZguW0CkYUR[jo7YaRE2q][wW97A4G] << endl;
                wW97A4G++;
            }
        }
        jo7YaRE2q++;
        for (l74HsAbQx60 = jo7YaRE2q; fjO2RQLDZg8 >= l74HsAbQx60; l74HsAbQx60++) {
            kAcZFNq8++;
            if (!(xER6UDC2hz != kAcZFNq8))
                return 0;
            cout << AyZguW0CkYUR[l74HsAbQx60][Ur6lY9G7n] << endl;
        }
        Ur6lY9G7n--;
        {
            wW97A4G = Ur6lY9G7n;
            while (wW97A4G >= bxCNg1d2) {
                kAcZFNq8++;
                if (kAcZFNq8 == xER6UDC2hz)
                    return 0;
                cout << AyZguW0CkYUR[fjO2RQLDZg8][wW97A4G] << endl;
                wW97A4G--;
            }
        }
        fjO2RQLDZg8--;
        for (l74HsAbQx60 = fjO2RQLDZg8; l74HsAbQx60 >= jo7YaRE2q; l74HsAbQx60--) {
            kAcZFNq8++;
            if (kAcZFNq8 == xER6UDC2hz)
                return 0;
            cout << AyZguW0CkYUR[l74HsAbQx60][bxCNg1d2] << endl;
        }
        bxCNg1d2++;
    }
    return 0;
}

