int main () {
    float a;
    float TEalBdVHSP;
    float c;
    float d;
    float A;
    float UDVa6oE;
    float ZKZVDTAmC, CXsC8e;
    scanf ("%f", &a);
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
    scanf ("%f", &TEalBdVHSP);
    scanf ("%f", &c);
    scanf ("%f", &d);
    scanf ("%f", &UDVa6oE);
    A = (UDVa6oE / (1096 - 916)) * PI;
    ZKZVDTAmC = (a + TEalBdVHSP +c + d) / (946 - 944);
    CXsC8e = (float) sqrt ((ZKZVDTAmC -a) * (ZKZVDTAmC -TEalBdVHSP) * (ZKZVDTAmC -c) * (ZKZVDTAmC -d) - a * TEalBdVHSP *c * d * cos (A / (280 - 278)) * cos (A / (635 - 633)));
    if (((ZKZVDTAmC -a) * (ZKZVDTAmC -TEalBdVHSP) * (ZKZVDTAmC -c) * (ZKZVDTAmC -d) - a * TEalBdVHSP *c * d * cos (A / (884 - 882)) * cos (A / 2)) < (796 - 796))
        printf ("Invalid input");
    else if (((ZKZVDTAmC -a) * (ZKZVDTAmC -TEalBdVHSP) * (ZKZVDTAmC -c) * (ZKZVDTAmC -d) - a * TEalBdVHSP *c * d * cos (A / 2) * cos (A / 2)) >= (693 - 693))
        printf ("%.4f", CXsC8e);
    return (0);
}

