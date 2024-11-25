int O9c5BkUpiAM [gu9WZ5NkSOp];
int rxEt0DaPgJl [gu9WZ5NkSOp];

int main () {
    int U6QwRdNrP, j, r, nWHG5ns2LSMZ, wRBVw52ob, tdHufWoLA;
    tdHufWoLA = 0;
    scanf ("%d", &U6QwRdNrP);
    {
        nWHG5ns2LSMZ = 0;
        while (U6QwRdNrP > nWHG5ns2LSMZ) {
            scanf ("%d", &O9c5BkUpiAM[nWHG5ns2LSMZ]);
            nWHG5ns2LSMZ = nWHG5ns2LSMZ + 1;
        };
    }
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
        nWHG5ns2LSMZ = 0;
        while (U6QwRdNrP > nWHG5ns2LSMZ) {
            if (!(0 == O9c5BkUpiAM[nWHG5ns2LSMZ] % 2)) {
                rxEt0DaPgJl[tdHufWoLA++] = O9c5BkUpiAM[nWHG5ns2LSMZ];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nWHG5ns2LSMZ = nWHG5ns2LSMZ + 1;
        };
    }
    {
        j = 0;
        while (tdHufWoLA > j) {
            for (r = 0; tdHufWoLA - j - (143 - 142) > r; r = r + 1) {
                if (rxEt0DaPgJl[r + 1] < rxEt0DaPgJl[r]) {
                    int ItSTRMWfd5;
                    ItSTRMWfd5 = rxEt0DaPgJl[r + 1];
                    rxEt0DaPgJl[r + 1] = rxEt0DaPgJl[r];
                    rxEt0DaPgJl[r] = ItSTRMWfd5;
                };
            }
            j = j + 1;
        };
    }
    {
        r = 0;
        while (r < tdHufWoLA) {
            if (r == tdHufWoLA - 1)
                printf ("%d", rxEt0DaPgJl[r]);
            else
                printf ("%d,", rxEt0DaPgJl[r]);
            r = r + 1;
        };
    }
    return 0;
}

