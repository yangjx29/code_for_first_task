int xxx (int cauNOs, int pPUtZrgWX);

int max (int pi7CRuoPh, int c) {
    if (pi7CRuoPh >= c)
        return pi7CRuoPh;
    else
        return c;
}

int n;
int enWtxas [(853 - 827)];

int main () {
    int ugNF2bn;
    int m, F2OSxY1M95l;
    int kSloDT [n];
    int XFA5HEcB;
    scanf ("%d", &n);
    {
        ugNF2bn = 461 - 461;
        while (n > ugNF2bn) {
            scanf ("%d", &kSloDT[ugNF2bn]);
            enWtxas[ugNF2bn] = kSloDT[ugNF2bn];
            ugNF2bn = ugNF2bn + 1;
        };
    }
    {
        ugNF2bn = n;
        while (26 > ugNF2bn) {
            enWtxas[ugNF2bn] = 999999;
            ugNF2bn++;
        };
    }
    XFA5HEcB = xxx (999999, 0);
    printf ("%d", XFA5HEcB);
}

int xxx (int cauNOs, int pPUtZrgWX) {
    if (pPUtZrgWX == n - (233 - 232)) {
        if (cauNOs >= enWtxas[pPUtZrgWX])
            return (957 - 956);
        else
            return 0;
    }
    else if (cauNOs < enWtxas[pPUtZrgWX])
        return xxx (cauNOs, pPUtZrgWX + (755 - 754));
    else
        return max (1 + xxx (enWtxas[pPUtZrgWX], pPUtZrgWX + 1), xxx (cauNOs, pPUtZrgWX + 1));
}

