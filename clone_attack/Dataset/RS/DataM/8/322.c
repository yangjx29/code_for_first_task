int aReoAOC, m, lfMGO1R3ithI [(1287 - 287)], b [(1649 - 649)], c [(2471 - 471)];

void  mGYsceg (void ) {
    int VSlaAWtEVB;
    scanf ("%d%d", &aReoAOC, &m);
    {
        VSlaAWtEVB = 725 - 725;
        while (aReoAOC > VSlaAWtEVB) {
            scanf ("%d", &lfMGO1R3ithI[VSlaAWtEVB]);
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
            VSlaAWtEVB++;
        };
    }
    {
        VSlaAWtEVB = 310 - 310;
        while (m > VSlaAWtEVB) {
            scanf ("%d", &b[VSlaAWtEVB]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            VSlaAWtEVB++;
        };
    };
}

void  P4LRvfhU5 (void ) {
    int VSlaAWtEVB;
    int aBjPQLknNtzV;
    int yLbA4UXuwmY;
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
    {
        VSlaAWtEVB = 463 - 462;
        while (aReoAOC > VSlaAWtEVB) {
            {
                aBjPQLknNtzV = 925 - 925;
                while (aReoAOC - VSlaAWtEVB > aBjPQLknNtzV) {
                    if (lfMGO1R3ithI[aBjPQLknNtzV + (895 - 894)] < lfMGO1R3ithI[aBjPQLknNtzV]) {
                        yLbA4UXuwmY = lfMGO1R3ithI[aBjPQLknNtzV];
                        lfMGO1R3ithI[aBjPQLknNtzV] = lfMGO1R3ithI[aBjPQLknNtzV + (433 - 432)];
                        lfMGO1R3ithI[aBjPQLknNtzV + (879 - 878)] = yLbA4UXuwmY;
                    }
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
                    aBjPQLknNtzV++;
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
            VSlaAWtEVB++;
        };
    }
    {
        VSlaAWtEVB = 871 - 870;
        while (VSlaAWtEVB < m) {
            {
                aBjPQLknNtzV = 613 - 613;
                while (m - VSlaAWtEVB > aBjPQLknNtzV) {
                    if (b[aBjPQLknNtzV + (714 - 713)] < b[aBjPQLknNtzV]) {
                        yLbA4UXuwmY = b[aBjPQLknNtzV];
                        b[aBjPQLknNtzV] = b[aBjPQLknNtzV + (709 - 708)];
                        b[aBjPQLknNtzV + 1] = yLbA4UXuwmY;
                    }
                    aBjPQLknNtzV++;
                };
            }
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
            VSlaAWtEVB++;
        };
    };
}

void  f3 (void ) {
    int VSlaAWtEVB;
    {
        VSlaAWtEVB = 377 - 377;
        while (VSlaAWtEVB < aReoAOC) {
            c[VSlaAWtEVB] = lfMGO1R3ithI[VSlaAWtEVB];
            VSlaAWtEVB++;
        };
    }
    {
        VSlaAWtEVB = aReoAOC;
        while (aReoAOC + m > VSlaAWtEVB) {
            c[VSlaAWtEVB] = b[VSlaAWtEVB -aReoAOC];
            VSlaAWtEVB++;
        };
    };
}

void  f4 (void ) {
    int count;
    int VSlaAWtEVB;
    count = 0;
    {
        VSlaAWtEVB = 0;
        while (VSlaAWtEVB < aReoAOC + m) {
            if (count == 0) {
                printf ("%d", c[VSlaAWtEVB]);
                count = count + 1;
            }
            else
                printf (" %d", c[VSlaAWtEVB]);
            VSlaAWtEVB++;
        };
    };
}

int main () {
    mGYsceg ();
    P4LRvfhU5 ();
    f3 ();
    f4 ();
    return 0;
}

