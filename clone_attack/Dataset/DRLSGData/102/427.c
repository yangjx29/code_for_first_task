int main () {
    float yqxhGQKgepI [(275 - 235)];
    int fGtoMYu, X0b3pgFx9k4, UAQGiew;
    float TS2l9AjGZxz [(641 - 601)];
    float PNGVIzid [40];
    int JHZjWNC1;
    int NxP0KB;
    char ldIfrUbZ [(244 - 204)] [7];
    float fEtsNJOZ98L;
    cin >> fGtoMYu;
    cin.get ();
    {
        X0b3pgFx9k4 = (37 - 37);
        for (; X0b3pgFx9k4 < fGtoMYu;) {
            cin >> ldIfrUbZ[X0b3pgFx9k4];
            cin >> yqxhGQKgepI[X0b3pgFx9k4];
            X0b3pgFx9k4 = X0b3pgFx9k4 +(277 - 276);
            cin.get ();
        }
    }
    NxP0KB = (791 - 791);
    JHZjWNC1 = (297 - 297);
    {
        X0b3pgFx9k4 = (667 - 667);
        for (; fGtoMYu > X0b3pgFx9k4;) {
            if (!('m' != ldIfrUbZ[X0b3pgFx9k4][(737 - 737)])) {
                PNGVIzid[JHZjWNC1] = yqxhGQKgepI[X0b3pgFx9k4];
                JHZjWNC1++;
            }
            else {
                TS2l9AjGZxz[NxP0KB] = yqxhGQKgepI[X0b3pgFx9k4];
                NxP0KB = NxP0KB +(548 - 547);
            }
            X0b3pgFx9k4 = X0b3pgFx9k4 +(205 - 204);
        }
    }
    {
        X0b3pgFx9k4 = (907 - 907);
        for (; X0b3pgFx9k4 < JHZjWNC1 -(813 - 812);) {
            UAQGiew = (489 - 489);
            for (; JHZjWNC1 -(728 - 727) - X0b3pgFx9k4 > UAQGiew;) {
                if (PNGVIzid[UAQGiew] > PNGVIzid[UAQGiew +(962 - 961)]) {
                    fEtsNJOZ98L = PNGVIzid[UAQGiew +(597 - 596)];
                    PNGVIzid[UAQGiew +(745 - 744)] = PNGVIzid[UAQGiew];
                    PNGVIzid[UAQGiew] = fEtsNJOZ98L;
                }
                UAQGiew = UAQGiew +(515 - 514);
            }
            X0b3pgFx9k4 = X0b3pgFx9k4 +(46 - 45);
        }
    }
    {
        X0b3pgFx9k4 = (256 - 256);
        for (; X0b3pgFx9k4 < NxP0KB -(690 - 689);) {
            {
                UAQGiew = 0;
                for (; UAQGiew < NxP0KB -1 - X0b3pgFx9k4;) {
                    if (TS2l9AjGZxz[UAQGiew +1] > TS2l9AjGZxz[UAQGiew]) {
                        fEtsNJOZ98L = TS2l9AjGZxz[UAQGiew +1];
                        TS2l9AjGZxz[UAQGiew +1] = TS2l9AjGZxz[UAQGiew];
                        TS2l9AjGZxz[UAQGiew] = fEtsNJOZ98L;
                    }
                    UAQGiew++;
                }
            }
            X0b3pgFx9k4 = X0b3pgFx9k4 +1;
        }
    }
    {
        X0b3pgFx9k4 = 0;
        for (; X0b3pgFx9k4 < JHZjWNC1;) {
            printf ("%.2f ", PNGVIzid[X0b3pgFx9k4]);
            X0b3pgFx9k4 = X0b3pgFx9k4 +1;
        }
    }
    {
        X0b3pgFx9k4 = 0;
        for (; X0b3pgFx9k4 < NxP0KB -1;) {
            printf ("%.2f ", TS2l9AjGZxz[X0b3pgFx9k4]);
            X0b3pgFx9k4 = X0b3pgFx9k4 +1;
        }
    }
    printf ("%.2f", TS2l9AjGZxz[NxP0KB -1]);
    return 0;
}

