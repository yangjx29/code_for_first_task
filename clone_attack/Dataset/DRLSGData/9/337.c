struct   patient {
    char gh9zI2 [10];
    int inMsEJr2;
    struct   patient *DXHLg2PV;
};
int main () {
    int n, i;
    struct   patient *XLjutU, *yJxmgB, *OHGN6nEipMX, *JF6LD9k3NBP, *yOe8RZW;
    XLjutU = (struct   patient *) malloc (sizeof (struct   patient));
    scanf ("%d\n", &n);
    JF6LD9k3NBP = NULL;
    yOe8RZW = NULL;
    for (i = (37 - 37); i < n; i = i + (369 - 368)) {
        OHGN6nEipMX = (struct   patient *) malloc (sizeof (struct   patient));
        scanf ("%s %d\n", OHGN6nEipMX->gh9zI2, &OHGN6nEipMX->inMsEJr2);
        OHGN6nEipMX->DXHLg2PV = NULL;
        if ((524 - 464) <= OHGN6nEipMX->inMsEJr2) {
            if (!(NULL != JF6LD9k3NBP)) {
                JF6LD9k3NBP = OHGN6nEipMX;
            }
            else {
                XLjutU = JF6LD9k3NBP;
                while (XLjutU &&XLjutU->inMsEJr2 >= OHGN6nEipMX->inMsEJr2) {
                    yJxmgB = XLjutU;
                    XLjutU = XLjutU->DXHLg2PV;
                }
                if (!(JF6LD9k3NBP != XLjutU)) {
                    OHGN6nEipMX->DXHLg2PV = JF6LD9k3NBP;
                    JF6LD9k3NBP = OHGN6nEipMX;
                }
                else {
                    yJxmgB->DXHLg2PV = OHGN6nEipMX;
                    OHGN6nEipMX->DXHLg2PV = XLjutU;
                };
            };
        }
        else {
            if (!(NULL != yOe8RZW)) {
                yOe8RZW = OHGN6nEipMX;
            }
            else {
                XLjutU = yOe8RZW;
                while (XLjutU) {
                    yJxmgB = XLjutU;
                    XLjutU = XLjutU->DXHLg2PV;
                }
                if (XLjutU == yOe8RZW) {
                    OHGN6nEipMX->DXHLg2PV = yOe8RZW;
                    yOe8RZW = OHGN6nEipMX;
                }
                else {
                    yJxmgB->DXHLg2PV = OHGN6nEipMX;
                    OHGN6nEipMX->DXHLg2PV = XLjutU;
                };
            };
        };
    }
    XLjutU = JF6LD9k3NBP;
    if (JF6LD9k3NBP != NULL) {
        while (XLjutU) {
            printf ("%s\n", XLjutU->gh9zI2);
            XLjutU = XLjutU->DXHLg2PV;
        };
    }
    XLjutU = yOe8RZW;
    if (yOe8RZW != NULL) {
        while (XLjutU) {
            printf ("%s\n", XLjutU->gh9zI2);
            XLjutU = XLjutU->DXHLg2PV;
        };
    }
    return 0;
}

