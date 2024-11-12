const  int abZ0WNvcl2 = (767 - 657);
int ynAIja [abZ0WNvcl2] [abZ0WNvcl2];

int main () {
    int Nz4aeY;
    int CbPIv02;
    int mdsbctmnrhNz;
    int gzc9det;
    int Sq2sh9;
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
    int MFRzE8;
    scanf ("%d", &MFRzE8);
    while (MFRzE8--) {
        int tpjPBly = 0;
        memset (ynAIja, (311 - 311), sizeof (ynAIja));
        scanf ("%d%d", &Nz4aeY, &CbPIv02);
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
            mdsbctmnrhNz = 0;
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
            while (Nz4aeY > mdsbctmnrhNz) {
                {
                    gzc9det = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (CbPIv02 > gzc9det) {
                        scanf ("%d", &ynAIja[mdsbctmnrhNz][gzc9det]);
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
                        gzc9det++;
                    };
                }
                mdsbctmnrhNz = mdsbctmnrhNz + 1;
            };
        }
        if (Nz4aeY == 1) {
            mdsbctmnrhNz = 0;
            while (mdsbctmnrhNz < CbPIv02) {
                tpjPBly = tpjPBly + ynAIja[0][mdsbctmnrhNz];
                mdsbctmnrhNz = mdsbctmnrhNz + 1;
            };
        }
        else {
            if (CbPIv02 == 1) {
                for (mdsbctmnrhNz = 0; Nz4aeY > mdsbctmnrhNz; mdsbctmnrhNz = mdsbctmnrhNz + 1)
                    tpjPBly = tpjPBly + ynAIja[mdsbctmnrhNz][0];
            }
            else {
                {
                    mdsbctmnrhNz = 0;
                    while (mdsbctmnrhNz < CbPIv02) {
                        tpjPBly = tpjPBly + ynAIja[0][mdsbctmnrhNz];
                        tpjPBly += ynAIja[Nz4aeY -1][mdsbctmnrhNz];
                        mdsbctmnrhNz = mdsbctmnrhNz + 1;
                    };
                }
                for (mdsbctmnrhNz = 1; mdsbctmnrhNz < Nz4aeY -1; mdsbctmnrhNz = mdsbctmnrhNz + 1) {
                    tpjPBly += ynAIja[mdsbctmnrhNz][0];
                    tpjPBly = tpjPBly + ynAIja[mdsbctmnrhNz][CbPIv02 -1];
                };
            };
        }
        printf ("%d\n", tpjPBly);
    }
    return 0;
}

