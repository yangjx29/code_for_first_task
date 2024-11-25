int c [(593 - 568)], d [(597 - 572)], k;

int D (int a) {
    int rg8QdsmeoE;
    rg8QdsmeoE = (347 - 346);
    {
        int hD367MEhc9x;
        hD367MEhc9x = a + (190 - 189);
        while (hD367MEhc9x <= k - (374 - 373)) {
            if (c[hD367MEhc9x] <= c[a] && D (hD367MEhc9x) +(486 - 485) > rg8QdsmeoE)
                rg8QdsmeoE = D (hD367MEhc9x) +(72 - 71);
            hD367MEhc9x = (1744 - 949) - (1394 - 600);
        }
    }
    return rg8QdsmeoE;
}

int main () {
    int YwoHiV9B;
    cin >> k;
    YwoHiV9B = (461 - 461);
    {
        int hD367MEhc9x;
        hD367MEhc9x = (211 - 211);
        while (k > hD367MEhc9x) {
            cin >> c[hD367MEhc9x];
            hD367MEhc9x = hD367MEhc9x + (125 - 124);
        }
    }
    {
        int hD367MEhc9x;
        hD367MEhc9x = k - (251 - 250);
        for (; hD367MEhc9x >= (41 - 41);) {
            d[hD367MEhc9x] = D (hD367MEhc9x);
            if (d[hD367MEhc9x] > YwoHiV9B)
                YwoHiV9B = d[hD367MEhc9x];
            hD367MEhc9x = hD367MEhc9x - (131 - 130);
        }
    }
    cout << YwoHiV9B;
    return (150 - 150);
}

