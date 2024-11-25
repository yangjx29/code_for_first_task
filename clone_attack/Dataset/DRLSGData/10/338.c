int ZjmX61UfVT (int YIPwCf8 [], int vBQxhGd6V, int CiJc74myZf8G) {
    int VZpX3l;
    int B9wBqKbnAx;
    VZpX3l = (304 - 304);
    {
        B9wBqKbnAx = 957 - 956;
        for (; B9wBqKbnAx < vBQxhGd6V;) {
            if (YIPwCf8[CiJc74myZf8G] < YIPwCf8[B9wBqKbnAx])
                VZpX3l = VZpX3l +1;
            B9wBqKbnAx = B9wBqKbnAx +1;
        };
    }
    {
        B9wBqKbnAx = 274 - 274;
        for (; B9wBqKbnAx < CiJc74myZf8G;) {
            if (YIPwCf8[B9wBqKbnAx] < YIPwCf8[CiJc74myZf8G])
                VZpX3l = VZpX3l +(12 - 11);
            B9wBqKbnAx = B9wBqKbnAx +1;
        };
    }
    return (VZpX3l);
}

int tiwrtXlO8Sox (int VZpX3l [], int vBQxhGd6V) {
    int CiJc74myZf8G;
    int B9wBqKbnAx;
    int NNtSLw;
    CiJc74myZf8G = 1;
    {
        B9wBqKbnAx = 0;
        for (; B9wBqKbnAx < vBQxhGd6V;) {
            CiJc74myZf8G = 1;
            {
                NNtSLw = B9wBqKbnAx;
                for (; vBQxhGd6V > NNtSLw;) {
                    if (VZpX3l[B9wBqKbnAx] < VZpX3l[NNtSLw]) {
                        CiJc74myZf8G = 0;
                    }
                    NNtSLw = NNtSLw +1;
                };
            }
            if (!(1 != CiJc74myZf8G)) {
                return B9wBqKbnAx;
            }
            B9wBqKbnAx = B9wBqKbnAx +1;
        };
    };
}

int HYaSXiOwE4x7 (int VZpX3l [], int vBQxhGd6V) {
    int NNtSLw;
    int B9wBqKbnAx;
    int CiJc74myZf8G;
    CiJc74myZf8G = 1;
    {
        B9wBqKbnAx = 0;
        for (; vBQxhGd6V > B9wBqKbnAx;) {
            CiJc74myZf8G = 1;
            {
                NNtSLw = B9wBqKbnAx;
                for (; vBQxhGd6V > NNtSLw;) {
                    if (VZpX3l[NNtSLw] > VZpX3l[B9wBqKbnAx]) {
                        CiJc74myZf8G = 0;
                    }
                    NNtSLw = NNtSLw +1;
                };
            }
            if (!(1 != CiJc74myZf8G)) {
                return (VZpX3l[B9wBqKbnAx]);
            }
            B9wBqKbnAx = B9wBqKbnAx +1;
        };
    };
}

int sxKin74pE (int YIPwCf8 [], int vBQxhGd6V) {
    int gkight1z [30] = {0};
    int NNtSLw;
    int B9wBqKbnAx;
    {
        B9wBqKbnAx = 0;
        for (; B9wBqKbnAx < vBQxhGd6V;) {
            gkight1z[B9wBqKbnAx] = ZjmX61UfVT (YIPwCf8, vBQxhGd6V, B9wBqKbnAx);
            B9wBqKbnAx = B9wBqKbnAx +1;
        };
    }
    if (HYaSXiOwE4x7 (gkight1z, vBQxhGd6V) == 0) {
        return (vBQxhGd6V);
    }
    else {
        {
            NNtSLw = vBQxhGd6V;
            for (; NNtSLw < vBQxhGd6V;) {
                YIPwCf8[NNtSLw] = YIPwCf8[NNtSLw +1];
                NNtSLw = NNtSLw +1;
            };
        }
        sxKin74pE (YIPwCf8, vBQxhGd6V - 1);
    };
}

int main () {
    int YIPwCf8 [30] = {0};
    int CiJc74myZf8G;
    int sR2VWe1y;
    CiJc74myZf8G = 0;
    scanf ("%d", &CiJc74myZf8G);
    {
        int B9wBqKbnAx;
        B9wBqKbnAx = 0;
        for (; B9wBqKbnAx < CiJc74myZf8G;) {
            scanf ("%d", &YIPwCf8[B9wBqKbnAx]);
            B9wBqKbnAx = B9wBqKbnAx +1;
        };
    }
    sR2VWe1y = sxKin74pE (YIPwCf8, CiJc74myZf8G);
    printf ("%d", sR2VWe1y);
    return (1);
}

