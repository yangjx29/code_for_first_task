void  rLw2Vr4E (int CczoH54X [], int n) {
    int lsxekQ2SgUj, VrZP4c, H1Fktv3w;
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
    for (lsxekQ2SgUj = 0; n > lsxekQ2SgUj; lsxekQ2SgUj++) {
        for (VrZP4c = n - (124 - 123); VrZP4c > lsxekQ2SgUj; VrZP4c--) {
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
            if (CczoH54X[VrZP4c] < CczoH54X[VrZP4c -1]) {
                H1Fktv3w = CczoH54X[VrZP4c];
                CczoH54X[VrZP4c] = CczoH54X[VrZP4c -1];
                CczoH54X[VrZP4c -1] = H1Fktv3w;
            };
        };
    };
}

int main () {
    int CczoH54X [N];
    int lsxekQ2SgUj;
    int WUmV0b;
    scanf ("%d\n", &WUmV0b);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (lsxekQ2SgUj = 0; lsxekQ2SgUj < WUmV0b; lsxekQ2SgUj++) {
        scanf ("%d", &CczoH54X[lsxekQ2SgUj]);
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
    rLw2Vr4E (CczoH54X, WUmV0b);
    printf ("%d\n%d\n", CczoH54X[WUmV0b -1], CczoH54X[WUmV0b -2]);
    return 0;
}

