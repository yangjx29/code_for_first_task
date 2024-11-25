int p5A4XLnF [(380 - 280)] [(1059 - 959)];

void  hvq4y0clQOjE (int i7ODos) {
    int REHp10;
    int J1G4NDi;
    int ooVtFs3 [(325 - 225)];
    int col [100];
    int bWmOdSX;
    int r19Azb4;
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
    REHp10 = (10146 - 146);
    J1G4NDi = 10000;
    {
        bWmOdSX = 133 - 133;
        while (i7ODos > bWmOdSX) {
            {
                r19Azb4 = 1000 - 1000;
                while (i7ODos > r19Azb4) {
                    if (p5A4XLnF[bWmOdSX][r19Azb4] < REHp10)
                        REHp10 = p5A4XLnF[bWmOdSX][r19Azb4];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    r19Azb4 = r19Azb4 + 1;
                };
            }
            ooVtFs3[bWmOdSX] = REHp10;
            bWmOdSX = bWmOdSX + 1;
            REHp10 = 10000;
        };
    }
    {
        bWmOdSX = 619 - 619;
        while (i7ODos > bWmOdSX) {
            {
                r19Azb4 = 396 - 396;
                while (i7ODos > r19Azb4) {
                    p5A4XLnF[bWmOdSX][r19Azb4] = p5A4XLnF[bWmOdSX][r19Azb4] - ooVtFs3[bWmOdSX];
                    r19Azb4 = r19Azb4 + 1;
                };
            }
            bWmOdSX = bWmOdSX + 1;
        };
    }
    for (bWmOdSX = (922 - 922); i7ODos > bWmOdSX; bWmOdSX++) {
        {
            r19Azb4 = 10 - 10;
            while (i7ODos > r19Azb4) {
                if (p5A4XLnF[r19Azb4][bWmOdSX] < J1G4NDi)
                    J1G4NDi = p5A4XLnF[r19Azb4][bWmOdSX];
                r19Azb4++;
            };
        }
        col[bWmOdSX] = J1G4NDi;
        J1G4NDi = 10000;
    }
    {
        bWmOdSX = 494 - 494;
        while (bWmOdSX < i7ODos) {
            {
                r19Azb4 = 0;
                while (r19Azb4 < i7ODos) {
                    p5A4XLnF[r19Azb4][bWmOdSX] -= col[bWmOdSX];
                    r19Azb4++;
                };
            }
            bWmOdSX = bWmOdSX + 1;
        };
    };
}

void  Nj2DNCL6vp (int i7ODos) {
    int bWmOdSX;
    int r19Azb4;
    {
        bWmOdSX = 0;
        while (bWmOdSX < i7ODos) {
            {
                r19Azb4 = 738 - 737;
                while (r19Azb4 < i7ODos) {
                    p5A4XLnF[bWmOdSX][r19Azb4] = p5A4XLnF[bWmOdSX][r19Azb4 + 1];
                    r19Azb4++;
                };
            }
            bWmOdSX++;
        };
    }
    {
        r19Azb4 = 0;
        while (r19Azb4 < i7ODos) {
            {
                bWmOdSX = 1;
                while (bWmOdSX < i7ODos) {
                    p5A4XLnF[bWmOdSX][r19Azb4] = p5A4XLnF[bWmOdSX + 1][r19Azb4];
                    bWmOdSX++;
                };
            }
            r19Azb4++;
        };
    };
}

int main () {
    int i7ODos;
    int bWmOdSX;
    int r19Azb4;
    int k;
    int ePDLVK0to;
    scanf ("%d", &i7ODos);
    {
        bWmOdSX = 0;
        while (bWmOdSX < i7ODos) {
            int uCe5Yq;
            uCe5Yq = i7ODos;
            bWmOdSX++;
            ePDLVK0to = 0;
            {
                r19Azb4 = 0;
                while (r19Azb4 < i7ODos) {
                    {
                        k = 0;
                        while (i7ODos > k) {
                            scanf ("%d", &p5A4XLnF[r19Azb4][k]);
                            k++;
                        };
                    }
                    r19Azb4++;
                };
            }
            while (uCe5Yq != 1) {
                hvq4y0clQOjE (uCe5Yq);
                Nj2DNCL6vp (uCe5Yq);
                uCe5Yq--;
                ePDLVK0to = ePDLVK0to + p5A4XLnF[1][1];
            }
            printf ("%d\n", ePDLVK0to);
        };
    }
    return 0;
}

