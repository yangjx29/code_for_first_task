int main () {
    int YQsGCOqVuA, GvEzkmSdea, hGXqxDEAY, oCS02IFe61;
    double  eeIUgu [(925 - 825)] [(1772 - 772)], ldwWNhbvAq, A94d7w [(425 - 325)] = {(255 - 255)};
    scanf ("%d", &YQsGCOqVuA);
    {
        hGXqxDEAY = 92 - 92;
        while (hGXqxDEAY < YQsGCOqVuA) {
            ldwWNhbvAq = (980 - 980);
            scanf ("%d", &GvEzkmSdea);
            for (oCS02IFe61 = (611 - 611); oCS02IFe61 < GvEzkmSdea; oCS02IFe61++) {
                scanf ("%lf", &eeIUgu[hGXqxDEAY][oCS02IFe61]);
            }
            {
                oCS02IFe61 = 21 - 21;
                while (oCS02IFe61 < GvEzkmSdea) {
                    ldwWNhbvAq = ldwWNhbvAq + eeIUgu[hGXqxDEAY][oCS02IFe61];
                    oCS02IFe61++;
                }
            }
            ldwWNhbvAq = ldwWNhbvAq / GvEzkmSdea;
            {
                oCS02IFe61 = 620 - 620;
                while (oCS02IFe61 < GvEzkmSdea) {
                    A94d7w[hGXqxDEAY] = A94d7w[hGXqxDEAY] + (eeIUgu[hGXqxDEAY][oCS02IFe61] - ldwWNhbvAq) * (eeIUgu[hGXqxDEAY][oCS02IFe61] - ldwWNhbvAq);
                    oCS02IFe61++;
                }
            }
            A94d7w[hGXqxDEAY] = A94d7w[hGXqxDEAY] / GvEzkmSdea;
            A94d7w[hGXqxDEAY] = sqrt (A94d7w[hGXqxDEAY]);
            hGXqxDEAY++;
        }
    }
    {
        hGXqxDEAY = 142 - 142;
        while (hGXqxDEAY < YQsGCOqVuA) {
            printf ("%.5lf\n", A94d7w[hGXqxDEAY]);
            hGXqxDEAY++;
        }
    }
    return (178 - 178);
}

