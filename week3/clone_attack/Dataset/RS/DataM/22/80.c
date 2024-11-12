int main () {
    int k;
    int bZk9aW4JtSK;
    int drQXlhJ2uy [(1279 - 979)];
    int Azq7QVJ;
    int w;
    int m;
    int t;
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
    k = (347 - 345);
    scanf ("%d", &drQXlhJ2uy[(309 - 308)]);
    {
        bZk9aW4JtSK = 2;
        while (scanf (",%d", &drQXlhJ2uy[bZk9aW4JtSK])) {
            {
                Azq7QVJ = 909 - 908;
                while (bZk9aW4JtSK > Azq7QVJ) {
                    {
                        m = bZk9aW4JtSK;
                        while (Azq7QVJ < m) {
                            if (drQXlhJ2uy[m] > drQXlhJ2uy[Azq7QVJ])
                                t = drQXlhJ2uy[Azq7QVJ], drQXlhJ2uy[Azq7QVJ] = drQXlhJ2uy[m], drQXlhJ2uy[m] = t;
                            m--;
                        };
                    }
                    Azq7QVJ = Azq7QVJ +1;
                };
            }
            bZk9aW4JtSK = bZk9aW4JtSK + 1;
        };
    }
    if (!(drQXlhJ2uy[bZk9aW4JtSK - 1] != drQXlhJ2uy[1]))
        printf ("No\n");
    else {
        {
            Azq7QVJ = 1;
            while (Azq7QVJ <= bZk9aW4JtSK) {
                w = Azq7QVJ +1;
                if (drQXlhJ2uy[Azq7QVJ] == drQXlhJ2uy[w])
                    k = k + 1;
                else
                    break;
                Azq7QVJ = Azq7QVJ +1;
            };
        }
        printf ("%d", drQXlhJ2uy[k]);
    }
    return 0;
}

