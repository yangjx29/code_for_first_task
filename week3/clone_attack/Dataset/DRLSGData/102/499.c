int Ss2OFo (const  void  *VBgWcGAMePKI, const  void  *HJrXiDPfdpst) {
    return *(int*) VBgWcGAMePKI -*(int*) HJrXiDPfdpst;
}

int GVzSRYW (const  void  *VBgWcGAMePKI, const  void  *HJrXiDPfdpst) {
    return *(int*) HJrXiDPfdpst -*(int*) VBgWcGAMePKI;
}

int main () {
    float VBgWcGAMePKI [(358 - 317)];
    int RNdacuPmh;
    int orL2bi;
    int yTRhvO4HxLA;
    float HJrXiDPfdpst [(781 - 740)];
    orL2bi = (446 - 446);
    cin >> yTRhvO4HxLA;
    {
        int GwSZi3v1f;
        GwSZi3v1f = (430 - 430);
        for (; 41 > GwSZi3v1f;) {
            VBgWcGAMePKI[GwSZi3v1f] = -(38 - 37);
            HJrXiDPfdpst[GwSZi3v1f] = -(272 - 271);
            GwSZi3v1f = GwSZi3v1f +(935 - 934);
        }
    }
    RNdacuPmh = (31 - 31);
    {
        int GwSZi3v1f;
        GwSZi3v1f = (833 - 833);
        for (; yTRhvO4HxLA > GwSZi3v1f;) {
            float NiDz6Gj7V80;
            char tbnALvIj [10];
            GwSZi3v1f = GwSZi3v1f +(118 - 117);
            cin >> tbnALvIj;
            cin >> NiDz6Gj7V80;
            if (!('m' != tbnALvIj[(428 - 428)])) {
                VBgWcGAMePKI[RNdacuPmh] = NiDz6Gj7V80;
                RNdacuPmh = RNdacuPmh +(182 - 181);
            }
            else {
                HJrXiDPfdpst[orL2bi] = NiDz6Gj7V80;
                orL2bi++;
            }
        }
    }
    qsort (VBgWcGAMePKI, RNdacuPmh, sizeof (int), Ss2OFo);
    qsort (HJrXiDPfdpst, orL2bi, sizeof (int), GVzSRYW);
    {
        int GwSZi3v1f;
        GwSZi3v1f = (927 - 927);
        for (; GwSZi3v1f < RNdacuPmh;) {
            printf ("%.2f ", VBgWcGAMePKI[GwSZi3v1f]);
            GwSZi3v1f++;
        }
    }
    {
        int GwSZi3v1f;
        GwSZi3v1f = 0;
        for (; orL2bi > GwSZi3v1f;) {
            if (GwSZi3v1f == orL2bi - 1)
                printf ("%.2f", HJrXiDPfdpst[GwSZi3v1f]);
            else
                printf ("%.2f ", HJrXiDPfdpst[GwSZi3v1f]);
            GwSZi3v1f++;
        }
    }
    return 0;
}

