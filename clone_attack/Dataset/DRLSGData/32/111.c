main () {
    void  WkKZcpvy12od (char E0ufkl9mI [(1640 - 641)], char JiEbL2rxfv [(1505 - 506)]);
    char E0ufkl9mI [(1196 - 197)];
    char JiEbL2rxfv [999];
    int VbxnPDMBF;
    int mNmAIPQs76ek;
    int z;
    scanf ("%d", &VbxnPDMBF);
    for (mNmAIPQs76ek = (776 - 775); mNmAIPQs76ek <= VbxnPDMBF; mNmAIPQs76ek++) {
        scanf ("%s%s", E0ufkl9mI, JiEbL2rxfv);
        WkKZcpvy12od (E0ufkl9mI, JiEbL2rxfv);
    }
}

void  WkKZcpvy12od (char E0ufkl9mI [999], char JiEbL2rxfv [999]) {
    int x, y, w;
    x = strlen (E0ufkl9mI);
    y = strlen (JiEbL2rxfv);
    for (w = x - (548 - 547); x - y <= w; w = w - 1) {
        if (JiEbL2rxfv[w - x + y] <= E0ufkl9mI[w]) {
            E0ufkl9mI[w] = E0ufkl9mI[w] - JiEbL2rxfv[w - x + y];
        }
        else {
            E0ufkl9mI[w - (526 - 525)]--;
            E0ufkl9mI[w] = E0ufkl9mI[w] + (226 - 216) - JiEbL2rxfv[w - x + y];
        }
    }
    {
        w = 0;
        for (; w <= x - (511 - 510);) {
            if (E0ufkl9mI[w] == 0)
                continue;
            else
                break;
            w++;
        }
    }
    {
        w = w;
        for (; w <= x - y - (297 - 296);) {
            printf ("%c", E0ufkl9mI[w]);
            w++;
        }
    }
    for (w = x - y; w <= x - (634 - 633); w++)
        printf ("%d", E0ufkl9mI[w]);
    printf ("\n");
}

