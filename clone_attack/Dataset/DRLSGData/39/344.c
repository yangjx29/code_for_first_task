struct   xHXBeW {
    char FRv4qUs [100];
    int FxVJQSB;
    int iOSPYlm4D;
    char LEe0BNZKnCH;
    char aWpYjahiK2;
    int Jjtv0BI;
    int x06SaLCN;
};
int zOCLVS450a [101] = {0};

int main () {
    char a8twSP6y [100] = {'\0'};
    void  Sevo9bi (struct   xHXBeW ZHXnUpZ [], int sldC7Lg, int zOCLVS450a []);
    int T5BEithvKpb;
    int sldC7Lg;
    int nnPQRm218;
    T5BEithvKpb = 0;
    sldC7Lg = 0;
    nnPQRm218 = 0;
    struct   xHXBeW ZHXnUpZ [101];
    scanf ("%d", &sldC7Lg);
    {
        T5BEithvKpb = 0;
        for (; T5BEithvKpb < 101;) {
            strcpy (ZHXnUpZ[T5BEithvKpb].FRv4qUs, a8twSP6y);
            ZHXnUpZ[T5BEithvKpb].FxVJQSB = 0;
            ZHXnUpZ[T5BEithvKpb].iOSPYlm4D = 0;
            ZHXnUpZ[T5BEithvKpb].LEe0BNZKnCH = '\0';
            ZHXnUpZ[T5BEithvKpb].aWpYjahiK2 = '\0';
            ZHXnUpZ[T5BEithvKpb].Jjtv0BI = 0;
            ZHXnUpZ[T5BEithvKpb].x06SaLCN = 0;
            T5BEithvKpb = T5BEithvKpb +1;
        }
    }
    {
        T5BEithvKpb = 0;
        for (; T5BEithvKpb < sldC7Lg;) {
            scanf ("%s", ZHXnUpZ[T5BEithvKpb].FRv4qUs);
            scanf ("%d %d %c %c %d", &ZHXnUpZ[T5BEithvKpb].FxVJQSB, &ZHXnUpZ[T5BEithvKpb].iOSPYlm4D, &ZHXnUpZ[T5BEithvKpb].LEe0BNZKnCH, &ZHXnUpZ[T5BEithvKpb].aWpYjahiK2, &ZHXnUpZ[T5BEithvKpb].Jjtv0BI);
            if (80 < ZHXnUpZ[T5BEithvKpb].FxVJQSB && 1 <= ZHXnUpZ[T5BEithvKpb].Jjtv0BI)
                ZHXnUpZ[T5BEithvKpb].x06SaLCN = ZHXnUpZ[T5BEithvKpb].x06SaLCN + 8000;
            if (ZHXnUpZ[T5BEithvKpb].FxVJQSB > 85 && ZHXnUpZ[T5BEithvKpb].iOSPYlm4D > 80)
                ZHXnUpZ[T5BEithvKpb].x06SaLCN = ZHXnUpZ[T5BEithvKpb].x06SaLCN + 4000;
            if (ZHXnUpZ[T5BEithvKpb].FxVJQSB > 90)
                ZHXnUpZ[T5BEithvKpb].x06SaLCN = ZHXnUpZ[T5BEithvKpb].x06SaLCN + 2000;
            if (!('Y' != ZHXnUpZ[T5BEithvKpb].aWpYjahiK2) && ZHXnUpZ[T5BEithvKpb].FxVJQSB > 85)
                ZHXnUpZ[T5BEithvKpb].x06SaLCN = ZHXnUpZ[T5BEithvKpb].x06SaLCN + 1000;
            if (ZHXnUpZ[T5BEithvKpb].iOSPYlm4D > 80 && ZHXnUpZ[T5BEithvKpb].LEe0BNZKnCH == 'Y')
                ZHXnUpZ[T5BEithvKpb].x06SaLCN = ZHXnUpZ[T5BEithvKpb].x06SaLCN + 850;
            nnPQRm218 = nnPQRm218 + ZHXnUpZ[T5BEithvKpb].x06SaLCN;
            zOCLVS450a[T5BEithvKpb] = T5BEithvKpb;
            T5BEithvKpb = T5BEithvKpb +1;
        }
    }
    Sevo9bi (ZHXnUpZ, sldC7Lg, zOCLVS450a);
    printf ("%s\n", ZHXnUpZ[zOCLVS450a[0]].FRv4qUs);
    printf ("%d\n", ZHXnUpZ[zOCLVS450a[0]].x06SaLCN);
    printf ("%d", nnPQRm218);
    return (0);
}

void  Sevo9bi (struct   xHXBeW ZHXnUpZ [], int sldC7Lg, int zOCLVS450a []) {
    int T5BEithvKpb;
    int PFcGqX9ibtpj;
    T5BEithvKpb = 0;
    PFcGqX9ibtpj = 0;
    int dV5MPnYjJ;
    dV5MPnYjJ = 0;
    for (T5BEithvKpb = 0; T5BEithvKpb < sldC7Lg; T5BEithvKpb = T5BEithvKpb +1) {
        for (PFcGqX9ibtpj = 0; PFcGqX9ibtpj < sldC7Lg - T5BEithvKpb -1; PFcGqX9ibtpj = PFcGqX9ibtpj +1) {
            if (ZHXnUpZ[zOCLVS450a[PFcGqX9ibtpj]].x06SaLCN < ZHXnUpZ[zOCLVS450a[PFcGqX9ibtpj +1]].x06SaLCN) {
                dV5MPnYjJ = zOCLVS450a[PFcGqX9ibtpj];
                zOCLVS450a[PFcGqX9ibtpj] = zOCLVS450a[PFcGqX9ibtpj +1];
                zOCLVS450a[PFcGqX9ibtpj +1] = dV5MPnYjJ;
            }
        }
    }
}

