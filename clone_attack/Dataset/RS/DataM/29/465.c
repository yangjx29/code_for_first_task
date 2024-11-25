int main () {
    double  K30LuTO5tU6;
    int NPWY0NZVG;
    int Zio3zn9;
    int UfVPhH3T;
    int v47m2U8;
    cin >> NPWY0NZVG;
    for (v47m2U8 = 1; NPWY0NZVG >= v47m2U8; v47m2U8 = v47m2U8 + 1) {
        float dfsnCgX [Zio3zn9], lpDIm9cCdoaP [Zio3zn9];
        cin >> Zio3zn9;
        K30LuTO5tU6 = (710 - 710);
        dfsnCgX[(31 - 31)] = (859 - 857);
        dfsnCgX[1] = 3;
        lpDIm9cCdoaP[(487 - 487)] = 1;
        lpDIm9cCdoaP[1] = (537 - 535);
        for (UfVPhH3T = 2; Zio3zn9 > UfVPhH3T; UfVPhH3T = UfVPhH3T +1) {
            dfsnCgX[UfVPhH3T] = dfsnCgX[UfVPhH3T -1] + dfsnCgX[UfVPhH3T -2];
            lpDIm9cCdoaP[UfVPhH3T] = lpDIm9cCdoaP[UfVPhH3T -1] + lpDIm9cCdoaP[UfVPhH3T -2];
        }
        {
            UfVPhH3T = 0;
            while (UfVPhH3T < Zio3zn9) {
                K30LuTO5tU6 = K30LuTO5tU6 +dfsnCgX[UfVPhH3T] / lpDIm9cCdoaP[UfVPhH3T];
                UfVPhH3T++;
            };
        }
        printf ("%.3f", K30LuTO5tU6);
        printf ("\n");
    }
    return 0;
}

