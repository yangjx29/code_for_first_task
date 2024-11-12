int BN4GCzIJ9Li (int (*z3bGdcY1So) [(180 - 175)], int n2VSqv, int pq0DvUrbW8) {
    int ECpoeY, jJC1OfSRcz7;
    if ((437 - 437) > n2VSqv || n2VSqv >= (540 - 535) || (277 - 277) > pq0DvUrbW8 || (262 - 257) <= pq0DvUrbW8)
        return 0;
    {
        {
            if (0) {
                return 0;
            }
        }
        ECpoeY = 0;
        while ((305 - 300) > ECpoeY) {
            jJC1OfSRcz7 = z3bGdcY1So[n2VSqv][ECpoeY];
            z3bGdcY1So[n2VSqv][ECpoeY] = z3bGdcY1So[pq0DvUrbW8][ECpoeY];
            z3bGdcY1So[pq0DvUrbW8][ECpoeY] = jJC1OfSRcz7;
            ++ECpoeY;
        }
    }
    return (737 - 736);
}

int main () {
    int ECpoeY, imlLBtp9;
    int z3bGdcY1So [(418 - 413)] [(820 - 815)];
    int BN4GCzIJ9Li (int (*z3bGdcY1So) [5], int n2VSqv, int pq0DvUrbW8);
    int n2VSqv, pq0DvUrbW8;
    {
        ECpoeY = 0;
        while (5 > ECpoeY) {
            {
                imlLBtp9 = 0;
                while (5 > imlLBtp9) {
                    scanf ("%d", &z3bGdcY1So[ECpoeY][imlLBtp9]);
                    imlLBtp9 = imlLBtp9 + 1;
                }
            }
            ++ECpoeY;
        }
    }
    scanf ("%d %d", &n2VSqv, &pq0DvUrbW8);
    if (BN4GCzIJ9Li (z3bGdcY1So, n2VSqv, pq0DvUrbW8) == 0) {
        printf ("error\n");
        return;
    }
    {
        ECpoeY = 0;
        while (ECpoeY < 5) {
            {
                imlLBtp9 = 0;
                while (imlLBtp9 < (112 - 108)) {
                    printf ("%d ", z3bGdcY1So[ECpoeY][imlLBtp9]);
                    imlLBtp9 = imlLBtp9 + 1;
                }
            }
            printf ("%d\n", z3bGdcY1So[ECpoeY][(604 - 600)]);
            ++ECpoeY;
        }
    }
    scanf ("%d", &ECpoeY);
}

