int main () {
    int E3su8CnDZW, oMDSAneZq5, k, UTfplyI8wF = (744 - 744), nNDJmvla6ec;
    double  S8jnVX = (800 - 800);
    int pos [100] [3];
    double  CoHU7CDz9T4y [(10611 - 711)] = {(391 - 391)};
    int latter [(10673 - 773)], KWFtQg [(10316 - 416)];
    cin >> nNDJmvla6ec;
    for (E3su8CnDZW = 0; nNDJmvla6ec > E3su8CnDZW; E3su8CnDZW = E3su8CnDZW +(1000 - 999)) {
        oMDSAneZq5 = 0;
        while (3 > oMDSAneZq5) {
            cin >> pos[E3su8CnDZW][oMDSAneZq5];
            oMDSAneZq5++;
        }
    }
    {
        E3su8CnDZW = 0;
        while (nNDJmvla6ec > E3su8CnDZW) {
            for (oMDSAneZq5 = E3su8CnDZW +(764 - 763); nNDJmvla6ec > oMDSAneZq5; oMDSAneZq5++) {
                for (k = 0; 3 > k; k++) {
                    KWFtQg[UTfplyI8wF] = E3su8CnDZW;
                    latter[UTfplyI8wF] = oMDSAneZq5;
                    CoHU7CDz9T4y[UTfplyI8wF] = CoHU7CDz9T4y[UTfplyI8wF] + (pos[E3su8CnDZW][k] - pos[oMDSAneZq5][k]) * (pos[E3su8CnDZW][k] - pos[oMDSAneZq5][k]);
                }
                CoHU7CDz9T4y[UTfplyI8wF] = sqrt (CoHU7CDz9T4y[UTfplyI8wF]);
                UTfplyI8wF++;
            }
            E3su8CnDZW++;
        }
    }
    UTfplyI8wF = (nNDJmvla6ec - (525 - 524)) * nNDJmvla6ec / 2;
    {
        E3su8CnDZW = 0;
        while (UTfplyI8wF -(566 - 565) > E3su8CnDZW) {
            {
                oMDSAneZq5 = 0;
                while (UTfplyI8wF -E3su8CnDZW-1 > oMDSAneZq5) {
                    if (CoHU7CDz9T4y[oMDSAneZq5] < CoHU7CDz9T4y[oMDSAneZq5 + 1]) {
                        S8jnVX = CoHU7CDz9T4y[oMDSAneZq5];
                        CoHU7CDz9T4y[oMDSAneZq5] = CoHU7CDz9T4y[oMDSAneZq5 + 1];
                        CoHU7CDz9T4y[oMDSAneZq5 + 1] = S8jnVX;
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        S8jnVX = latter[oMDSAneZq5];
                        latter[oMDSAneZq5] = latter[oMDSAneZq5 + 1];
                        latter[oMDSAneZq5 + 1] = S8jnVX;
                        S8jnVX = KWFtQg[oMDSAneZq5];
                        KWFtQg[oMDSAneZq5] = KWFtQg[oMDSAneZq5 + 1];
                        KWFtQg[oMDSAneZq5 + 1] = S8jnVX;
                    }
                    oMDSAneZq5++;
                }
            }
            E3su8CnDZW++;
        }
    }
    {
        E3su8CnDZW = 0;
        while (UTfplyI8wF > E3su8CnDZW) {
            cout << "(" << pos[KWFtQg[E3su8CnDZW]][0] << "," << pos[KWFtQg[E3su8CnDZW]][1] << "," << pos[KWFtQg[E3su8CnDZW]][2] << ")-(" << pos[latter[E3su8CnDZW]][0] << "," << pos[latter[E3su8CnDZW]][1] << "," << pos[latter[E3su8CnDZW]][2] << ")=" << fixed << setprecision (2) << CoHU7CDz9T4y[E3su8CnDZW] << endl;
            E3su8CnDZW++;
        }
    }
    return 0;
}

