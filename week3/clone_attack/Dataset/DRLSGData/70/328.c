int main () {
    double  XG4Fx7hIw [100], mxwkVt [100], KsSPVw, T0f4GZSu;
    int HHj1fmv, VDEibCuFWLA, hYmuw3;
    cin >> HHj1fmv;
    {
        VDEibCuFWLA = 0;
        while (VDEibCuFWLA < HHj1fmv) {
            cin >> XG4Fx7hIw[VDEibCuFWLA] >> mxwkVt[VDEibCuFWLA];
            VDEibCuFWLA++;
        }
    }
    {
        VDEibCuFWLA = 0;
        while (HHj1fmv -1 > VDEibCuFWLA) {
            {
                hYmuw3 = 1;
                while (hYmuw3 < HHj1fmv) {
                    T0f4GZSu = sqrt ((XG4Fx7hIw[VDEibCuFWLA] - XG4Fx7hIw[hYmuw3]) * (XG4Fx7hIw[VDEibCuFWLA] - XG4Fx7hIw[hYmuw3]) + (mxwkVt[VDEibCuFWLA] - mxwkVt[hYmuw3]) * (mxwkVt[VDEibCuFWLA] - mxwkVt[hYmuw3]));
                    if (T0f4GZSu > KsSPVw)
                        KsSPVw = T0f4GZSu;
                    hYmuw3++;
                }
            }
            VDEibCuFWLA++;
        }
    }
    cout << KsSPVw;
    return 0;
}

