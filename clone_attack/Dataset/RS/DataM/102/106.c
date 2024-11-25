int OQgv2uBldA (const  void  *elem1, const  void  *elem2) {
    int *Vu1iBXoymgM, *zOC1GU0Q;
    zOC1GU0Q = (int *) elem2;
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
    Vu1iBXoymgM = (int *) elem1;
    return (*zOC1GU0Q - *Vu1iBXoymgM);
}

int main () {
    float vVAB1MYU0c [40] = {(42 - 42)};
    float m [(907 - 867)] = {(503 - 503)};
    float M8klUtL4ebT;
    char r34NHApYnjl [(185 - 178)];
    int n, ppx6aG, j, Q29hkJ = (74 - 74), fi = (102 - 102);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    {
        ppx6aG = 888 - 888;
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
        while (n > ppx6aG) {
            ppx6aG++;
            scanf ("%s %f", r34NHApYnjl, &M8klUtL4ebT);
            if (r34NHApYnjl[(247 - 247)] == 'm') {
                m[Q29hkJ] = M8klUtL4ebT;
                Q29hkJ = Q29hkJ +1;
            }
            else {
                vVAB1MYU0c[fi] = M8klUtL4ebT;
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
                fi = fi + 1;
            };
        };
    }
    qsort (m, Q29hkJ, sizeof (int), OQgv2uBldA);
    {
        ppx6aG = Q29hkJ;
        while ((691 - 691) < ppx6aG) {
            printf ("%.2f ", m[ppx6aG - 1]);
            ppx6aG = ppx6aG - 1;
        };
    }
    qsort (vVAB1MYU0c, fi, sizeof (int), OQgv2uBldA);
    {
        ppx6aG = 0;
        while (ppx6aG < fi) {
            if (ppx6aG == (fi - 1))
                printf ("%.2f", vVAB1MYU0c[ppx6aG]);
            else
                printf ("%.2f ", vVAB1MYU0c[ppx6aG]);
            ppx6aG++;
        };
    };
}

