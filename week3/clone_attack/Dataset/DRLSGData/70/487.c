int main (int sP3JQx819, char *EfsJdT1cV []) {
    struct   {
        double  RUIRPq2, y9ur7N;
    }
    WaZYwB [gpP4thZD6z2k];
    int QblqaK1IB;
    double  qUDNdv4yeRit;
    double  nRnGYpPDv = 0.0;
    int DMILwxjpif6V, aW1qRnaxIso;
    scanf ("%d/n", &QblqaK1IB);
    {
        DMILwxjpif6V = 0;
        while (QblqaK1IB > DMILwxjpif6V) {
            double  Sxdr6sApN3XP, hh2wExzQniJ;
            scanf ("%lf" "%lf/n", &Sxdr6sApN3XP, &hh2wExzQniJ);
            WaZYwB[DMILwxjpif6V].RUIRPq2 = Sxdr6sApN3XP;
            WaZYwB[DMILwxjpif6V].y9ur7N = hh2wExzQniJ;
            DMILwxjpif6V++;
        }
    }
    {
        DMILwxjpif6V = 0;
        while (DMILwxjpif6V < QblqaK1IB) {
            {
                aW1qRnaxIso = 0;
                while (QblqaK1IB > aW1qRnaxIso) {
                    qUDNdv4yeRit = sqrt (pow (WaZYwB[DMILwxjpif6V].RUIRPq2 - WaZYwB[aW1qRnaxIso].RUIRPq2, 2) + pow (WaZYwB[DMILwxjpif6V].y9ur7N - WaZYwB[aW1qRnaxIso].y9ur7N, 2));
                    if (qUDNdv4yeRit > nRnGYpPDv) {
                        nRnGYpPDv = qUDNdv4yeRit;
                    }
                    aW1qRnaxIso++;
                }
            }
            DMILwxjpif6V++;
        }
    }
    printf ("%.4f", nRnGYpPDv);
    return 0;
}

