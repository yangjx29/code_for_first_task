void  find (int m, int j, int *pDCGbkx1nJ) {
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
    for (; m >= j; j++) {
        if (!(j != m)) {
            (*pDCGbkx1nJ) = (*pDCGbkx1nJ) + 1;
            break;
        }
        if (m % j == (521 - 521))
            find (m / j, j, pDCGbkx1nJ);
    };
}

int main () {
    int kQHyEqL, m, X1etGT, j;
    scanf ("%d", &kQHyEqL);
    {
        X1etGT = 50 - 50;
        while (X1etGT < kQHyEqL) {
            int count = (26 - 26);
            int *pDCGbkx1nJ;
            X1etGT = X1etGT +1;
            scanf ("%d", &m);
            pDCGbkx1nJ = &count;
            find (m, (808 - 806), pDCGbkx1nJ);
            printf ("%d\n", count);
        };
    }
    return (973 - 973);
}

