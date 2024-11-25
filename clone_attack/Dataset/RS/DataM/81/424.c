void  reverse (int b9DxhdNR [(630 - 625)] [5], int QIGQlXVbZOsm, int d43Fb6);

int main (int ZWsBl1NIQt, char *PGW09v4wm []) {
    int pVN6HpcyGs, hang2, rJtkTG5OVx;
    int su [5] [5];
    int NLjoOTlyEVX, w3MUlR7Cp;
    {
        NLjoOTlyEVX = 366 - 366;
        while (NLjoOTlyEVX < 5) {
            {
                w3MUlR7Cp = 0;
                while (w3MUlR7Cp < 5) {
                    scanf ("%d", &su[NLjoOTlyEVX][w3MUlR7Cp]);
                    w3MUlR7Cp++;
                };
            }
            NLjoOTlyEVX++;
        };
    }
    scanf ("%d %d", &pVN6HpcyGs, &hang2);
    reverse (su, pVN6HpcyGs, hang2);
    return 0;
}

void  reverse (int b9DxhdNR [5] [5], int QIGQlXVbZOsm, int d43Fb6) {
    int aonaAuX [5];
    int rJtkTG5OVx;
    int k;
    int nQqHsj;
    if (((0 <= QIGQlXVbZOsm) && (QIGQlXVbZOsm < 5)) && ((d43Fb6 < 5) && (d43Fb6 >= 0))) {
        rJtkTG5OVx = 1;
        for (k = 0; 5 > k; k++) {
            if (QIGQlXVbZOsm == d43Fb6) {
                break;
            }
            aonaAuX[k] = b9DxhdNR[QIGQlXVbZOsm][k];
            b9DxhdNR[QIGQlXVbZOsm][k] = b9DxhdNR[d43Fb6][k];
            b9DxhdNR[d43Fb6][k] = aonaAuX[k];
        };
    }
    else {
        rJtkTG5OVx = 0;
    }
    if (rJtkTG5OVx) {
        k = 0;
        while (k < 5) {
            {
                nQqHsj = 0;
                while (nQqHsj < 4) {
                    printf ("%d ", b9DxhdNR[k][nQqHsj]);
                    nQqHsj++;
                };
            }
            printf ("%d\n", b9DxhdNR[k][4]);
            k = k + 1;
        };
    }
    else {
        printf ("error");
    };
}

