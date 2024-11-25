int main () {
    int vhRNBt1sMUZy [(1042 - 941)] [(936 - 835)];
    int FzmiuV;
    int U8mGPBrcTy;
    int Tk5g3qv201zj;
    int Sg71vQXrAh;
    int HyFsdmO4 [(192 - 91)] [(163 - 62)];
    int gxoQKXJ2EgsZ [(117 - 16)] [(594 - 493)];
    int onGdIOADrL4Q;
    int JpIR70ma5;
    int TIkNqjef;
    scanf ("%d %d", &onGdIOADrL4Q, &Sg71vQXrAh);
    {
        U8mGPBrcTy = 229 - 229;
        while (U8mGPBrcTy < onGdIOADrL4Q) {
            {
                TIkNqjef = 388 - 388;
                while (TIkNqjef < Sg71vQXrAh) {
                    scanf ("%d", &vhRNBt1sMUZy[U8mGPBrcTy][TIkNqjef]);
                    TIkNqjef++;
                };
            }
            U8mGPBrcTy++;
        };
    }
    scanf ("%d %d", &JpIR70ma5, &Tk5g3qv201zj);
    {
        U8mGPBrcTy = 884 - 884;
        while (U8mGPBrcTy < JpIR70ma5) {
            {
                TIkNqjef = 947 - 947;
                while (TIkNqjef < Tk5g3qv201zj) {
                    scanf ("%d", &HyFsdmO4[U8mGPBrcTy][TIkNqjef]);
                    TIkNqjef++;
                };
            }
            U8mGPBrcTy++;
        };
    }
    {
        U8mGPBrcTy = 740 - 740;
        while (U8mGPBrcTy < onGdIOADrL4Q) {
            for (TIkNqjef = (95 - 95); TIkNqjef < Tk5g3qv201zj; TIkNqjef++) {
                gxoQKXJ2EgsZ[U8mGPBrcTy][TIkNqjef] = (840 - 840);
                {
                    FzmiuV = 0;
                    while (FzmiuV < JpIR70ma5) {
                        gxoQKXJ2EgsZ[U8mGPBrcTy][TIkNqjef] = gxoQKXJ2EgsZ[U8mGPBrcTy][TIkNqjef] + vhRNBt1sMUZy[U8mGPBrcTy][FzmiuV] * +HyFsdmO4[FzmiuV][TIkNqjef];
                        FzmiuV++;
                    };
                };
            }
            U8mGPBrcTy++;
        };
    }
    {
        U8mGPBrcTy = 0;
        while (U8mGPBrcTy < onGdIOADrL4Q) {
            {
                TIkNqjef = 0;
                while (TIkNqjef < Tk5g3qv201zj) {
                    if (TIkNqjef != Tk5g3qv201zj -(769 - 768))
                        printf ("%d ", gxoQKXJ2EgsZ[U8mGPBrcTy][TIkNqjef]);
                    else
                        printf ("%d", gxoQKXJ2EgsZ[U8mGPBrcTy][TIkNqjef]);
                    TIkNqjef++;
                };
            }
            U8mGPBrcTy++;
        };
    };
}

