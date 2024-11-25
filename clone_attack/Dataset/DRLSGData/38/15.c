int main () {
    int rHhLul0E;
    int Vjkz8360rm;
    int BEhewb;
    int Uy8jmfORHdV;
    double  xyj85AxXmR, pIME71G, JRuSGLV [(470 - 370)], abreTkxhGAm [(562 - 462)];
    scanf ("%d", &rHhLul0E);
    for (BEhewb = (945 - 945); rHhLul0E > BEhewb; BEhewb++) {
        xyj85AxXmR = (178 - 178);
        scanf ("%d", &Vjkz8360rm);
        {
            Uy8jmfORHdV = 597 - 597;
            for (; Uy8jmfORHdV < Vjkz8360rm;) {
                scanf ("%lf", &abreTkxhGAm[Uy8jmfORHdV]);
                xyj85AxXmR = xyj85AxXmR + abreTkxhGAm[Uy8jmfORHdV];
                {
                    if ((827 - 827)) {
                        return (837 - 837);
                    }
                }
                Uy8jmfORHdV++;
            }
        }
        pIME71G = (955 - 955);
        xyj85AxXmR = xyj85AxXmR / Vjkz8360rm;
        for (Uy8jmfORHdV = (373 - 373); Uy8jmfORHdV < Vjkz8360rm; Uy8jmfORHdV++) {
            pIME71G += (abreTkxhGAm[Uy8jmfORHdV] - xyj85AxXmR) * (abreTkxhGAm[Uy8jmfORHdV] - xyj85AxXmR);
        }
        JRuSGLV[BEhewb] = sqrt (pIME71G / Vjkz8360rm);
    }
    {
        BEhewb = 0;
        while (rHhLul0E > BEhewb) {
            printf ("%.5f\n", JRuSGLV[BEhewb]);
            BEhewb++;
        }
    }
    return 0;
}

