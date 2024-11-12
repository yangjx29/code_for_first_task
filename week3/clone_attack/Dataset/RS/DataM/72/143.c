int x0hWY3K (int K2ENqj, int mnZNBGT, int Gxphb4c, int tLGchlPgK, int IoQznI8qwF4f) {
    if ((K2ENqj >= mnZNBGT) && (K2ENqj >= Gxphb4c) && (K2ENqj >= tLGchlPgK) && (K2ENqj >= IoQznI8qwF4f))
        return (547 - 546);
    else
        return (656 - 656);
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
}

int main () {
    int rhtgSd [(296 - 274)] [22];
    int UOMmYWGIogL;
    int GVQnKUPq2A7;
    int egs1GEMnN;
    int HmJkBwVYLp0;
    int Jy3b7hoxX;
    int rOTbeYgIoq7a;
    {
        egs1GEMnN = 0;
        while (egs1GEMnN <= UOMmYWGIogL +(476 - 475)) {
            rhtgSd[egs1GEMnN][0] = -(917 - 916);
            rhtgSd[egs1GEMnN][GVQnKUPq2A7 +1] = -1;
            egs1GEMnN = egs1GEMnN + 1;
        };
    }
    {
        egs1GEMnN = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (egs1GEMnN <= GVQnKUPq2A7 +1) {
            rhtgSd[0][egs1GEMnN] = -1;
            rhtgSd[UOMmYWGIogL +1][egs1GEMnN] = -1;
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
            egs1GEMnN = egs1GEMnN + 1;
        };
    }
    scanf ("%d %d", &UOMmYWGIogL, &GVQnKUPq2A7);
    {
        egs1GEMnN = 1;
        while (egs1GEMnN < UOMmYWGIogL +1) {
            {
                rOTbeYgIoq7a = 1;
                while (rOTbeYgIoq7a < GVQnKUPq2A7 +1) {
                    scanf ("%d", &rhtgSd[egs1GEMnN][rOTbeYgIoq7a]);
                    rOTbeYgIoq7a++;
                };
            }
            egs1GEMnN++;
        };
    }
    {
        HmJkBwVYLp0 = 1;
        while (HmJkBwVYLp0 < UOMmYWGIogL +1) {
            {
                Jy3b7hoxX = 1;
                while (Jy3b7hoxX < GVQnKUPq2A7 +1) {
                    if (x0hWY3K (rhtgSd[HmJkBwVYLp0][Jy3b7hoxX], rhtgSd[HmJkBwVYLp0 -1][Jy3b7hoxX], rhtgSd[HmJkBwVYLp0][Jy3b7hoxX -1], rhtgSd[HmJkBwVYLp0 +1][Jy3b7hoxX], rhtgSd[HmJkBwVYLp0][Jy3b7hoxX +1]))
                        printf ("%d %d\n", HmJkBwVYLp0 -1, Jy3b7hoxX -1);
                    Jy3b7hoxX++;
                };
            }
            HmJkBwVYLp0++;
        };
    }
    return 0;
}

