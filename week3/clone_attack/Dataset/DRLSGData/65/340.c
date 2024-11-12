int main () {
    int fLpTu8yc;
    int vL2VRd;
    int gAfrewcCq1E;
    int nydESRmJ4;
    int FI5Vwmv9M;
    int a;
    int HVhGpS9CY;
    fLpTu8yc = 0;
    vL2VRd = 0;
    double  ZMWezv0cNV, Dw61Tnc;
    scanf ("%d", &gAfrewcCq1E);
    {
        nydESRmJ4 = 1;
        while (nydESRmJ4 <= gAfrewcCq1E) {
            scanf ("%d %d", &a, &HVhGpS9CY);
            if ((a == 0 && HVhGpS9CY == 1) || (a == 1 && HVhGpS9CY == 2) || (a == 2 && HVhGpS9CY == 0))
                fLpTu8yc = fLpTu8yc + 1;
            if ((HVhGpS9CY == 0 && a == 1) || (HVhGpS9CY == 1 && a == 2) || (HVhGpS9CY == 2 && a == 0))
                vL2VRd = vL2VRd + 1;
            nydESRmJ4 = nydESRmJ4 + 1;
        }
    }
    if (fLpTu8yc > vL2VRd)
        ;
    if (fLpTu8yc < vL2VRd)
        ;
    if (fLpTu8yc == vL2VRd)
        ;
    return 0;
}

