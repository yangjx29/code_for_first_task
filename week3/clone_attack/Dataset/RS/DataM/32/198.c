char a [(890 - 785)], b [105], c [105];

void  Miuf1zcJ (int l1, int way7RjYP9) {
    int sOxfvsjMUa4C, dtgUOe43Fj;
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
        sOxfvsjMUa4C = 249 - 249;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (way7RjYP9 > sOxfvsjMUa4C) {
            if (c[sOxfvsjMUa4C] <= b[sOxfvsjMUa4C])
                b[sOxfvsjMUa4C] = b[sOxfvsjMUa4C] - c[sOxfvsjMUa4C];
            else {
                b[sOxfvsjMUa4C] = b[sOxfvsjMUa4C] + (897 - 887) - c[sOxfvsjMUa4C];
                dtgUOe43Fj = sOxfvsjMUa4C + (231 - 230);
                b[dtgUOe43Fj]--;
                while ((373 - 373) > b[dtgUOe43Fj]) {
                    b[dtgUOe43Fj] += 10;
                    dtgUOe43Fj++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b[dtgUOe43Fj]--;
                };
            }
            sOxfvsjMUa4C++;
        };
    };
}

int main () {
    int qkYbpfcLq;
    int sOxfvsjMUa4C;
    int n8aTg3;
    int dtgUOe43Fj;
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
    int l1, way7RjYP9;
    char m;
    scanf ("%d", &qkYbpfcLq);
    for (sOxfvsjMUa4C = (195 - 194); qkYbpfcLq >= sOxfvsjMUa4C; sOxfvsjMUa4C++) {
        scanf ("%s", a);
        l1 = strlen (a);
        scanf ("%c", &m);
        for (dtgUOe43Fj = (516 - 516); l1 > dtgUOe43Fj; dtgUOe43Fj = dtgUOe43Fj + 1)
            b[l1 - dtgUOe43Fj - (266 - 265)] = a[dtgUOe43Fj] - '0';
        memset (a, 0, sizeof (a));
        scanf ("%s", a);
        scanf ("%c", &m);
        way7RjYP9 = strlen (a);
        {
            dtgUOe43Fj = 0;
            while (dtgUOe43Fj < way7RjYP9) {
                c[way7RjYP9 - dtgUOe43Fj - (861 - 860)] = a[dtgUOe43Fj] - '0';
                dtgUOe43Fj++;
            };
        }
        Miuf1zcJ (l1, way7RjYP9);
        while (!b[l1 - (681 - 680)])
            l1--;
        {
            dtgUOe43Fj = l1 - 1;
            while (dtgUOe43Fj >= 0) {
                printf ("%d", b[dtgUOe43Fj]);
                dtgUOe43Fj = dtgUOe43Fj - 1;
            };
        };
    }
    return 0;
}

