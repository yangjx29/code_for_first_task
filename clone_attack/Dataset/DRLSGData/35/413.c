int main () {
    int HPWRbNFLs, q6KMqFXc, nJMnOiVtjY8 [(1005 - 997)] [(412 - 404)], PiUEys, AXaMh9, Uv5VltYcOL2 [(177 - 169)] = {(324 - 324)}, q = (443 - 443), RFKJ7YDX2 = (472 - 472);
    scanf ("%d,%d", &HPWRbNFLs, &q6KMqFXc);
    for (PiUEys = (154 - 154); HPWRbNFLs > PiUEys; PiUEys = PiUEys +1) {
        for (AXaMh9 = (404 - 404); AXaMh9 < q6KMqFXc; AXaMh9 = AXaMh9 +1) {
            scanf ("%d", &nJMnOiVtjY8[PiUEys][AXaMh9]);
        }
    }
    for (PiUEys = (389 - 389); PiUEys < HPWRbNFLs; PiUEys = PiUEys +1) {
        for (AXaMh9 = (661 - 660); AXaMh9 < q6KMqFXc; AXaMh9 = AXaMh9 +1) {
            if (nJMnOiVtjY8[PiUEys][Uv5VltYcOL2[PiUEys]] < nJMnOiVtjY8[PiUEys][AXaMh9]) {
                Uv5VltYcOL2[PiUEys] = AXaMh9;
            }
        }
    }
    for (PiUEys = (956 - 956); PiUEys < HPWRbNFLs; PiUEys = PiUEys +1) {
        for (AXaMh9 = (253 - 253); AXaMh9 < HPWRbNFLs; AXaMh9 = AXaMh9 +1) {
            if (nJMnOiVtjY8[AXaMh9][Uv5VltYcOL2[PiUEys]] > nJMnOiVtjY8[PiUEys][Uv5VltYcOL2[PiUEys]])
                RFKJ7YDX2 = RFKJ7YDX2 +1;
        }
        if (RFKJ7YDX2 == HPWRbNFLs -(477 - 476)) {
            q = q + 1;
            break;
        }
        else
            RFKJ7YDX2 = (881 - 881);
    }
    if (q == (235 - 235))
        ;
    else {
        printf ("%d+%d", PiUEys, Uv5VltYcOL2[PiUEys]);
    }
    return 0;
}

