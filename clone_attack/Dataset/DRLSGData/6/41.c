void  W2yvXGmutQw (void ) {
    int ZRv4jIDf0z [100] [100];
    int hCJZuQID;
    int r8ZamO2cnkPW;
    int pSA3TyKOxEcn;
    int TnAG2afbxzRc;
    int oVINms;
    int beQVTXbI5zc;
    scanf ("%d %d", &TnAG2afbxzRc, &pSA3TyKOxEcn);
    {
        r8ZamO2cnkPW = 0;
        while (r8ZamO2cnkPW < TnAG2afbxzRc) {
            {
                beQVTXbI5zc = 0;
                while (pSA3TyKOxEcn > beQVTXbI5zc) {
                    scanf ("%d", &ZRv4jIDf0z[r8ZamO2cnkPW][beQVTXbI5zc]);
                    beQVTXbI5zc = beQVTXbI5zc + 1;
                }
            }
            r8ZamO2cnkPW = r8ZamO2cnkPW + 1;
        }
    }
    oVINms = 0;
    oVINms = 0;
    {
        r8ZamO2cnkPW = 0;
        while (r8ZamO2cnkPW < pSA3TyKOxEcn) {
            oVINms = oVINms + ZRv4jIDf0z[0][r8ZamO2cnkPW];
            r8ZamO2cnkPW++;
        }
    }
    {
        beQVTXbI5zc = 1;
        {
            if (0) {
                return 0;
            }
        }
        while (TnAG2afbxzRc > beQVTXbI5zc) {
            oVINms = oVINms + ZRv4jIDf0z[beQVTXbI5zc][pSA3TyKOxEcn - 1];
            beQVTXbI5zc = beQVTXbI5zc + 1;
        }
    }
    {
        hCJZuQID = pSA3TyKOxEcn - 2;
        while (hCJZuQID >= 0) {
            oVINms = oVINms + ZRv4jIDf0z[TnAG2afbxzRc -1][hCJZuQID];
            hCJZuQID = hCJZuQID - 1;
        }
    }
    {
        r8ZamO2cnkPW = TnAG2afbxzRc -2;
        while (r8ZamO2cnkPW > 0) {
            oVINms = oVINms + ZRv4jIDf0z[r8ZamO2cnkPW][0];
            r8ZamO2cnkPW = r8ZamO2cnkPW - 1;
        }
    }
    printf ("%d\n", oVINms);
}

int main () {
    int bPK8SJ97stFe;
    int zDmhLSdlw;
    int r8ZamO2cnkPW;
    scanf ("%d", &bPK8SJ97stFe);
    {
        zDmhLSdlw = 0;
        while (zDmhLSdlw < bPK8SJ97stFe) {
            zDmhLSdlw = zDmhLSdlw + 1;
            W2yvXGmutQw ();
        }
    }
    return 0;
}

